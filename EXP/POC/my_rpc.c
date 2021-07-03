

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "my_rpc.h"

#define TYPE_FORMAT_STRING_SIZE   681                               
#define PROC_FORMAT_STRING_SIZE   4035                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rpc_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString;
extern const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString;
extern const rpc_MIDL_EXPR_FORMAT_STRING rpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */

 extern const MIDL_STUBLESS_PROXY_INFO winspool_ProxyInfo;

static const RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "ncacn_np", (unsigned char *) "\\pipe\\spoolss"}
    };


static const RPC_CLIENT_INTERFACE winspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    1,
    (RPC_PROTSEQ_ENDPOINT *)__RpcProtseqEndpoint,
    0,
    &winspool_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE winspool_v1_0_c_ifspec = (RPC_IF_HANDLE)& winspool___RpcClientInterface;

extern const MIDL_STUB_DESC winspool_StubDesc;

static RPC_BINDING_HANDLE winspool__MIDL_AutoBindHandle;


DWORD RpcEnumPrinters( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  0,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  1,
                  0,
                  pPrinterName,
                  pHandle,
                  pDatatype,
                  pDevModeContainer,
                  AccessRequired);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  2,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  3,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobs( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  4,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  5,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  6,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  7,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  8,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  9,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDrivers( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  10,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  11,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriverDirectory( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  12,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  13,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrintProcessor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  14,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrintProcessors( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  15,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrintProcessorDirectory( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  16,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  17,
                  0,
                  hPrinter,
                  pDocInfoContainer,
                  pJobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartPagePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  18,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  19,
                  0,
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcWritten);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndPagePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  20,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAbortPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  21,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReadPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  22,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  23,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  24,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcScheduleJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  25,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  26,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  27,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWaitForPrinterChange( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  28,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcClosePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  29,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  30,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  31,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  32,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  33,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumForms( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  34,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPorts( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  35,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumMonitors( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  36,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  37,
                  0,
                  IDL_handle);
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  38,
                  0,
                  IDL_handle);
    
}


DWORD RpcDeletePort( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  39,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcCreatePrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  40,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  41,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  42,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  43,
                  0,
                  IDL_handle);
    
}


void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  44,
                  0,
                  IDL_handle);
    
}


void Opnum45NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  45,
                  0,
                  IDL_handle);
    
}


DWORD RpcAddMonitor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  46,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteMonitor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  47,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrintProcessor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  48,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  49,
                  0,
                  IDL_handle);
    
}


void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  50,
                  0,
                  IDL_handle);
    
}


DWORD RpcEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  51,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcResetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  52,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver2( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  53,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  54,
                  0,
                  IDL_handle);
    
}


void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  55,
                  0,
                  IDL_handle);
    
}


DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  56,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  57,
                  0,
                  IDL_handle);
    
}


DWORD RpcReplyOpenPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  58,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  59,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReplyClosePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  60,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPortEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  61,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  62,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  63,
                  0,
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  64,
                  0,
                  IDL_handle);
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  65,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  66,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  67,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  68,
                  0,
                  IDL_handle);
    
}


DWORD RpcOpenPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  69,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  70,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPort( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  71,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  72,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  73,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  74,
                  0,
                  IDL_handle);
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  75,
                  0,
                  IDL_handle);
    
}


void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  76,
                  0,
                  IDL_handle);
    
}


DWORD RpcSetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  77,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  78,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  79,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterKey( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  80,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  81,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterKey( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  82,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  83,
                  0,
                  IDL_handle);
    
}


DWORD RpcDeletePrinterDriverEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  84,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPerMachineConnection( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  85,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePerMachineConnection( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  86,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPerMachineConnections( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  87,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcXcvData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  88,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriverEx( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  89,
                  0,
                  IDL_handle,
                  pName,
                  pDriverContainer,
                  dwFileCopyFlags);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  90,
                  0,
                  IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  91,
                  0,
                  IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  92,
                  0,
                  IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  93,
                  0,
                  IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  94,
                  0,
                  IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  95,
                  0,
                  IDL_handle);
    
}


DWORD RpcFlushPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  96,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSendRecvBidiData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  97,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  98,
                  0,
                  IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  99,
                  0,
                  IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  100,
                  0,
                  IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  101,
                  0,
                  IDL_handle);
    
}


HRESULT RpcGetCorePrinterDrivers( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  102,
                  0,
                  IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  103,
                  0,
                  IDL_handle);
    
}


HRESULT RpcGetPrinterDriverPackagePath( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  104,
                  0,
                  IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  105,
                  0,
                  IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  106,
                  0,
                  IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  107,
                  0,
                  IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  108,
                  0,
                  IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  109,
                  0,
                  IDL_handle);
    
}


DWORD RpcGetJobNamedPropertyValue( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  110,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJobNamedProperty( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  111,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteJobNamedProperty( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  112,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobNamedProperties( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  113,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  114,
                  0,
                  IDL_handle);
    
}


/* Standard interface: __MIDL_itf_rpc_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0x40 ),	/* 64 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 52 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 62 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 64 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 68 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 70 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 72 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pDatatype */

/* 74 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 76 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 78 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 80 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 82 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 84 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter AccessRequired */

/* 86 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 88 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 92 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 94 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 98 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x2 ),	/* 2 */
/* 106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 108 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 118 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x3 ),	/* 3 */
/* 142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x5 ),	/* 5 */
/* 214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 216 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 226 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 242 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x6 ),	/* 6 */
/* 250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 252 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x7 ),	/* 7 */
/* 286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 288 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 298 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 334 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 350 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x9 ),	/* 9 */
/* 358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 360 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0xa ),	/* 10 */
/* 394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 422 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0xb ),	/* 11 */
/* 430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 432 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 442 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 458 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0xc ),	/* 12 */
/* 466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 468 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 478 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 494 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0xd ),	/* 13 */
/* 502 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 504 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 514 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0xe ),	/* 14 */
/* 538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 540 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 550 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 566 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0xf ),	/* 15 */
/* 574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 576 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 586 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 610 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 612 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 638 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x11 ),	/* 17 */
/* 646 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 648 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 650 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 652 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 656 */	NdrFcShort( 0x24 ),	/* 36 */
/* 658 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 660 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 670 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 672 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 674 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pDocInfoContainer */

/* 676 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 680 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter pJobId */

/* 682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x12 ),	/* 18 */
/* 702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 704 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 712 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 714 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 730 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x13 ),	/* 19 */
/* 738 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 740 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 742 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 744 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x2c ),	/* 44 */
/* 748 */	NdrFcShort( 0x24 ),	/* 36 */
/* 750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 752 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 762 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 764 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 766 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pBuf */

/* 768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 770 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 772 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter cbBuf */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x14 ),	/* 20 */
/* 800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 802 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 812 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 828 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x15 ),	/* 21 */
/* 836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 838 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x16 ),	/* 22 */
/* 872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 874 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 884 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x17 ),	/* 23 */
/* 908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 910 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 914 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 932 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 934 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 936 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 940 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 944 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x18 ),	/* 24 */
/* 952 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 954 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 980 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x19 ),	/* 25 */
/* 988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 990 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1000 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 1016 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1024 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1026 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1036 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 1052 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1060 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1062 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1072 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 1088 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1098 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1108 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1132 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1134 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1144 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1160 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1168 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1170 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1172 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1180 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1192 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1196 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1206 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1216 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1232 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1242 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 1268 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1276 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1278 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 1304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1312 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1324 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 1340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 1376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1384 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1386 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1388 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1396 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 1412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1422 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1432 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1442 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1450 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1452 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1462 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePort */

/* 1472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1482 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1492 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1504 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 1508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1516 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1518 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1520 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1528 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 1544 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1554 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1564 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 1580 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1590 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1600 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1612 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 1616 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1626 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1636 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 1646 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1656 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1666 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum45NotUsedOnWire */

/* 1676 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1684 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1686 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1696 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcAddMonitor */

/* 1706 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1716 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1726 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 1742 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1750 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1752 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1762 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 1778 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1788 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1798 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 1814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1824 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1834 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 1844 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1854 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1864 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 1874 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1884 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1892 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1894 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 1910 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1918 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1920 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1930 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 1946 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1956 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1958 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1966 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 1982 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1992 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2002 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 2012 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2024 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2030 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2032 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 2042 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2052 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2062 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2074 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 2078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2086 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2088 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2098 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 2108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2128 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 2144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2154 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2164 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 2180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2200 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 2216 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2226 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2236 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 2252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2262 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2270 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2272 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2296 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2298 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2308 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2328 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 2348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2358 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2368 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinterEx */

/* 2384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x42 ),	/* 66 */
/* 2392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterRefreshPrinterChangeNotification */

/* 2420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2428 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2430 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 2456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2466 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2476 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcOpenPrinterEx */

/* 2486 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2496 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2498 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2506 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterEx */

/* 2522 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x46 ),	/* 70 */
/* 2530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2532 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2534 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2540 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2542 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPort */

/* 2558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x47 ),	/* 71 */
/* 2566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2568 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2576 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2578 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterData */

/* 2594 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2604 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2606 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2614 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterData */

/* 2630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x49 ),	/* 73 */
/* 2638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 2666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x4a ),	/* 74 */
/* 2674 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2676 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2678 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2686 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 2696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2702 */	NdrFcShort( 0x4b ),	/* 75 */
/* 2704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2706 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2716 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 2726 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2736 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2746 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcSetPrinterDataEx */

/* 2756 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x4d ),	/* 77 */
/* 2764 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2766 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2776 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2788 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDataEx */

/* 2792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x4e ),	/* 78 */
/* 2800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2802 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2812 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDataEx */

/* 2828 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x4f ),	/* 79 */
/* 2836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2838 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterKey */

/* 2864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2874 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2876 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2884 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDataEx */

/* 2900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x51 ),	/* 81 */
/* 2908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2920 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2932 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterKey */

/* 2936 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2942 */	NdrFcShort( 0x52 ),	/* 82 */
/* 2944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2946 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2948 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2956 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 2972 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x53 ),	/* 83 */
/* 2980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2982 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2984 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2990 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2992 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePrinterDriverEx */

/* 3002 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3010 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3012 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3014 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3022 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3034 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPerMachineConnection */

/* 3038 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3046 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3048 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3050 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3056 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3058 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePerMachineConnection */

/* 3074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3082 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3084 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3086 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3094 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3106 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPerMachineConnections */

/* 3110 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x57 ),	/* 87 */
/* 3118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcXcvData */

/* 3146 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3156 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3166 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriverEx */

/* 3182 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x59 ),	/* 89 */
/* 3190 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3192 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3202 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3216 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 3218 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3220 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3222 */	NdrFcShort( 0x298 ),	/* Type Offset=664 */

	/* Parameter dwFileCopyFlags */

/* 3224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3226 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3232 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 3236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x5a ),	/* 90 */
/* 3244 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3254 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3256 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 3266 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x5b ),	/* 91 */
/* 3274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3276 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3286 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 3296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3304 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3306 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3308 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3316 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 3326 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x5d ),	/* 93 */
/* 3334 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3336 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3346 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 3356 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3366 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3376 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 3386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x5f ),	/* 95 */
/* 3394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFlushPrinter */

/* 3416 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x60 ),	/* 96 */
/* 3424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3426 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3436 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3448 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSendRecvBidiData */

/* 3452 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x61 ),	/* 97 */
/* 3460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3462 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3472 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 3488 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x62 ),	/* 98 */
/* 3496 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3498 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3500 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3508 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 3518 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x63 ),	/* 99 */
/* 3526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3528 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3536 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3538 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 3548 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x64 ),	/* 100 */
/* 3556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3558 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3568 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 3578 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x65 ),	/* 101 */
/* 3586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3588 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3598 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetCorePrinterDrivers */

/* 3608 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x66 ),	/* 102 */
/* 3616 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3618 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3628 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 3644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x67 ),	/* 103 */
/* 3652 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3664 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetPrinterDriverPackagePath */

/* 3674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3694 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 3710 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x69 ),	/* 105 */
/* 3718 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3720 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3722 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3730 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 3740 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x6a ),	/* 106 */
/* 3748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3750 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3760 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 3770 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x6b ),	/* 107 */
/* 3778 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3780 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3782 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3790 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 3800 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x6c ),	/* 108 */
/* 3808 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3810 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3812 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3820 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 3830 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x6d ),	/* 109 */
/* 3838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3840 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3850 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetJobNamedPropertyValue */

/* 3860 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x6e ),	/* 110 */
/* 3868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3870 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3872 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3880 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJobNamedProperty */

/* 3896 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x6f ),	/* 111 */
/* 3904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3906 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3916 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteJobNamedProperty */

/* 3932 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x70 ),	/* 112 */
/* 3940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3942 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3944 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3952 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3964 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobNamedProperties */

/* 3968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x71 ),	/* 113 */
/* 3976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3978 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3980 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3988 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 4004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x72 ),	/* 114 */
/* 4012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4014 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4024 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0xe ),	/* Offset= 14 (30) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 30 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 32 */	NdrFcShort( 0x10 ),	/* 16 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x6 ),	/* Offset= 6 (42) */
/* 38 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 40 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 42 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 48 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0x34 ),	/* Offset= 52 (104) */
/* 54 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 58 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 60 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	NdrFcShort( 0x8 ),	/* 8 */
/* 66 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 68 */	NdrFcLong( 0x1 ),	/* 1 */
/* 72 */	NdrFcShort( 0x4 ),	/* Offset= 4 (76) */
/* 74 */	NdrFcShort( 0xffff ),	/* Offset= -1 (73) */
/* 76 */	
			0x12, 0x0,	/* FC_UP */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 82 */	NdrFcShort( 0x18 ),	/* 24 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x6 ),	/* Offset= 6 (92) */
/* 88 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 90 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 92 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 94 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 96 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 98 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* Offset= 0 (110) */
/* 112 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 114 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (54) */
/* 118 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 122 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x11, 0x0,	/* FC_RP */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 136 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 138 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 140 */	
			0x11, 0x0,	/* FC_RP */
/* 142 */	NdrFcShort( 0x20a ),	/* Offset= 522 (664) */
/* 144 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 146 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 148 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (154) */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0x3006 ),	/* 12294 */
/* 158 */	NdrFcLong( 0x1 ),	/* 1 */
/* 162 */	NdrFcShort( 0x22 ),	/* Offset= 34 (196) */
/* 164 */	NdrFcLong( 0x2 ),	/* 2 */
/* 168 */	NdrFcShort( 0x2e ),	/* Offset= 46 (214) */
/* 170 */	NdrFcLong( 0x3 ),	/* 3 */
/* 174 */	NdrFcShort( 0x50 ),	/* Offset= 80 (254) */
/* 176 */	NdrFcLong( 0x4 ),	/* 4 */
/* 180 */	NdrFcShort( 0x94 ),	/* Offset= 148 (328) */
/* 182 */	NdrFcLong( 0x6 ),	/* 6 */
/* 186 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (410) */
/* 188 */	NdrFcLong( 0x8 ),	/* 8 */
/* 192 */	NdrFcShort( 0x140 ),	/* Offset= 320 (512) */
/* 194 */	NdrFcShort( 0xffff ),	/* Offset= -1 (193) */
/* 196 */	
			0x12, 0x0,	/* FC_UP */
/* 198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (200) */
/* 200 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x4 ),	/* Offset= 4 (210) */
/* 208 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x12, 0x0,	/* FC_UP */
/* 216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (218) */
/* 218 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 220 */	NdrFcShort( 0x30 ),	/* 48 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0xa ),	/* Offset= 10 (234) */
/* 226 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 228 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 230 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 232 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 234 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 244 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 246 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 248 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x12, 0x0,	/* FC_UP */
/* 256 */	NdrFcShort( 0xe ),	/* Offset= 14 (270) */
/* 258 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 260 */	NdrFcShort( 0x2 ),	/* 2 */
/* 262 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 264 */	NdrFcShort( 0x48 ),	/* 72 */
/* 266 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 268 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 270 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 272 */	NdrFcShort( 0x58 ),	/* 88 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x10 ),	/* Offset= 16 (292) */
/* 278 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 280 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 282 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 284 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 286 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 288 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 290 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 292 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 294 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 298 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 300 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 302 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 304 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 306 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 308 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 314 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 316 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 318 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 320 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 322 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 324 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 326 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (258) */
/* 328 */	
			0x12, 0x0,	/* FC_UP */
/* 330 */	NdrFcShort( 0xe ),	/* Offset= 14 (344) */
/* 332 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 334 */	NdrFcShort( 0x2 ),	/* 2 */
/* 336 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 338 */	NdrFcShort( 0x58 ),	/* 88 */
/* 340 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 342 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 344 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x68 ),	/* 104 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x14 ),	/* Offset= 20 (370) */
/* 352 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 354 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 356 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 358 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 360 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 362 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 364 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 366 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 370 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 374 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 376 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 378 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 380 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 382 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 384 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 386 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 390 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 392 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 394 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 396 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 398 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 400 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 402 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 404 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (258) */
/* 406 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 408 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (332) */
/* 410 */	
			0x12, 0x0,	/* FC_UP */
/* 412 */	NdrFcShort( 0xa ),	/* Offset= 10 (422) */
/* 414 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 420 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 422 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 424 */	NdrFcShort( 0x98 ),	/* 152 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x1c ),	/* Offset= 28 (456) */
/* 430 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 432 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 434 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 436 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 438 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 440 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 442 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 444 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 446 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 448 */	NdrFcShort( 0xffde ),	/* Offset= -34 (414) */
/* 450 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 452 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 454 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 456 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 458 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 460 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 462 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 464 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 466 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 468 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 470 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 472 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 474 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 476 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 478 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 480 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 482 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 484 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 486 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 488 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 490 */	NdrFcShort( 0xff18 ),	/* Offset= -232 (258) */
/* 492 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 494 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (332) */
/* 496 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 498 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 508 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 510 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 512 */	
			0x12, 0x0,	/* FC_UP */
/* 514 */	NdrFcShort( 0x1a ),	/* Offset= 26 (540) */
/* 516 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 518 */	NdrFcShort( 0x2 ),	/* 2 */
/* 520 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 522 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 526 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 528 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 530 */	NdrFcShort( 0x2 ),	/* 2 */
/* 532 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 538 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 542 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x2a ),	/* Offset= 42 (588) */
/* 548 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 550 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 552 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 554 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 556 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 558 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 560 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 562 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 566 */	NdrFcShort( 0xff68 ),	/* Offset= -152 (414) */
/* 568 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 570 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 572 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 574 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 576 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 578 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 580 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 582 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (414) */
/* 586 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 588 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 590 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 592 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 594 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 596 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 598 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 600 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 602 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 604 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 606 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 608 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 610 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 612 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 614 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 616 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 618 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 620 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 622 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (258) */
/* 624 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 626 */	NdrFcShort( 0xfeda ),	/* Offset= -294 (332) */
/* 628 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 630 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 632 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 634 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 636 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 638 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 640 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 642 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 644 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 646 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 648 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 650 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 652 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 654 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (516) */
/* 656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 658 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 662 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (528) */
/* 664 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x10 ),	/* 16 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* Offset= 0 (670) */
/* 672 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 674 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 676 */	NdrFcShort( 0xfdec ),	/* Offset= -532 (144) */
/* 678 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short winspool_FormatStringOffsetTable[] =
    {
    0,
    36,
    98,
    134,
    170,
    206,
    242,
    278,
    314,
    350,
    386,
    422,
    458,
    494,
    530,
    566,
    602,
    638,
    694,
    730,
    792,
    828,
    864,
    900,
    944,
    980,
    1016,
    1052,
    1088,
    1124,
    1160,
    1196,
    1232,
    1268,
    1304,
    1340,
    1376,
    1412,
    1442,
    1472,
    1508,
    1544,
    1580,
    1616,
    1646,
    1676,
    1706,
    1742,
    1778,
    1814,
    1844,
    1874,
    1910,
    1946,
    1982,
    2012,
    2042,
    2078,
    2108,
    2144,
    2180,
    2216,
    2252,
    2288,
    2318,
    2348,
    2384,
    2420,
    2456,
    2486,
    2522,
    2558,
    2594,
    2630,
    2666,
    2696,
    2726,
    2756,
    2792,
    2828,
    2864,
    2900,
    2936,
    2972,
    3002,
    3038,
    3074,
    3110,
    3146,
    3182,
    3236,
    3266,
    3296,
    3326,
    3356,
    3386,
    3416,
    3452,
    3488,
    3518,
    3548,
    3578,
    3608,
    3644,
    3674,
    3710,
    3740,
    3770,
    3800,
    3830,
    3860,
    3896,
    3932,
    3968,
    4004
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag331_t;
extern const __midl_frag331_t __midl_frag331;

typedef 
NDR64_FORMAT_CHAR
__midl_frag330_t;
extern const __midl_frag330_t __midl_frag330;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag329_t;
extern const __midl_frag329_t __midl_frag329;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
    struct _NDR64_POINTER_FORMAT frag15;
    struct _NDR64_POINTER_FORMAT frag16;
    struct _NDR64_POINTER_FORMAT frag17;
    struct _NDR64_POINTER_FORMAT frag18;
    struct _NDR64_POINTER_FORMAT frag19;
}
__midl_frag296_t;
extern const __midl_frag296_t __midl_frag296;

typedef 
NDR64_FORMAT_CHAR
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag294_t;
extern const __midl_frag294_t __midl_frag294;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag293_t;
extern const __midl_frag293_t __midl_frag293;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag292_t;
extern const __midl_frag292_t __midl_frag292;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag290_t;
extern const __midl_frag290_t __midl_frag290;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag289_t;
extern const __midl_frag289_t __midl_frag289;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag280_t;
extern const __midl_frag280_t __midl_frag280;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag278_t;
extern const __midl_frag278_t __midl_frag278;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag277_t;
extern const __midl_frag277_t __midl_frag277;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_MEMPAD_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
    } frag2;
}
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
}
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
    } frag2;
}
__midl_frag247_t;
extern const __midl_frag247_t __midl_frag247;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag246_t;
extern const __midl_frag246_t __midl_frag246;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
}
__midl_frag245_t;
extern const __midl_frag245_t __midl_frag245;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
}
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag208_t;
extern const __midl_frag208_t __midl_frag208;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag205_t;
extern const __midl_frag205_t __midl_frag205;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag203_t;
extern const __midl_frag203_t __midl_frag203;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    NDR64_UINT32 frag9;
}
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag197_t;
extern const __midl_frag197_t __midl_frag197;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
NDR64_FORMAT_CHAR
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag331_t __midl_frag331 =
{ 
/* Opnum114NotUsedOnWire */
    { 
    /* Opnum114NotUsedOnWire */      /* procedure Opnum114NotUsedOnWire */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    }
};

static const __midl_frag330_t __midl_frag330 =
0x5    /* FC64_INT32 */;

static const __midl_frag329_t __midl_frag329 =
{ 
/* RpcEnumJobNamedProperties */
    { 
    /* RpcEnumJobNamedProperties */      /* procedure RpcEnumJobNamedProperties */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag296_t __midl_frag296 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag277
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag280
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag289
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag293
    }
};

static const __midl_frag295_t __midl_frag295 =
0x11    /* FC64_WCHAR */;

static const __midl_frag294_t __midl_frag294 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 196 /* 0xc4 */
    }
};

static const __midl_frag293_t __midl_frag293 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag294
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag295
    }
};

static const __midl_frag292_t __midl_frag292 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag290_t __midl_frag290 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */
    }
};

static const __midl_frag289_t __midl_frag289 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag290
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag295
    }
};

static const __midl_frag281_t __midl_frag281 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */
    }
};

static const __midl_frag280_t __midl_frag280 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag281
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag295
    }
};

static const __midl_frag278_t __midl_frag278 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */
    }
};

static const __midl_frag277_t __midl_frag277 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag278
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag295
    }
};

static const __midl_frag268_t __midl_frag268 =
{ 
/* RPC_DRIVER_INFO_8 */
    { 
    /* RPC_DRIVER_INFO_8 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_8 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 224 /* 0xe0 */,
        0,
        0,
        &__midl_frag296,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* *RPC_DRIVER_INFO_8 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag268
};

static const __midl_frag266_t __midl_frag266 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag277
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag280
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    }
};

static const __midl_frag247_t __midl_frag247 =
{ 
/* RPC_DRIVER_INFO_6 */
    { 
    /* RPC_DRIVER_INFO_6 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_6 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 152 /* 0x98 */,
        0,
        0,
        &__midl_frag266,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag246_t __midl_frag246 =
{ 
/* *RPC_DRIVER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag247
};

static const __midl_frag245_t __midl_frag245 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag277
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag280
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* RPC_DRIVER_INFO_4 */
    { 
    /* RPC_DRIVER_INFO_4 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_4 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 104 /* 0x68 */,
        0,
        0,
        &__midl_frag245,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* *RPC_DRIVER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag230
};

static const __midl_frag228_t __midl_frag228 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag277
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* RPC_DRIVER_INFO_3 */
    { 
    /* RPC_DRIVER_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_3 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag228,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* *RPC_DRIVER_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag216
};

static const __midl_frag214_t __midl_frag214 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    }
};

static const __midl_frag208_t __midl_frag208 =
{ 
/* DRIVER_INFO_2 */
    { 
    /* DRIVER_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_INFO_2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        &__midl_frag214,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* *DRIVER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag208
};

static const __midl_frag205_t __midl_frag205 =
{ 
/* DRIVER_INFO_1 */
    { 
    /* DRIVER_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_INFO_1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag292
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag204_t __midl_frag204 =
{ 
/* *DRIVER_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag205
};

static const __midl_frag203_t __midl_frag203 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag202_t __midl_frag202 =
{ 
/* __MIDL_winspool_0002 */
    { 
    /* __MIDL_winspool_0002 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag203,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 6 /* 0x6 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag204,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag207,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag215,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag229,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag246,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag267,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* DRIVER_CONTAINER */
    { 
    /* DRIVER_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_CONTAINER */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag202
        },
        { 
        /* DRIVER_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* *DRIVER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag201
};

static const __midl_frag198_t __midl_frag198 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag292
};

static const __midl_frag197_t __midl_frag197 =
{ 
/* RpcAddPrinterDriverEx */
    { 
    /* RpcAddPrinterDriverEx */      /* procedure RpcAddPrinterDriverEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag198,
        { 
        /* pName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDriverContainer */      /* parameter pDriverContainer */
        &__midl_frag201,
        { 
        /* pDriverContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwFileCopyFlags */      /* parameter dwFileCopyFlags */
        &__midl_frag330,
        { 
        /* dwFileCopyFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* RpcEndDocPrinter */
    { 
    /* RpcEndDocPrinter */      /* procedure RpcEndDocPrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag82,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag330
};

static const __midl_frag70_t __midl_frag70 =
0x10    /* FC64_CHAR */;

static const __midl_frag69_t __midl_frag69 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag68_t __midl_frag68 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag69
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag70
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag68
};

static const __midl_frag65_t __midl_frag65 =
{ 
/* RpcWritePrinter */
    { 
    /* RpcWritePrinter */      /* procedure RpcWritePrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag82,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pBuf */      /* parameter pBuf */
        &__midl_frag68,
        { 
        /* pBuf */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag330,
        { 
        /* cbBuf */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pcWritten */      /* parameter pcWritten */
        &__midl_frag330,
        { 
        /* pcWritten */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag56_t __midl_frag56 =
{ 
/* DOC_INFO_1 */
    { 
    /* DOC_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag292
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag292
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag292
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* *DOC_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag56
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* __MIDL_winspool_0001 */
    { 
    /* __MIDL_winspool_0001 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag203,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag55,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* DOC_INFO_CONTAINER */
    { 
    /* DOC_INFO_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_CONTAINER */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag53
        },
        { 
        /* DOC_INFO_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag51_t __midl_frag51 =
{ 
/* *DOC_INFO_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag52
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* RpcStartDocPrinter */
    { 
    /* RpcStartDocPrinter */      /* procedure RpcStartDocPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag82,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pDocInfoContainer */      /* parameter pDocInfoContainer */
        &__midl_frag52,
        { 
        /* pDocInfoContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pJobId */      /* parameter pJobId */
        &__midl_frag330,
        { 
        /* pJobId */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag13
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag203
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag70
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* DEVMODE_CONTAINER */
    { 
    /* DEVMODE_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DEVMODE_CONTAINER */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag16,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag8
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* RpcOpenPrinter */
    { 
    /* RpcOpenPrinter */      /* procedure RpcOpenPrinter */
        (NDR64_UINT32) 2883651 /* 0x2c0043 */,    /* auto handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag198,
        { 
        /* pPrinterName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pHandle */      /* parameter pHandle */
        &__midl_frag8,
        { 
        /* pHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag198,
        { 
        /* pDatatype */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag12,
        { 
        /* pDevModeContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* AccessRequired */      /* parameter AccessRequired */
        &__midl_frag330,
        { 
        /* AccessRequired */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag330,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef winspool_Ndr64ProcTable[] =
    {
    &__midl_frag329,
    &__midl_frag4,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag49,
    &__midl_frag329,
    &__midl_frag65,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag81,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag197,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag331,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag329,
    &__midl_frag331
    };


static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void *)& winspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winspool__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    rpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& winspool_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO winspool_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    rpc__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    rpc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) winspool_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO winspool_ProxyInfo =
    {
    &winspool_StubDesc,
    rpc__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)winspool_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

