
#include <string.h>
#ifdef _ALPHA_
#include <stdarg.h>
#endif

#include "mgmt.h"


extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;


static const RPC_CLIENT_INTERFACE mgmt___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4,0x08,0x00,0x2b,0x10,0x29,0x89}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE _mgmt_ClientIfHandle = (RPC_IF_HANDLE)& mgmt___RpcClientInterface;

extern const MIDL_STUB_DESC mgmt_StubDesc;

static RPC_BINDING_HANDLE mgmt__MIDL_AutoBindHandle;


void _rpc_mgmt_inq_if_ids( 
    /* [in] */ handle_t binding_handle,
    /* [out] */ rpc_if_id_vector_p_t __RPC_FAR *if_id_vector,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        _StubMsg.FullPtrXlatTables = NdrFullPointerXlatInit(0,XLAT_CLIENT);
        
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                          0);
            
            
            _Handle = binding_handle;
            
            
            _StubMsg.BufferLength = 0U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&if_id_vector,
                                  (PFORMAT_STRING) &__MIDLFormatString.Format[0],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *status = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFullPointerXlatFree(_StubMsg.FullPtrXlatTables);
            
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept(1)
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )status,( unsigned long __RPC_FAR * )status,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
}


void _rpc_mgmt_inq_stats( 
    /* [in] */ handle_t binding_handle,
    /* [out][in] */ unsigned32 __RPC_FAR *count,
    /* [size_is][out] */ unsigned32 __RPC_FAR statistics[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                          1);
            
            
            _Handle = binding_handle;
            
            
            _StubMsg.BufferLength = 0U + 4U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++ = *count;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
            
            *count = *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                          (unsigned char __RPC_FAR * __RPC_FAR *)&statistics,
                                          (PFORMAT_STRING) &__MIDLFormatString.Format[84],
                                          (unsigned char)0 );
            
            *status = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept(1)
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )status,( unsigned long __RPC_FAR * )status,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
}


boolean32 _rpc_mgmt_is_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    boolean32 _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                          2);
            
            
            _Handle = binding_handle;
            
            
            _StubMsg.BufferLength = 0U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[28] );
            
            *status = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            _RetVal = *(( boolean32 __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept(1)
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )status,( unsigned long __RPC_FAR * )status,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


void _rpc_mgmt_stop_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                          3);
            
            
            _Handle = binding_handle;
            
            
            _StubMsg.BufferLength = 0U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[36] );
            
            *status = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept(1)
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )status,( unsigned long __RPC_FAR * )status,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
}


void _rpc_mgmt_inq_princ_name( 
    /* [in] */ handle_t binding_handle,
    /* [in] */ unsigned32 authn_proto,
    /* [in] */ unsigned32 princ_name_size,
    /* [size_is][string][out] */ unsigned char __RPC_FAR princ_name[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                          4);
            
            
            _Handle = binding_handle;
            
            
            _StubMsg.BufferLength = 0U + 4U + 4U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++ = authn_proto;
            
            *(( unsigned32 __RPC_FAR * )_StubMsg.Buffer)++ = princ_name_size;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[44] );
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&princ_name,
                                           (PFORMAT_STRING) &__MIDLFormatString.Format[94],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *status = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept(1)
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )status,( unsigned long __RPC_FAR * )status,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
}


static const MIDL_STUB_DESC mgmt_StubDesc = 
    {
    (void __RPC_FAR *)& mgmt___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &mgmt__MIDL_AutoBindHandle,
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

static const MIDL_FORMAT_STRING __MIDLProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/*  2 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/*  4 */	0x0, 0x0,	/* Type Offset=0 */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/*  8 */	0x4c, 0x0,	/* Type Offset=76 */
/* 10 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 14 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 16 */	0x50, 0x0,	/* Type Offset=80 */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 20 */	0x54, 0x0,	/* Type Offset=84 */
/* 22 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 24 */	0x4c, 0x0,	/* Type Offset=76 */
/* 26 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 32 */	0x4c, 0x0,	/* Type Offset=76 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 40 */	0x4c, 0x0,	/* Type Offset=76 */
/* 42 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 50 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 52 */	0x5e, 0x0,	/* Type Offset=94 */
/* 54 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 56 */	0x4c, 0x0,	/* Type Offset=76 */
/* 58 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_FORMAT_STRING __MIDLFormatString =
    {
        0,
        {
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/*  2 */	0x2, 0x0,	/* Offset= 2 (4) */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	0x2a, 0x0,	/* Offset= 42 (48) */
/*  8 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 10 */	0x8, 0x0,	/* 8 */
/* 12 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 16 */	0x10, 0x0,	/* 16 */
/* 18 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 20 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 22 */	0x0,		/* 0 */
			0xf1, 0xff,	/* Offset= -15 (8) */
			0x5b,		/* FC_END */
/* 26 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 28 */	0x14, 0x0,	/* 20 */
/* 30 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 32 */	0xee, 0xff,	/* Offset= -18 (14) */
/* 34 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 40 */	0x4, 0x0,	/* 4 */
/* 42 */	0x8,		/* 8 */
			0x0,		/*  */
/* 44 */	0xfc, 0xff,	/* -4 */
/* 46 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 48 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 50 */	0x4, 0x0,	/* 4 */
/* 52 */	0xf2, 0xff,	/* Offset= -14 (38) */
/* 54 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 58 */	0x4, 0x0,	/* 4 */
/* 60 */	0x4, 0x0,	/* 4 */
/* 62 */	0x1, 0x0,	/* 1 */
/* 64 */	0x4, 0x0,	/* 4 */
/* 66 */	0x4, 0x0,	/* 4 */
/* 68 */	0x12, 0x0,	/* FC_UP */
/* 70 */	0xd4, 0xff,	/* Offset= -44 (26) */
/* 72 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 74 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 76 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 78 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 82 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 86 */	0x4, 0x0,	/* 4 */
/* 88 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 90 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 92 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 94 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 96 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 98 */	0x8, 0x0,	/* Stack offset= 8 */
#else
			0x10, 0x0,	/* Stack offset= 16 */
#endif

			0x0
        }
    };
