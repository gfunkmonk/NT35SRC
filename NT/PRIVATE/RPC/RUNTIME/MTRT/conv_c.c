
#include <string.h>
#ifdef _ALPHA_
#include <stdarg.h>
#endif

#include "conv.h"


extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;


extern RPC_DISPATCH_TABLE conv_DispatchTable;

static const RPC_CLIENT_INTERFACE conv___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x333a2276,0x0000,0x0000,{0x0d,0x00,0x00,0x80,0x9c,0x00,0x00,0x00}},{3,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &conv_DispatchTable,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE _conv_ClientIfHandle = (RPC_IF_HANDLE)& conv___RpcClientInterface;

extern const MIDL_STUB_DESC conv_StubDesc;

static RPC_BINDING_HANDLE conv__MIDL_AutoBindHandle;

void __RPC_STUB
conv_conv_who_are_you(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long __RPC_FAR *SequenceNumber;
    unsigned long ServerBootTime;
    unsigned long __RPC_FAR *Status;
    unsigned long _M0;
    unsigned long _M1;
    MIDL_STUB_MESSAGE _StubMsg;
    UUID __RPC_FAR *pUuid;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &conv_StubDesc);
    pUuid = 0;
    SequenceNumber = 0;
    Status = 0;
    RpcTryFinally
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_SERVER);
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pUuid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[0],
                              (unsigned char)0 );
        
        ServerBootTime = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        SequenceNumber = &_M0;
        Status = &_M1;
        
        conv_who_are_you(
                    pUuid,
                    ServerBootTime,
                    SequenceNumber,
                    Status);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *SequenceNumber;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *Status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pUuid,
                        &__MIDLFormatString.Format[0] );
        
        NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC conv_StubDesc = 
    {
    (void __RPC_FAR *)& conv___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &conv__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    __MIDLFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0, /* Reserved */
    0, /* Reserved */
    0  /* Reserved */
    };

static RPC_DISPATCH_FUNCTION conv_table[] =
    {
    conv_conv_who_are_you,
    0
    };
RPC_DISPATCH_TABLE conv_DispatchTable = 
    {
    1,
    conv_table
    };

static const MIDL_FORMAT_STRING __MIDLProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/*  2 */	0x0, 0x0,	/* Type Offset=0 */
/*  4 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/*  8 */	0x16, 0x0,	/* Type Offset=22 */
/* 10 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 12 */	0x16, 0x0,	/* Type Offset=22 */
/* 14 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_FORMAT_STRING __MIDLFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	0x8, 0x0,	/* Offset= 8 (10) */
/*  4 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  6 */	0x8, 0x0,	/* 8 */
/*  8 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	0x10, 0x0,	/* 16 */
/* 14 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 16 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 18 */	0x0,		/* 0 */
			0xf1, 0xff,	/* Offset= -15 (4) */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
