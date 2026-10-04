
#include <string.h>
#ifdef _ALPHA_
#include <stdarg.h>
#endif

#include "lsarpc_c.h"


extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;
handle_t IgnoreThisHandle;


static const RPC_CLIENT_INTERFACE lsarpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE lsarpc_ClientIfHandle = (RPC_IF_HANDLE)& lsarpc___RpcClientInterface;

extern const MIDL_STUB_DESC lsarpc_StubDesc;

static RPC_BINDING_HANDLE lsarpc__MIDL_AutoBindHandle;


NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE __RPC_FAR *ObjectHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ObjectHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          0);
        
        
        if(*ObjectHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*ObjectHandle);;
            
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*ObjectHandle,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )ObjectHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarDelete( 
    /* [in] */ LSAPR_HANDLE ObjectHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          1);
        
        
        if(ObjectHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )ObjectHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )ObjectHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[6] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarEnumeratePrivileges( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumerationContext)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumerationBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          2);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = PreferedMaximumLength;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        *EnumerationContext = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[16],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarQuerySecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PLSAPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SecurityDescriptor)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          3);
        
        
        if(ObjectHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )ObjectHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )ObjectHandle,
                            1);
        *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++ = SecurityInformation;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[28] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[118],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetSecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SecurityDescriptor)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          4);
        
        
        if(ObjectHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )ObjectHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[156] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )ObjectHandle,
                            1);
        *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++ = SecurityInformation;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecurityDescriptor,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[156] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[40] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarChangePassword( 
    /* [in] */ PLSAPR_UNICODE_STRING ServerName,
    /* [in] */ PLSAPR_UNICODE_STRING DomainName,
    /* [in] */ PLSAPR_UNICODE_STRING AccountName,
    /* [in] */ PLSAPR_UNICODE_STRING OldPassword,
    /* [in] */ PLSAPR_UNICODE_STRING NewPassword)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ServerName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!DomainName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!AccountName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!OldPassword)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!NewPassword)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          5);
        
        
        _Handle = IgnoreThisHandle;
        
        
        _StubMsg.BufferLength = 0U + 0U + 0U + 0U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DomainName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)OldPassword,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)NewPassword,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DomainName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)OldPassword,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)NewPassword,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[52] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *PolicyHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ObjectAttributes)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!PolicyHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          6);
        
        
        _Handle = PLSAPR_SERVER_NAME_bind(SystemName);;
        
        
        _StubMsg.BufferLength = 6U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ObjectAttributes,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[190] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SystemName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[186] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ObjectAttributes,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[190] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[74] );
        
        *PolicyHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )PolicyHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            PLSAPR_SERVER_NAME_unbind(SystemName,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarQueryInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION __RPC_FAR *PolicyInformation)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!PolicyInformation)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          7);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 2U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&InformationClass,
                         13);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[90] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&PolicyInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[422],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!PolicyInformation)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          8);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 2U + 0U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PolicyInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[718] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&InformationClass,
                         13);
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PolicyInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[718] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[102] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarClearAuditLog( 
    /* [in] */ LSAPR_HANDLE PolicyHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          9);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[6] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarCreateAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *AccountHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!AccountSid)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!AccountHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          10);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountSid,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        *AccountHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )AccountHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarEnumerateAccounts( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumerationContext)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumerationBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          11);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = PreferedMaximumLength;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[130] );
        
        *EnumerationContext = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[734],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarCreateTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUST_INFORMATION TrustedDomainInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *TrustedDomainHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!TrustedDomainInformation)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!TrustedDomainHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          12);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[810] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[810] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[146] );
        
        *TrustedDomainHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )TrustedDomainHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarEnumerateTrustedDomains( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!EnumerationContext)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!EnumerationBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          13);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = PreferedMaximumLength;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[162] );
        
        *EnumerationContext = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[814],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarLookupNames( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ ULONG Count,
    /* [size_is][in] */ PLSAPR_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ PULONG MappedCount)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Names)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!ReferencedDomains)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!TranslatedSids)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!MappedCount)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          14);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 0U + 5U + 10U;
        _StubMsg.MaxCount = Count;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Names,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[878] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TranslatedSids,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[944] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = Count;
        
        _StubMsg.MaxCount = Count;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Names,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[878] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TranslatedSids,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[944] );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&LookupLevel,
                         13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[178] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ReferencedDomains,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[914],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedSids,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[944],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *MappedCount = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarLookupSids( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ PULONG MappedCount)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SidEnumBuffer)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!ReferencedDomains)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!TranslatedNames)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!MappedCount)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          15);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 0U + 5U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SidEnumBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[998] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TranslatedNames,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1022] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SidEnumBuffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[998] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TranslatedNames,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1022] );
        
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&LookupLevel,
                         13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[204] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ReferencedDomains,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[914],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedNames,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1022],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *MappedCount = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarCreateSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *SecretHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SecretName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!SecretHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          16);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecretName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecretName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[228] );
        
        *SecretHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )SecretHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarOpenAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *AccountHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!AccountSid)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!AccountHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          17);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)AccountSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)AccountSid,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        *AccountHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )AccountHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET __RPC_FAR *Privileges)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Privileges)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          18);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[244] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1080],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Privileges)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          19);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1132] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Privileges,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1132] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[254] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarRemovePrivilegesFromAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ BOOLEAN AllPrivileges,
    /* [unique][in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          20);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 1U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1084] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++ = AllPrivileges;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Privileges,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1084] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[264] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarGetQuotasForAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PQUOTA_LIMITS QuotaLimits)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!QuotaLimits)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          21);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[276] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&QuotaLimits,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1136],
                              (unsigned char)0 );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetQuotasForAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PQUOTA_LIMITS QuotaLimits)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!QuotaLimits)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          22);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)QuotaLimits,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1140] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)QuotaLimits,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1140] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[286] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PULONG SystemAccess)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SystemAccess)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          23);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[296] );
        
        *SystemAccess = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ ULONG SystemAccess)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          24);
        
        
        if(AccountHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )AccountHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )AccountHandle,
                            1);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = SystemAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[306] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarOpenTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID TrustedDomainSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *TrustedDomainHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!TrustedDomainSid)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!TrustedDomainHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          25);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainSid,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[730] );
        
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        *TrustedDomainHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )TrustedDomainHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarQueryInfoTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!TrustedDomainInformation)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          26);
        
        
        if(TrustedDomainHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )TrustedDomainHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 2U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )TrustedDomainHandle,
                            1);
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&InformationClass,
                         13);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[314] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1148],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetInformationTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!TrustedDomainInformation)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          27);
        
        
        if(TrustedDomainHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )TrustedDomainHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 2U + 0U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1246] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )TrustedDomainHandle,
                            1);
        NdrSimpleTypeMarshall(
                         ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                         ( unsigned char __RPC_FAR * )&InformationClass,
                         13);
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1246] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[326] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarOpenSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *SecretHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!SecretName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!SecretHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          28);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecretName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecretName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++ = DesiredAccess;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[228] );
        
        *SecretHandle = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )SecretHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarSetSecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedOldValue)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          29);
        
        
        if(SecretHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )SecretHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1258] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1258] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )SecretHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1258] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedOldValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1258] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[338] );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarQuerySecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedCurrentValue,
    /* [unique][out][in] */ PLARGE_INTEGER CurrentValueSetTime,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedOldValue,
    /* [unique][out][in] */ PLARGE_INTEGER OldValueSetTime)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          30);
        
        
        if(SecretHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )SecretHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 8U + 11U + 18U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1298] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1302] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1298] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)OldValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1302] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )SecretHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1298] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)CurrentValueSetTime,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1302] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedOldValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1298] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)OldValueSetTime,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1302] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[352] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1298],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1302],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1298],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&OldValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1302],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarLookupPrivilegeValue( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING Name,
    /* [out] */ PLUID Value)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Name)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!Value)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          31);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Name,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[374] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Value,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1306],
                              (unsigned char)0 );
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarLookupPrivilegeName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLUID Value,
    /* [out] */ PLSAPR_UNICODE_STRING __RPC_FAR *Name)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Value)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!Name)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          32);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Value,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1310] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Value,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1310] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[388] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1314],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarLookupPrivilegeDisplayName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING Name,
    /* [in] */ SHORT ClientLanguage,
    /* [in] */ SHORT ClientSystemDefaultLanguage,
    /* [out] */ PLSAPR_UNICODE_STRING __RPC_FAR *DisplayName,
    /* [out] */ PWORD LanguageReturned)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!Name)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!DisplayName)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!LanguageReturned)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          33);
        
        
        if(PolicyHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )PolicyHandle);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 0U + 5U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )PolicyHandle,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Name,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[160] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++ = ClientLanguage;
        
        *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++ = ClientSystemDefaultLanguage;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[402] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DisplayName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1314],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *LanguageReturned = *(( WORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE __RPC_FAR *ObjectHandle)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    NTSTATUS _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!ObjectHandle)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                          34);
        
        
        if(*ObjectHandle != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*ObjectHandle);;
            
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*ObjectHandle,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )ObjectHandle,
                              _Handle);
        
        _RetVal = *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void __RPC_FAR *)& lsarpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IgnoreThisHandle,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDLFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0, /* Reserved */
    0, /* Reserved */
    0  /* Reserved */
    };

void __RPC_USER lsarpc__LSAPR_ACL_ExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _LSAPR_ACL __RPC_FAR *pS	=	( struct _LSAPR_ACL __RPC_FAR * )(pStubMsg->StackTop - 4);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->AclSize - 4;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    lsarpc__LSAPR_ACL_ExprEval_0000
    };


static const MIDL_FORMAT_STRING __MIDLProcFormatString =
    {
        0,
        {
			
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/*  2 */	0x0, 0x0,	/* Type Offset=0 */
/*  4 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/*  8 */	0x8, 0x0,	/* Type Offset=8 */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 14 */	0x8, 0x0,	/* Type Offset=8 */
/* 16 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 18 */	0xc, 0x0,	/* Type Offset=12 */
/* 20 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 22 */	0x10, 0x0,	/* Type Offset=16 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 30 */	0x8, 0x0,	/* Type Offset=8 */
/* 32 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 36 */	0x76, 0x0,	/* Type Offset=118 */
/* 38 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 42 */	0x8, 0x0,	/* Type Offset=8 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 48 */	0x9c, 0x0,	/* Type Offset=156 */
/* 50 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 54 */	0xa0, 0x0,	/* Type Offset=160 */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 58 */	0xa0, 0x0,	/* Type Offset=160 */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 62 */	0xa0, 0x0,	/* Type Offset=160 */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 66 */	0xa0, 0x0,	/* Type Offset=160 */
/* 68 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 70 */	0xa0, 0x0,	/* Type Offset=160 */
/* 72 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 76 */	0xba, 0x0,	/* Type Offset=186 */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 80 */	0xbe, 0x0,	/* Type Offset=190 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 86 */	0x9e, 0x1,	/* Type Offset=414 */
/* 88 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 92 */	0x8, 0x0,	/* Type Offset=8 */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 96 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 98 */	0xa6, 0x1,	/* Type Offset=422 */
/* 100 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 104 */	0x8, 0x0,	/* Type Offset=8 */
/* 106 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 108 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 110 */	0xce, 0x2,	/* Type Offset=718 */
/* 112 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 116 */	0x8, 0x0,	/* Type Offset=8 */
/* 118 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 120 */	0xda, 0x2,	/* Type Offset=730 */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 126 */	0x9e, 0x1,	/* Type Offset=414 */
/* 128 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 132 */	0x8, 0x0,	/* Type Offset=8 */
/* 134 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 136 */	0xc, 0x0,	/* Type Offset=12 */
/* 138 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 140 */	0xde, 0x2,	/* Type Offset=734 */
/* 142 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 144 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 148 */	0x8, 0x0,	/* Type Offset=8 */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 152 */	0x2a, 0x3,	/* Type Offset=810 */
/* 154 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 158 */	0x9e, 0x1,	/* Type Offset=414 */
/* 160 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 162 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 164 */	0x8, 0x0,	/* Type Offset=8 */
/* 166 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 168 */	0xc, 0x0,	/* Type Offset=12 */
/* 170 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 172 */	0x2e, 0x3,	/* Type Offset=814 */
/* 174 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 180 */	0x8, 0x0,	/* Type Offset=8 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 186 */	0x6e, 0x3,	/* Type Offset=878 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 190 */	0x92, 0x3,	/* Type Offset=914 */
/* 192 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 194 */	0xb0, 0x3,	/* Type Offset=944 */
/* 196 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 200 */	0xc, 0x0,	/* Type Offset=12 */
/* 202 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 206 */	0x8, 0x0,	/* Type Offset=8 */
/* 208 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 210 */	0xe6, 0x3,	/* Type Offset=998 */
/* 212 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 214 */	0x92, 0x3,	/* Type Offset=914 */
/* 216 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 218 */	0xfe, 0x3,	/* Type Offset=1022 */
/* 220 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 222 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 224 */	0xc, 0x0,	/* Type Offset=12 */
/* 226 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 228 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 230 */	0x8, 0x0,	/* Type Offset=8 */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 234 */	0xa0, 0x0,	/* Type Offset=160 */
/* 236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 238 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 240 */	0x9e, 0x1,	/* Type Offset=414 */
/* 242 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 246 */	0x8, 0x0,	/* Type Offset=8 */
/* 248 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 250 */	0x38, 0x4,	/* Type Offset=1080 */
/* 252 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 254 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 256 */	0x8, 0x0,	/* Type Offset=8 */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 260 */	0x6c, 0x4,	/* Type Offset=1132 */
/* 262 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 266 */	0x8, 0x0,	/* Type Offset=8 */
/* 268 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 270 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 272 */	0x3c, 0x4,	/* Type Offset=1084 */
/* 274 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 276 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 278 */	0x8, 0x0,	/* Type Offset=8 */
/* 280 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 282 */	0x70, 0x4,	/* Type Offset=1136 */
/* 284 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 286 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 288 */	0x8, 0x0,	/* Type Offset=8 */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 292 */	0x74, 0x4,	/* Type Offset=1140 */
/* 294 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 298 */	0x8, 0x0,	/* Type Offset=8 */
/* 300 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 302 */	0x78, 0x4,	/* Type Offset=1144 */
/* 304 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 306 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 308 */	0x8, 0x0,	/* Type Offset=8 */
/* 310 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 312 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 314 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 316 */	0x8, 0x0,	/* Type Offset=8 */
/* 318 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 320 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 322 */	0x7c, 0x4,	/* Type Offset=1148 */
/* 324 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 326 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 328 */	0x8, 0x0,	/* Type Offset=8 */
/* 330 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 332 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 334 */	0xde, 0x4,	/* Type Offset=1246 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 340 */	0x8, 0x0,	/* Type Offset=8 */
/* 342 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 344 */	0xea, 0x4,	/* Type Offset=1258 */
/* 346 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 348 */	0xea, 0x4,	/* Type Offset=1258 */
/* 350 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 352 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 354 */	0x8, 0x0,	/* Type Offset=8 */
/* 356 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 358 */	0x12, 0x5,	/* Type Offset=1298 */
/* 360 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 362 */	0x16, 0x5,	/* Type Offset=1302 */
/* 364 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 366 */	0x12, 0x5,	/* Type Offset=1298 */
/* 368 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 370 */	0x16, 0x5,	/* Type Offset=1302 */
/* 372 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 374 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 376 */	0x8, 0x0,	/* Type Offset=8 */
/* 378 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 380 */	0xa0, 0x0,	/* Type Offset=160 */
/* 382 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 384 */	0x1a, 0x5,	/* Type Offset=1306 */
/* 386 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 388 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 390 */	0x8, 0x0,	/* Type Offset=8 */
/* 392 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 394 */	0x1e, 0x5,	/* Type Offset=1310 */
/* 396 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 398 */	0x22, 0x5,	/* Type Offset=1314 */
/* 400 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 402 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 404 */	0x8, 0x0,	/* Type Offset=8 */
/* 406 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 408 */	0xa0, 0x0,	/* Type Offset=160 */
/* 410 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 412 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 414 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 416 */	0x22, 0x5,	/* Type Offset=1314 */
/* 418 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 420 */	0x2a, 0x5,	/* Type Offset=1322 */
/* 422 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_FORMAT_STRING __MIDLFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	0x2, 0x0,	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* -32 */
/*  6 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 10 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 14 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 16 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 18 */	0x50, 0x0,	/* Offset= 80 (98) */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 22 */	0x8, 0x0,	/* 8 */
/* 24 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 26 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 28 */	0x2, 0x0,	/* 2 */
/* 30 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 32 */	0x2, 0x0,	/* 2 */
/* 34 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 36 */	0x0, 0x0,	/* 0 */
/* 38 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 40 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 42 */	0x10, 0x0,	/* 16 */
/* 44 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 48 */	0x4, 0x0,	/* 4 */
/* 50 */	0x4, 0x0,	/* 4 */
/* 52 */	0x12, 0x0,	/* FC_UP */
/* 54 */	0xe4, 0xff,	/* Offset= -28 (26) */
/* 56 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 58 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 60 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 62 */	0x0,		/* 0 */
			0xd5, 0xff,	/* Offset= -43 (20) */
			0x5b,		/* FC_END */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 68 */	0x10, 0x0,	/* 16 */
/* 70 */	0x18,		/* 24 */
			0x0,		/*  */
/* 72 */	0x0, 0x0,	/* 0 */
/* 74 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 76 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 78 */	0x10, 0x0,	/* 16 */
/* 80 */	0x0, 0x0,	/* 0 */
/* 82 */	0x1, 0x0,	/* 1 */
/* 84 */	0x4, 0x0,	/* 4 */
/* 86 */	0x4, 0x0,	/* 4 */
/* 88 */	0x12, 0x0,	/* FC_UP */
/* 90 */	0xc0, 0xff,	/* Offset= -64 (26) */
/* 92 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 94 */	0x0,		/* 0 */
			0xc9, 0xff,	/* Offset= -55 (40) */
			0x5b,		/* FC_END */
/* 98 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 100 */	0x8, 0x0,	/* 8 */
/* 102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	0x4, 0x0,	/* 4 */
/* 108 */	0x4, 0x0,	/* 4 */
/* 110 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 112 */	0xd2, 0xff,	/* Offset= -46 (66) */
/* 114 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 116 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 118 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 120 */	0x2, 0x0,	/* Offset= 2 (122) */
/* 122 */	
			0x12, 0x0,	/* FC_UP */
/* 124 */	0xc, 0x0,	/* Offset= 12 (136) */
/* 126 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 128 */	0x1, 0x0,	/* 1 */
/* 130 */	0x18,		/* 24 */
			0x0,		/*  */
/* 132 */	0x0, 0x0,	/* 0 */
/* 134 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 138 */	0x8, 0x0,	/* 8 */
/* 140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 144 */	0x4, 0x0,	/* 4 */
/* 146 */	0x4, 0x0,	/* 4 */
/* 148 */	0x12, 0x0,	/* FC_UP */
/* 150 */	0xe8, 0xff,	/* Offset= -24 (126) */
/* 152 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 154 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 156 */	
			0x11, 0x0,	/* FC_RP */
/* 158 */	0xea, 0xff,	/* Offset= -22 (136) */
/* 160 */	
			0x11, 0x0,	/* FC_RP */
/* 162 */	0x2, 0x0,	/* Offset= 2 (164) */
/* 164 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 166 */	0x8, 0x0,	/* 8 */
/* 168 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 172 */	0x4, 0x0,	/* 4 */
/* 174 */	0x4, 0x0,	/* 4 */
/* 176 */	0x12, 0x0,	/* FC_UP */
/* 178 */	0x68, 0xff,	/* Offset= -152 (26) */
/* 180 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 182 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 184 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 186 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 188 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x11, 0x0,	/* FC_RP */
/* 192 */	0xa8, 0x0,	/* Offset= 168 (360) */
/* 194 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 196 */	0x1, 0x0,	/* 1 */
/* 198 */	0x16,		/* 22 */
			0x0,		/*  */
/* 200 */	0x2, 0x0,	/* 2 */
/* 202 */	0x16,		/* 22 */
			0x0,		/*  */
/* 204 */	0x0, 0x0,	/* 0 */
/* 206 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 208 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 210 */	0x8, 0x0,	/* 8 */
/* 212 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 216 */	0x4, 0x0,	/* 4 */
/* 218 */	0x4, 0x0,	/* 4 */
/* 220 */	0x12, 0x0,	/* FC_UP */
/* 222 */	0xe4, 0xff,	/* Offset= -28 (194) */
/* 224 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 226 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 228 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 230 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 232 */	0x6, 0x0,	/* 6 */
/* 234 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 236 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 238 */	0x6, 0x0,	/* 6 */
/* 240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 242 */	0xf4, 0xff,	/* Offset= -12 (230) */
/* 244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 246 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 248 */	0x4, 0x0,	/* 4 */
/* 250 */	0x3,		/* 3 */
			0x0,		/*  */
/* 252 */	0xf9, 0xff,	/* -7 */
/* 254 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 256 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 258 */	0x8, 0x0,	/* 8 */
/* 260 */	0xf2, 0xff,	/* Offset= -14 (246) */
/* 262 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 264 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 266 */	0xe2, 0xff,	/* Offset= -30 (236) */
/* 268 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 270 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 272 */	0x1, 0x0,	/* 1 */
/* 274 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 276 */	0x0, 0x0,	/* 0 */
/* 278 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 280 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 282 */	0x4, 0x0,	/* 4 */
/* 284 */	0xf2, 0xff,	/* Offset= -14 (270) */
/* 286 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 288 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 290 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 292 */	0x14, 0x0,	/* 20 */
/* 294 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 298 */	0x4, 0x0,	/* 4 */
/* 300 */	0x4, 0x0,	/* 4 */
/* 302 */	0x12, 0x0,	/* FC_UP */
/* 304 */	0xd0, 0xff,	/* Offset= -48 (256) */
/* 306 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 308 */	0x8, 0x0,	/* 8 */
/* 310 */	0x8, 0x0,	/* 8 */
/* 312 */	0x12, 0x0,	/* FC_UP */
/* 314 */	0xc6, 0xff,	/* Offset= -58 (256) */
/* 316 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 318 */	0xc, 0x0,	/* 12 */
/* 320 */	0xc, 0x0,	/* 12 */
/* 322 */	0x12, 0x0,	/* FC_UP */
/* 324 */	0xd4, 0xff,	/* Offset= -44 (280) */
/* 326 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 328 */	0x10, 0x0,	/* 16 */
/* 330 */	0x10, 0x0,	/* 16 */
/* 332 */	0x12, 0x0,	/* FC_UP */
/* 334 */	0xca, 0xff,	/* Offset= -54 (280) */
/* 336 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 338 */	0x2,		/* FC_CHAR */
			0x6,		/* FC_SHORT */
/* 340 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 342 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 346 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 348 */	0xa, 0x0,	/* 10 */
/* 350 */	0x0, 0x0,	/* 0 */
/* 352 */	0x0, 0x0,	/* Offset= 0 (352) */
/* 354 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 356 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 360 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 362 */	0x18, 0x0,	/* 24 */
/* 364 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 366 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 368 */	0x4, 0x0,	/* 4 */
/* 370 */	0x4, 0x0,	/* 4 */
/* 372 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 374 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 376 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 378 */	0x8, 0x0,	/* 8 */
/* 380 */	0x8, 0x0,	/* 8 */
/* 382 */	0x12, 0x0,	/* FC_UP */
/* 384 */	0x50, 0xff,	/* Offset= -176 (208) */
/* 386 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 388 */	0x10, 0x0,	/* 16 */
/* 390 */	0x10, 0x0,	/* 16 */
/* 392 */	0x12, 0x0,	/* FC_UP */
/* 394 */	0x98, 0xff,	/* Offset= -104 (290) */
/* 396 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 398 */	0x14, 0x0,	/* 20 */
/* 400 */	0x14, 0x0,	/* 20 */
/* 402 */	0x12, 0x0,	/* FC_UP */
/* 404 */	0xc6, 0xff,	/* Offset= -58 (346) */
/* 406 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 414 */	
			0x11, 0x0,	/* FC_RP */
/* 416 */	0x2, 0x0,	/* Offset= 2 (418) */
/* 418 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* -96 */
/* 420 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 422 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 424 */	0x2, 0x0,	/* Offset= 2 (426) */
/* 426 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 428 */	0x2, 0x0,	/* Offset= 2 (430) */
/* 430 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 432 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 434 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 436 */	0x2, 0x0,	/* Offset= 2 (438) */
/* 438 */	0x1e, 0x0,	/* 30 */
/* 440 */	0xb, 0x70,	/* 28683 */
/* 442 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 446 */	0x40, 0x0,	/* Offset= 64 (510) */
/* 448 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 452 */	0x5a, 0x0,	/* Offset= 90 (542) */
/* 454 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 458 */	0x6a, 0x0,	/* Offset= 106 (564) */
/* 460 */	0x5, 0x0, 0x0, 0x0,	/* 5 */
/* 464 */	0x64, 0x0,	/* Offset= 100 (564) */
/* 466 */	0x4, 0x0, 0x0, 0x0,	/* 4 */
/* 470 */	0xce, 0xfe,	/* Offset= -306 (164) */
/* 472 */	0x6, 0x0, 0x0, 0x0,	/* 6 */
/* 476 */	0x7a, 0x0,	/* Offset= 122 (598) */
/* 478 */	0x7, 0x0, 0x0, 0x0,	/* 7 */
/* 482 */	0x8c, 0x0,	/* Offset= 140 (622) */
/* 484 */	0x8, 0x0, 0x0, 0x0,	/* 8 */
/* 488 */	0xbc, 0x0,	/* Offset= 188 (676) */
/* 490 */	0x9, 0x0, 0x0, 0x0,	/* 9 */
/* 494 */	0xc4, 0x0,	/* Offset= 196 (690) */
/* 496 */	0xa, 0x0, 0x0, 0x0,	/* 10 */
/* 500 */	0xcc, 0x0,	/* Offset= 204 (704) */
/* 502 */	0xb, 0x0, 0x0, 0x0,	/* 11 */
/* 506 */	0xcc, 0x0,	/* Offset= 204 (710) */
/* 508 */	0xff, 0xff,	/* Offset= -1 (507) */
/* 510 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 512 */	0x1e, 0x0,	/* 30 */
/* 514 */	0x0, 0x0,	/* 0 */
/* 516 */	0x0, 0x0,	/* Offset= 0 (516) */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 522 */	0xa, 0xfe,	/* Offset= -502 (20) */
/* 524 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 526 */	0x1,		/* 1 */
			0x5, 0xfe,	/* Offset= -507 (20) */
			0x8,		/* FC_LONG */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 534 */	0x4, 0x0,	/* 4 */
/* 536 */	0x18,		/* 24 */
			0x0,		/*  */
/* 538 */	0x8, 0x0,	/* 8 */
/* 540 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 542 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 544 */	0xc, 0x0,	/* 12 */
/* 546 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 548 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 550 */	0x4, 0x0,	/* 4 */
/* 552 */	0x4, 0x0,	/* 4 */
/* 554 */	0x12, 0x0,	/* FC_UP */
/* 556 */	0xe8, 0xff,	/* Offset= -24 (532) */
/* 558 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 560 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 562 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 564 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 566 */	0xc, 0x0,	/* 12 */
/* 568 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 570 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 572 */	0x4, 0x0,	/* 4 */
/* 574 */	0x4, 0x0,	/* 4 */
/* 576 */	0x12, 0x0,	/* FC_UP */
/* 578 */	0xd8, 0xfd,	/* Offset= -552 (26) */
/* 580 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 582 */	0x8, 0x0,	/* 8 */
/* 584 */	0x8, 0x0,	/* 8 */
/* 586 */	0x12, 0x0,	/* FC_UP */
/* 588 */	0xb4, 0xfe,	/* Offset= -332 (256) */
/* 590 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 592 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 594 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 600 */	0x4, 0x0,	/* 4 */
/* 602 */	0x0, 0x0,	/* 0 */
/* 604 */	0x0, 0x0,	/* Offset= 0 (604) */
/* 606 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 608 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 610 */	0x2, 0x0,	/* 2 */
/* 612 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 614 */	0xa, 0x0,	/* 10 */
/* 616 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 618 */	0x8, 0x0,	/* 8 */
/* 620 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 622 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 624 */	0x10, 0x0,	/* 16 */
/* 626 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 628 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 630 */	0x4, 0x0,	/* 4 */
/* 632 */	0x4, 0x0,	/* 4 */
/* 634 */	0x12, 0x0,	/* FC_UP */
/* 636 */	0x9e, 0xfd,	/* Offset= -610 (26) */
/* 638 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 640 */	0xc, 0x0,	/* 12 */
/* 642 */	0xc, 0x0,	/* 12 */
/* 644 */	0x12, 0x0,	/* FC_UP */
/* 646 */	0xda, 0xff,	/* Offset= -38 (608) */
/* 648 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 650 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 652 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 654 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 656 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 658 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 660 */	0x1c, 0x0,	/* 28 */
/* 662 */	0x0, 0x0,	/* 0 */
/* 664 */	0x0, 0x0,	/* Offset= 0 (664) */
/* 666 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 668 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 670 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 672 */	0x0,		/* 0 */
			0x73, 0xfd,	/* Offset= -653 (20) */
			0x5b,		/* FC_END */
/* 676 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 678 */	0x1c, 0x0,	/* 28 */
/* 680 */	0x0, 0x0,	/* 0 */
/* 682 */	0x0, 0x0,	/* Offset= 0 (682) */
/* 684 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 686 */	0xe4, 0xff,	/* Offset= -28 (658) */
/* 688 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 690 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 692 */	0x10, 0x0,	/* 16 */
/* 694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 696 */	0x5c, 0xfd,	/* Offset= -676 (20) */
/* 698 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 700 */	0x58, 0xfd,	/* Offset= -680 (20) */
/* 702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 704 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 706 */	0x1, 0x0,	/* 1 */
/* 708 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 710 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 712 */	0x2, 0x0,	/* 2 */
/* 714 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 716 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 718 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 720 */	0x2, 0x0,	/* Offset= 2 (722) */
/* 722 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 724 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 726 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 728 */	0xde, 0xfe,	/* Offset= -290 (438) */
/* 730 */	
			0x11, 0x0,	/* FC_RP */
/* 732 */	0x24, 0xfe,	/* Offset= -476 (256) */
/* 734 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 736 */	0x36, 0x0,	/* Offset= 54 (790) */
/* 738 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 740 */	0x4, 0x0,	/* 4 */
/* 742 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 746 */	0x0, 0x0,	/* 0 */
/* 748 */	0x0, 0x0,	/* 0 */
/* 750 */	0x12, 0x0,	/* FC_UP */
/* 752 */	0x10, 0xfe,	/* Offset= -496 (256) */
/* 754 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 760 */	0x4, 0x0,	/* 4 */
/* 762 */	0x18,		/* 24 */
			0x0,		/*  */
/* 764 */	0x0, 0x0,	/* 0 */
/* 766 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 768 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 770 */	0x4, 0x0,	/* 4 */
/* 772 */	0x0, 0x0,	/* 0 */
/* 774 */	0x1, 0x0,	/* 1 */
/* 776 */	0x0, 0x0,	/* 0 */
/* 778 */	0x0, 0x0,	/* 0 */
/* 780 */	0x12, 0x0,	/* FC_UP */
/* 782 */	0xf2, 0xfd,	/* Offset= -526 (256) */
/* 784 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 786 */	0x0,		/* 0 */
			0xcf, 0xff,	/* Offset= -49 (738) */
			0x5b,		/* FC_END */
/* 790 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 792 */	0x8, 0x0,	/* 8 */
/* 794 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 796 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 798 */	0x4, 0x0,	/* 4 */
/* 800 */	0x4, 0x0,	/* 4 */
/* 802 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 804 */	0xd2, 0xff,	/* Offset= -46 (758) */
/* 806 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 808 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 810 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 812 */	0x8, 0xff,	/* Offset= -248 (564) */
/* 814 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 816 */	0x2a, 0x0,	/* Offset= 42 (858) */
/* 818 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 820 */	0xc, 0x0,	/* 12 */
/* 822 */	0x18,		/* 24 */
			0x0,		/*  */
/* 824 */	0x0, 0x0,	/* 0 */
/* 826 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 828 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 830 */	0xc, 0x0,	/* 12 */
/* 832 */	0x0, 0x0,	/* 0 */
/* 834 */	0x2, 0x0,	/* 2 */
/* 836 */	0x4, 0x0,	/* 4 */
/* 838 */	0x4, 0x0,	/* 4 */
/* 840 */	0x12, 0x0,	/* FC_UP */
/* 842 */	0xd0, 0xfc,	/* Offset= -816 (26) */
/* 844 */	0x8, 0x0,	/* 8 */
/* 846 */	0x8, 0x0,	/* 8 */
/* 848 */	0x12, 0x0,	/* FC_UP */
/* 850 */	0xae, 0xfd,	/* Offset= -594 (256) */
/* 852 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 854 */	0x0,		/* 0 */
			0xdd, 0xfe,	/* Offset= -291 (564) */
			0x5b,		/* FC_END */
/* 858 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 860 */	0x8, 0x0,	/* 8 */
/* 862 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 864 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 866 */	0x4, 0x0,	/* 4 */
/* 868 */	0x4, 0x0,	/* 4 */
/* 870 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 872 */	0xca, 0xff,	/* Offset= -54 (818) */
/* 874 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 876 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 878 */	
			0x11, 0x0,	/* FC_RP */
/* 880 */	0x2, 0x0,	/* Offset= 2 (882) */
/* 882 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 884 */	0x8, 0x0,	/* 8 */
/* 886 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 888 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 894 */	0x8, 0x0,	/* 8 */
/* 896 */	0x0, 0x0,	/* 0 */
/* 898 */	0x1, 0x0,	/* 1 */
/* 900 */	0x4, 0x0,	/* 4 */
/* 902 */	0x4, 0x0,	/* 4 */
/* 904 */	0x12, 0x0,	/* FC_UP */
/* 906 */	0x90, 0xfc,	/* Offset= -880 (26) */
/* 908 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 910 */	0x0,		/* 0 */
			0x15, 0xfd,	/* Offset= -747 (164) */
			0x5b,		/* FC_END */
/* 914 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 916 */	0x2, 0x0,	/* Offset= 2 (918) */
/* 918 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 920 */	0x2, 0x0,	/* Offset= 2 (922) */
/* 922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 924 */	0xc, 0x0,	/* 12 */
/* 926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 930 */	0x4, 0x0,	/* 4 */
/* 932 */	0x4, 0x0,	/* 4 */
/* 934 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 936 */	0x8a, 0xff,	/* Offset= -118 (818) */
/* 938 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 944 */	
			0x11, 0x0,	/* FC_RP */
/* 946 */	0x20, 0x0,	/* Offset= 32 (978) */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	0xc, 0x0,	/* 12 */
/* 952 */	0x0, 0x0,	/* 0 */
/* 954 */	0x0, 0x0,	/* Offset= 0 (954) */
/* 956 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 958 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 960 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 962 */	0x0, 0x0,	/* 0 */
/* 964 */	0x18,		/* 24 */
			0x0,		/*  */
/* 966 */	0x0, 0x0,	/* 0 */
/* 968 */	0xff, 0xff, 0xff, 0xff,	/* -1 */
/* 972 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 974 */	0xe6, 0xff,	/* Offset= -26 (948) */
/* 976 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 978 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 980 */	0x8, 0x0,	/* 8 */
/* 982 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 984 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 986 */	0x4, 0x0,	/* 4 */
/* 988 */	0x4, 0x0,	/* 4 */
/* 990 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 992 */	0xe0, 0xff,	/* Offset= -32 (960) */
/* 994 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 996 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 998 */	
			0x11, 0x0,	/* FC_RP */
/* 1000 */	0x2, 0x0,	/* Offset= 2 (1002) */
/* 1002 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1004 */	0x8, 0x0,	/* 8 */
/* 1006 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1010 */	0x4, 0x0,	/* 4 */
/* 1012 */	0x4, 0x0,	/* 4 */
/* 1014 */	0x12, 0x0,	/* FC_UP */
/* 1016 */	0xfe, 0xfe,	/* Offset= -258 (758) */
/* 1018 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1020 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1022 */	
			0x11, 0x0,	/* FC_RP */
/* 1024 */	0x24, 0x0,	/* Offset= 36 (1060) */
/* 1026 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1028 */	0x10, 0x0,	/* 16 */
/* 1030 */	0x0, 0x0,	/* 0 */
/* 1032 */	0x0, 0x0,	/* Offset= 0 (1032) */
/* 1034 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1036 */	0x0,		/* 0 */
			0x97, 0xfc,	/* Offset= -873 (164) */
			0x8,		/* FC_LONG */
/* 1040 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1042 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1044 */	0x0, 0x0,	/* 0 */
/* 1046 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1048 */	0x0, 0x0,	/* 0 */
/* 1050 */	0xff, 0xff, 0xff, 0xff,	/* -1 */
/* 1054 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1056 */	0xe2, 0xff,	/* Offset= -30 (1026) */
/* 1058 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1060 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1062 */	0x8, 0x0,	/* 8 */
/* 1064 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1066 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1068 */	0x4, 0x0,	/* 4 */
/* 1070 */	0x4, 0x0,	/* 4 */
/* 1072 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1074 */	0xe0, 0xff,	/* Offset= -32 (1042) */
/* 1076 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1078 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1080 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1082 */	0x2, 0x0,	/* Offset= 2 (1084) */
/* 1084 */	
			0x12, 0x0,	/* FC_UP */
/* 1086 */	0x22, 0x0,	/* Offset= 34 (1120) */
/* 1088 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1090 */	0x8, 0x0,	/* 8 */
/* 1092 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1094 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1096 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1098 */	0xc, 0x0,	/* 12 */
/* 1100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1102 */	0xf2, 0xff,	/* Offset= -14 (1088) */
/* 1104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1106 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1108 */	0xc, 0x0,	/* 12 */
/* 1110 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1112 */	0xf8, 0xff,	/* -8 */
/* 1114 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1116 */	0xec, 0xff,	/* Offset= -20 (1096) */
/* 1118 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1120 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1122 */	0x8, 0x0,	/* 8 */
/* 1124 */	0xee, 0xff,	/* Offset= -18 (1106) */
/* 1126 */	0x0, 0x0,	/* Offset= 0 (1126) */
/* 1128 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1132 */	
			0x11, 0x0,	/* FC_RP */
/* 1134 */	0xf2, 0xff,	/* Offset= -14 (1120) */
/* 1136 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1138 */	0x20, 0xfe,	/* Offset= -480 (658) */
/* 1140 */	
			0x11, 0x0,	/* FC_RP */
/* 1142 */	0x1c, 0xfe,	/* Offset= -484 (658) */
/* 1144 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1146 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1148 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1150 */	0x2, 0x0,	/* Offset= 2 (1152) */
/* 1152 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1154 */	0x2, 0x0,	/* Offset= 2 (1156) */
/* 1156 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1158 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1160 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1162 */	0x2, 0x0,	/* Offset= 2 (1164) */
/* 1164 */	0x8, 0x0,	/* 8 */
/* 1166 */	0x3, 0x30,	/* 12291 */
/* 1168 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 1172 */	0x10, 0xfc,	/* Offset= -1008 (164) */
/* 1174 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 1178 */	0x2a, 0x0,	/* Offset= 42 (1220) */
/* 1180 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 1184 */	0x38, 0x0,	/* Offset= 56 (1240) */
/* 1186 */	0xff, 0xff,	/* Offset= -1 (1185) */
/* 1188 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1190 */	0x8, 0x0,	/* 8 */
/* 1192 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1194 */	0x0, 0x0,	/* 0 */
/* 1196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1198 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1200 */	0x8, 0x0,	/* 8 */
/* 1202 */	0x0, 0x0,	/* 0 */
/* 1204 */	0x1, 0x0,	/* 1 */
/* 1206 */	0x4, 0x0,	/* 4 */
/* 1208 */	0x4, 0x0,	/* 4 */
/* 1210 */	0x12, 0x0,	/* FC_UP */
/* 1212 */	0x5e, 0xfb,	/* Offset= -1186 (26) */
/* 1214 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1216 */	0x0,		/* 0 */
			0xe3, 0xfb,	/* Offset= -1053 (164) */
			0x5b,		/* FC_END */
/* 1220 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1222 */	0x8, 0x0,	/* 8 */
/* 1224 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1226 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1228 */	0x4, 0x0,	/* 4 */
/* 1230 */	0x4, 0x0,	/* 4 */
/* 1232 */	0x12, 0x0,	/* FC_UP */
/* 1234 */	0xd2, 0xff,	/* Offset= -46 (1188) */
/* 1236 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1238 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1240 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1242 */	0x4, 0x0,	/* 4 */
/* 1244 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1246 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 1248 */	0x2, 0x0,	/* Offset= 2 (1250) */
/* 1250 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1252 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1254 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1256 */	0xa4, 0xff,	/* Offset= -92 (1164) */
/* 1258 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1260 */	0x10, 0x0,	/* Offset= 16 (1276) */
/* 1262 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1264 */	0x1, 0x0,	/* 1 */
/* 1266 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1268 */	0x4, 0x0,	/* 4 */
/* 1270 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1272 */	0x0, 0x0,	/* 0 */
/* 1274 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1276 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1278 */	0xc, 0x0,	/* 12 */
/* 1280 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1282 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1284 */	0x8, 0x0,	/* 8 */
/* 1286 */	0x8, 0x0,	/* 8 */
/* 1288 */	0x12, 0x0,	/* FC_UP */
/* 1290 */	0xe4, 0xff,	/* Offset= -28 (1262) */
/* 1292 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1294 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1296 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1298 */	
			0x12, 0x10,	/* FC_UP */
/* 1300 */	0xd6, 0xff,	/* Offset= -42 (1258) */
/* 1302 */	
			0x12, 0x0,	/* FC_UP */
/* 1304 */	0xfc, 0xfa,	/* Offset= -1284 (20) */
/* 1306 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1308 */	0xf8, 0xfa,	/* Offset= -1288 (20) */
/* 1310 */	
			0x11, 0x0,	/* FC_RP */
/* 1312 */	0xf4, 0xfa,	/* Offset= -1292 (20) */
/* 1314 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1316 */	0x2, 0x0,	/* Offset= 2 (1318) */
/* 1318 */	
			0x12, 0x0,	/* FC_UP */
/* 1320 */	0x7c, 0xfb,	/* Offset= -1156 (164) */
/* 1322 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1324 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
