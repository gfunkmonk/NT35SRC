
#include <string.h>
#include "lsarpc.h"

extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;

extern RPC_DISPATCH_TABLE lsarpc_DispatchTable;

static const RPC_SERVER_INTERFACE lsarpc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &lsarpc_DispatchTable,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE lsarpc_ServerIfHandle = (RPC_IF_HANDLE)& lsarpc___RpcServerInterface;

extern const MIDL_STUB_DESC lsarpc_StubDesc;

void __RPC_STUB
lsarpc_LsarClose(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    ObjectHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarClose(( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(ObjectHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ObjectHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarDelete(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[6] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarDelete(( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle));
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumeratePrivileges(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_PRIVILEGE_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Privileges = 0;
        
        _RetVal = LsarEnumeratePrivileges(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  EnumerationContext,
                                  EnumerationBuffer,
                                  PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[16] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EnumerationBuffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[16] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDLFormatString.Format[16] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQuerySecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PLSAPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    PLSAPR_SR_SECURITY_DESCRIPTOR _M1;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[28] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecurityDescriptor = &_M1;
        _M1 = 0;
        
        _RetVal = LsarQuerySecurityObject(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle),
                                  SecurityInformation,
                                  SecurityDescriptor);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[118] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecurityDescriptor,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[118] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecurityDescriptor,
                        &__MIDLFormatString.Format[118] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetSecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[40] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[156],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetSecurityObject(
                                ( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle),
                                SecurityInformation,
                                SecurityDescriptor);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecurityDescriptor,
                        &__MIDLFormatString.Format[156] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarChangePassword(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING AccountName;
    PLSAPR_UNICODE_STRING DomainName;
    PLSAPR_UNICODE_STRING NewPassword;
    PLSAPR_UNICODE_STRING OldPassword;
    PLSAPR_UNICODE_STRING ServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    ServerName = 0;
    DomainName = 0;
    AccountName = 0;
    OldPassword = 0;
    NewPassword = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[52] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DomainName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&OldPassword,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&NewPassword,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        
        _RetVal = LsarChangePassword(
                             ServerName,
                             DomainName,
                             AccountName,
                             OldPassword,
                             NewPassword);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ServerName,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainName,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountName,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)OldPassword,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)NewPassword,
                        &__MIDLFormatString.Format[160] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_SERVER_NAME SystemName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SystemName = 0;
    ObjectAttributes = 0;
    PolicyHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[74] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SystemName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[186],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ObjectAttributes,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[190],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        PolicyHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenPolicy(
                         SystemName,
                         ObjectAttributes,
                         DesiredAccess,
                         ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(PolicyHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )PolicyHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ObjectAttributes,
                        &__MIDLFormatString.Format[190] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQueryInformationPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    POLICY_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_POLICY_INFORMATION __RPC_FAR *PolicyInformation;
    PLSAPR_POLICY_INFORMATION _M2;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    PolicyInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[90] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        PolicyInformation = &_M2;
        _M2 = 0;
        
        _RetVal = LsarQueryInformationPolicy(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                     InformationClass,
                                     PolicyInformation);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PolicyInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[422] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PolicyInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[422] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)PolicyInformation,
                        &__MIDLFormatString.Format[422] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetInformationPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    POLICY_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_POLICY_INFORMATION PolicyInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    PolicyInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[102] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&PolicyInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[718],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetInformationPolicy(
                                   ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                   InformationClass,
                                   PolicyInformation);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)PolicyInformation,
                        &__MIDLFormatString.Format[718] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarClearAuditLog(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[6] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarClearAuditLog(( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle));
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarCreateAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_SID AccountSid;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    AccountSid = 0;
    AccountHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730],
                              (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AccountHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateAccount(
                            ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                            AccountSid,
                            DesiredAccess,
                            ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(AccountHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AccountHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountSid,
                        &__MIDLFormatString.Format[730] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumerateAccounts(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_ACCOUNT_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[130] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Information = 0;
        
        _RetVal = LsarEnumerateAccounts(
                                ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                EnumerationContext,
                                EnumerationBuffer,
                                PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[734] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EnumerationBuffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[734] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDLFormatString.Format[734] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarCreateTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUST_INFORMATION TrustedDomainInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    TrustedDomainInformation = 0;
    TrustedDomainHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[146] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[810],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        TrustedDomainHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateTrustedDomain(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  TrustedDomainInformation,
                                  DesiredAccess,
                                  ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(TrustedDomainHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )TrustedDomainHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDLFormatString.Format[810] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumerateTrustedDomains(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_TRUSTED_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[162] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Information = 0;
        
        _RetVal = LsarEnumerateTrustedDomains(
                                      ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                      EnumerationContext,
                                      EnumerationBuffer,
                                      PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EnumerationBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[814] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EnumerationBuffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[814] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDLFormatString.Format[814] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupNames(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Count;
    LSAP_LOOKUP_LEVEL LookupLevel;
    PULONG MappedCount;
    PLSAPR_UNICODE_STRING Names;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains;
    PLSAPR_TRANSLATED_SIDS TranslatedSids;
    PLSAPR_REFERENCED_DOMAIN_LIST _M3;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Names = 0;
    ReferencedDomains = 0;
    TranslatedSids = 0;
    MappedCount = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[178] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Count = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Names,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[878],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedSids,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[944],
                              (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&LookupLevel,
                           13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MappedCount = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        ReferencedDomains = &_M3;
        _M3 = 0;
        
        _RetVal = LsarLookupNames(
                          ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                          Count,
                          Names,
                          ReferencedDomains,
                          TranslatedSids,
                          LookupLevel,
                          MappedCount);
        
        _StubMsg.BufferLength = 4U + 0U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ReferencedDomains,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[914] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TranslatedSids,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[944] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ReferencedDomains,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[914] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TranslatedSids,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[944] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = Count;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Names,
                        &__MIDLFormatString.Format[878] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ReferencedDomains,
                        &__MIDLFormatString.Format[914] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TranslatedSids,
                        &__MIDLFormatString.Format[944] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupSids(
    PRPC_MESSAGE _pRpcMessage )
{
    LSAP_LOOKUP_LEVEL LookupLevel;
    PULONG MappedCount;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains;
    PLSAPR_SID_ENUM_BUFFER SidEnumBuffer;
    PLSAPR_TRANSLATED_NAMES TranslatedNames;
    PLSAPR_REFERENCED_DOMAIN_LIST _M4;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SidEnumBuffer = 0;
    ReferencedDomains = 0;
    TranslatedNames = 0;
    MappedCount = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[204] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SidEnumBuffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[998],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedNames,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1002],
                              (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&LookupLevel,
                           13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MappedCount = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        ReferencedDomains = &_M4;
        _M4 = 0;
        
        _RetVal = LsarLookupSids(
                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                         SidEnumBuffer,
                         ReferencedDomains,
                         TranslatedNames,
                         LookupLevel,
                         MappedCount);
        
        _StubMsg.BufferLength = 4U + 0U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ReferencedDomains,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[914] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TranslatedNames,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1002] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ReferencedDomains,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[914] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TranslatedNames,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1002] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SidEnumBuffer,
                        &__MIDLFormatString.Format[998] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ReferencedDomains,
                        &__MIDLFormatString.Format[914] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TranslatedNames,
                        &__MIDLFormatString.Format[1002] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarCreateSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT SecretHandle;
    PLSAPR_UNICODE_STRING SecretName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SecretName = 0;
    SecretHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[228] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SecretName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecretHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateSecret(
                           ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                           SecretName,
                           DesiredAccess,
                           ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(SecretHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )SecretHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecretName,
                        &__MIDLFormatString.Format[160] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_SID AccountSid;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    AccountSid = 0;
    AccountHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730],
                              (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AccountHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenAccount(
                          ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                          AccountSid,
                          DesiredAccess,
                          ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(AccountHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AccountHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountSid,
                        &__MIDLFormatString.Format[730] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumeratePrivilegesAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_PRIVILEGE_SET __RPC_FAR *Privileges;
    PLSAPR_PRIVILEGE_SET _M5;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Privileges = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[244] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Privileges = &_M5;
        _M5 = 0;
        
        _RetVal = LsarEnumeratePrivilegesAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),Privileges);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1060] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Privileges,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1060] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Privileges,
                        &__MIDLFormatString.Format[1060] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarAddPrivilegesToAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_PRIVILEGE_SET Privileges;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Privileges = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[254] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1112],
                              (unsigned char)0 );
        
        
        _RetVal = LsarAddPrivilegesToAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),Privileges);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Privileges,
                        &__MIDLFormatString.Format[1112] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarRemovePrivilegesFromAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    BOOLEAN AllPrivileges;
    PLSAPR_PRIVILEGE_SET Privileges;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Privileges = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[264] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        AllPrivileges = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Privileges,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1064],
                              (unsigned char)0 );
        
        
        _RetVal = LsarRemovePrivilegesFromAccount(
                                          ( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),
                                          AllPrivileges,
                                          Privileges);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Privileges,
                        &__MIDLFormatString.Format[1064] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarGetQuotasForAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PQUOTA_LIMITS QuotaLimits;
    QUOTA_LIMITS _QuotaLimitsM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    QuotaLimits = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[276] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        QuotaLimits = &_QuotaLimitsM;
        
        _RetVal = LsarGetQuotasForAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),QuotaLimits);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)QuotaLimits,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1116] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)QuotaLimits,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1116] );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)QuotaLimits,
                        &__MIDLFormatString.Format[1116] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetQuotasForAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PQUOTA_LIMITS QuotaLimits;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    QuotaLimits = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[286] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&QuotaLimits,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1120],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetQuotasForAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),QuotaLimits);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)QuotaLimits,
                        &__MIDLFormatString.Format[1120] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarGetSystemAccessAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PULONG SystemAccess;
    ULONG _M6;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SystemAccess = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[296] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SystemAccess = &_M6;
        
        _RetVal = LsarGetSystemAccessAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),SystemAccess);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *SystemAccess;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetSystemAccessAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    ULONG SystemAccess;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[306] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SystemAccess = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = LsarSetSystemAccessAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),SystemAccess);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_SID TrustedDomainSid;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    TrustedDomainSid = 0;
    TrustedDomainHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[730],
                              (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        TrustedDomainHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenTrustedDomain(
                                ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                TrustedDomainSid,
                                DesiredAccess,
                                ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(TrustedDomainHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )TrustedDomainHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainSid,
                        &__MIDLFormatString.Format[730] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQueryInfoTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation;
    PLSAPR_TRUSTED_DOMAIN_INFO _M7;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[314] );
        
        TrustedDomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        TrustedDomainInformation = &_M7;
        _M7 = 0;
        
        _RetVal = LsarQueryInfoTrustedDomain(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(TrustedDomainHandle),
                                     InformationClass,
                                     TrustedDomainInformation);
        
        _StubMsg.BufferLength = 4U + 7U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1128] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1128] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDLFormatString.Format[1128] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetInformationTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[326] );
        
        TrustedDomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1226],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetInformationTrustedDomain(
                                          ( LSAPR_HANDLE  )*NDRSContextValue(TrustedDomainHandle),
                                          InformationClass,
                                          TrustedDomainInformation);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDLFormatString.Format[1226] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT SecretHandle;
    PLSAPR_UNICODE_STRING SecretName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    SecretName = 0;
    SecretHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[228] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SecretName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecretHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenSecret(
                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                         SecretName,
                         DesiredAccess,
                         ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(SecretHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )SecretHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecretName,
                        &__MIDLFormatString.Format[160] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue;
    PLSAPR_CR_CIPHER_VALUE EncryptedOldValue;
    NDR_SCONTEXT SecretHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    EncryptedCurrentValue = 0;
    EncryptedOldValue = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[338] );
        
        SecretHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1238],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1238],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetSecret(
                        ( LSAPR_HANDLE  )*NDRSContextValue(SecretHandle),
                        EncryptedCurrentValue,
                        EncryptedOldValue);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                        &__MIDLFormatString.Format[1238] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedOldValue,
                        &__MIDLFormatString.Format[1238] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQuerySecret(
    PRPC_MESSAGE _pRpcMessage )
{
    PLARGE_INTEGER CurrentValueSetTime;
    PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedCurrentValue;
    PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedOldValue;
    PLARGE_INTEGER OldValueSetTime;
    NDR_SCONTEXT SecretHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    EncryptedCurrentValue = 0;
    CurrentValueSetTime = 0;
    EncryptedOldValue = 0;
    OldValueSetTime = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[352] );
        
        SecretHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1278],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1282],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1278],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&OldValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1282],
                              (unsigned char)0 );
        
        
        _RetVal = LsarQuerySecret(
                          ( LSAPR_HANDLE  )*NDRSContextValue(SecretHandle),
                          EncryptedCurrentValue,
                          CurrentValueSetTime,
                          EncryptedOldValue,
                          OldValueSetTime);
        
        _StubMsg.BufferLength = 8U + 11U + 18U + 11U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1278] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1282] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1278] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)OldValueSetTime,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1282] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1278] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)CurrentValueSetTime,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1282] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedOldValue,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1278] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)OldValueSetTime,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1282] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                        &__MIDLFormatString.Format[1278] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)CurrentValueSetTime,
                        &__MIDLFormatString.Format[1282] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedOldValue,
                        &__MIDLFormatString.Format[1278] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)OldValueSetTime,
                        &__MIDLFormatString.Format[1282] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeValue(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING Name;
    NDR_SCONTEXT PolicyHandle;
    PLUID Value;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    LARGE_INTEGER _ValueM;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Name = 0;
    Value = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[374] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        Value = &_ValueM;
        
        _RetVal = LsarLookupPrivilegeValue(
                                   ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                   Name,
                                   Value);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Value,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1286] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Value,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1286] );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Value,
                        &__MIDLFormatString.Format[1286] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeName(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING __RPC_FAR *Name;
    NDR_SCONTEXT PolicyHandle;
    PLUID Value;
    PLSAPR_UNICODE_STRING _M8;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Value = 0;
    Name = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[388] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Value,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1290],
                              (unsigned char)0 );
        
        Name = &_M8;
        _M8 = 0;
        
        _RetVal = LsarLookupPrivilegeName(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  Value,
                                  Name);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1294] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Name,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1294] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Value,
                        &__MIDLFormatString.Format[1290] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[1294] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeDisplayName(
    PRPC_MESSAGE _pRpcMessage )
{
    SHORT ClientLanguage;
    SHORT ClientSystemDefaultLanguage;
    PLSAPR_UNICODE_STRING __RPC_FAR *DisplayName;
    PWORD LanguageReturned;
    PLSAPR_UNICODE_STRING Name;
    NDR_SCONTEXT PolicyHandle;
    WORD _M10;
    PLSAPR_UNICODE_STRING _M9;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    Name = 0;
    DisplayName = 0;
    LanguageReturned = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[402] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[160],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        ClientLanguage = *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        ClientSystemDefaultLanguage = *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        DisplayName = &_M9;
        _M9 = 0;
        LanguageReturned = &_M10;
        
        _RetVal = LsarLookupPrivilegeDisplayName(
                                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                         Name,
                                         ClientLanguage,
                                         ClientSystemDefaultLanguage,
                                         DisplayName,
                                         LanguageReturned);
        
        _StubMsg.BufferLength = 4U + 5U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DisplayName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1294] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DisplayName,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1294] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( WORD __RPC_FAR * )_StubMsg.Buffer)++ = *LanguageReturned;
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[160] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DisplayName,
                        &__MIDLFormatString.Format[1294] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarDeleteObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    ObjectHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarDeleteObject(( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(ObjectHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ObjectHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void __RPC_FAR *)& lsarpc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
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

static RPC_DISPATCH_FUNCTION lsarpc_table[] =
    {
    lsarpc_LsarClose,
    lsarpc_LsarDelete,
    lsarpc_LsarEnumeratePrivileges,
    lsarpc_LsarQuerySecurityObject,
    lsarpc_LsarSetSecurityObject,
    lsarpc_LsarChangePassword,
    lsarpc_LsarOpenPolicy,
    lsarpc_LsarQueryInformationPolicy,
    lsarpc_LsarSetInformationPolicy,
    lsarpc_LsarClearAuditLog,
    lsarpc_LsarCreateAccount,
    lsarpc_LsarEnumerateAccounts,
    lsarpc_LsarCreateTrustedDomain,
    lsarpc_LsarEnumerateTrustedDomains,
    lsarpc_LsarLookupNames,
    lsarpc_LsarLookupSids,
    lsarpc_LsarCreateSecret,
    lsarpc_LsarOpenAccount,
    lsarpc_LsarEnumeratePrivilegesAccount,
    lsarpc_LsarAddPrivilegesToAccount,
    lsarpc_LsarRemovePrivilegesFromAccount,
    lsarpc_LsarGetQuotasForAccount,
    lsarpc_LsarSetQuotasForAccount,
    lsarpc_LsarGetSystemAccessAccount,
    lsarpc_LsarSetSystemAccessAccount,
    lsarpc_LsarOpenTrustedDomain,
    lsarpc_LsarQueryInfoTrustedDomain,
    lsarpc_LsarSetInformationTrustedDomain,
    lsarpc_LsarOpenSecret,
    lsarpc_LsarSetSecret,
    lsarpc_LsarQuerySecret,
    lsarpc_LsarLookupPrivilegeValue,
    lsarpc_LsarLookupPrivilegeName,
    lsarpc_LsarLookupPrivilegeDisplayName,
    lsarpc_LsarDeleteObject,
    0
    };
RPC_DISPATCH_TABLE lsarpc_DispatchTable = 
    {
    35,
    lsarpc_table
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
/* 218 */	0xea, 0x3,	/* Type Offset=1002 */
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
/* 250 */	0x24, 0x4,	/* Type Offset=1060 */
/* 252 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 254 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 256 */	0x8, 0x0,	/* Type Offset=8 */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 260 */	0x58, 0x4,	/* Type Offset=1112 */
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
/* 272 */	0x28, 0x4,	/* Type Offset=1064 */
/* 274 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 276 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 278 */	0x8, 0x0,	/* Type Offset=8 */
/* 280 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 282 */	0x5c, 0x4,	/* Type Offset=1116 */
/* 284 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 286 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 288 */	0x8, 0x0,	/* Type Offset=8 */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 292 */	0x60, 0x4,	/* Type Offset=1120 */
/* 294 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 298 */	0x8, 0x0,	/* Type Offset=8 */
/* 300 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 302 */	0x64, 0x4,	/* Type Offset=1124 */
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
/* 322 */	0x68, 0x4,	/* Type Offset=1128 */
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
/* 334 */	0xca, 0x4,	/* Type Offset=1226 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 340 */	0x8, 0x0,	/* Type Offset=8 */
/* 342 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 344 */	0xd6, 0x4,	/* Type Offset=1238 */
/* 346 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 348 */	0xd6, 0x4,	/* Type Offset=1238 */
/* 350 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 352 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 354 */	0x8, 0x0,	/* Type Offset=8 */
/* 356 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 358 */	0xfe, 0x4,	/* Type Offset=1278 */
/* 360 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 362 */	0x2, 0x5,	/* Type Offset=1282 */
/* 364 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 366 */	0xfe, 0x4,	/* Type Offset=1278 */
/* 368 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 370 */	0x2, 0x5,	/* Type Offset=1282 */
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
/* 384 */	0x6, 0x5,	/* Type Offset=1286 */
/* 386 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 388 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 390 */	0x8, 0x0,	/* Type Offset=8 */
/* 392 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 394 */	0xa, 0x5,	/* Type Offset=1290 */
/* 396 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 398 */	0xe, 0x5,	/* Type Offset=1294 */
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
/* 416 */	0xe, 0x5,	/* Type Offset=1294 */
/* 418 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 420 */	0x16, 0x5,	/* Type Offset=1302 */
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
/* 110 */	0x12, 0x0,	/* FC_UP */
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
			0x12, 0x0,	/* FC_UP */
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
			0x11, 0x0,	/* FC_RP */
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
/* 802 */	0x12, 0x0,	/* FC_UP */
/* 804 */	0xd2, 0xff,	/* Offset= -46 (758) */
/* 806 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 808 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 810 */	
			0x11, 0x0,	/* FC_RP */
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
/* 870 */	0x12, 0x0,	/* FC_UP */
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
			0x12, 0x0,	/* FC_UP */
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
/* 934 */	0x12, 0x0,	/* FC_UP */
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
/* 990 */	0x12, 0x0,	/* FC_UP */
/* 992 */	0xe0, 0xff,	/* Offset= -32 (960) */
/* 994 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 996 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 998 */	
			0x11, 0x0,	/* FC_RP */
/* 1000 */	0x2e, 0xff,	/* Offset= -210 (790) */
/* 1002 */	
			0x11, 0x0,	/* FC_RP */
/* 1004 */	0x24, 0x0,	/* Offset= 36 (1040) */
/* 1006 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1008 */	0x10, 0x0,	/* 16 */
/* 1010 */	0x0, 0x0,	/* 0 */
/* 1012 */	0x0, 0x0,	/* Offset= 0 (1012) */
/* 1014 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1016 */	0x0,		/* 0 */
			0xab, 0xfc,	/* Offset= -853 (164) */
			0x8,		/* FC_LONG */
/* 1020 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1022 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1024 */	0x0, 0x0,	/* 0 */
/* 1026 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1028 */	0x0, 0x0,	/* 0 */
/* 1030 */	0xff, 0xff, 0xff, 0xff,	/* -1 */
/* 1034 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1036 */	0xe2, 0xff,	/* Offset= -30 (1006) */
/* 1038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1040 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1042 */	0x8, 0x0,	/* 8 */
/* 1044 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1046 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1048 */	0x4, 0x0,	/* 4 */
/* 1050 */	0x4, 0x0,	/* 4 */
/* 1052 */	0x12, 0x0,	/* FC_UP */
/* 1054 */	0xe0, 0xff,	/* Offset= -32 (1022) */
/* 1056 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1058 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1060 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1062 */	0x2, 0x0,	/* Offset= 2 (1064) */
/* 1064 */	
			0x12, 0x0,	/* FC_UP */
/* 1066 */	0x22, 0x0,	/* Offset= 34 (1100) */
/* 1068 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1070 */	0x8, 0x0,	/* 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1076 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1078 */	0xc, 0x0,	/* 12 */
/* 1080 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1082 */	0xf2, 0xff,	/* Offset= -14 (1068) */
/* 1084 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1086 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1088 */	0xc, 0x0,	/* 12 */
/* 1090 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1092 */	0xf8, 0xff,	/* -8 */
/* 1094 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1096 */	0xec, 0xff,	/* Offset= -20 (1076) */
/* 1098 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	0x8, 0x0,	/* 8 */
/* 1104 */	0xee, 0xff,	/* Offset= -18 (1086) */
/* 1106 */	0x0, 0x0,	/* Offset= 0 (1106) */
/* 1108 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1112 */	
			0x11, 0x0,	/* FC_RP */
/* 1114 */	0xf2, 0xff,	/* Offset= -14 (1100) */
/* 1116 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1118 */	0x34, 0xfe,	/* Offset= -460 (658) */
/* 1120 */	
			0x11, 0x0,	/* FC_RP */
/* 1122 */	0x30, 0xfe,	/* Offset= -464 (658) */
/* 1124 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1126 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1128 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1130 */	0x2, 0x0,	/* Offset= 2 (1132) */
/* 1132 */	
			0x12, 0x0,	/* FC_UP */
/* 1134 */	0x2, 0x0,	/* Offset= 2 (1136) */
/* 1136 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1138 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1140 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1142 */	0x2, 0x0,	/* Offset= 2 (1144) */
/* 1144 */	0x8, 0x0,	/* 8 */
/* 1146 */	0x3, 0x30,	/* 12291 */
/* 1148 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 1152 */	0x24, 0xfc,	/* Offset= -988 (164) */
/* 1154 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 1158 */	0x2a, 0x0,	/* Offset= 42 (1200) */
/* 1160 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 1164 */	0x38, 0x0,	/* Offset= 56 (1220) */
/* 1166 */	0xff, 0xff,	/* Offset= -1 (1165) */
/* 1168 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1170 */	0x8, 0x0,	/* 8 */
/* 1172 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1174 */	0x0, 0x0,	/* 0 */
/* 1176 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1178 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1180 */	0x8, 0x0,	/* 8 */
/* 1182 */	0x0, 0x0,	/* 0 */
/* 1184 */	0x1, 0x0,	/* 1 */
/* 1186 */	0x4, 0x0,	/* 4 */
/* 1188 */	0x4, 0x0,	/* 4 */
/* 1190 */	0x12, 0x0,	/* FC_UP */
/* 1192 */	0x72, 0xfb,	/* Offset= -1166 (26) */
/* 1194 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1196 */	0x0,		/* 0 */
			0xf7, 0xfb,	/* Offset= -1033 (164) */
			0x5b,		/* FC_END */
/* 1200 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1202 */	0x8, 0x0,	/* 8 */
/* 1204 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1206 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1208 */	0x4, 0x0,	/* 4 */
/* 1210 */	0x4, 0x0,	/* 4 */
/* 1212 */	0x12, 0x0,	/* FC_UP */
/* 1214 */	0xd2, 0xff,	/* Offset= -46 (1168) */
/* 1216 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1218 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1220 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1222 */	0x4, 0x0,	/* 4 */
/* 1224 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1226 */	
			0x11, 0x0,	/* FC_RP */
/* 1228 */	0x2, 0x0,	/* Offset= 2 (1230) */
/* 1230 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1232 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1234 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1236 */	0xa4, 0xff,	/* Offset= -92 (1144) */
/* 1238 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1240 */	0x10, 0x0,	/* Offset= 16 (1256) */
/* 1242 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1244 */	0x1, 0x0,	/* 1 */
/* 1246 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1248 */	0x4, 0x0,	/* 4 */
/* 1250 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1252 */	0x0, 0x0,	/* 0 */
/* 1254 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1256 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1258 */	0xc, 0x0,	/* 12 */
/* 1260 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1264 */	0x8, 0x0,	/* 8 */
/* 1266 */	0x8, 0x0,	/* 8 */
/* 1268 */	0x12, 0x0,	/* FC_UP */
/* 1270 */	0xe4, 0xff,	/* Offset= -28 (1242) */
/* 1272 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1276 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1278 */	
			0x12, 0x10,	/* FC_UP */
/* 1280 */	0xd6, 0xff,	/* Offset= -42 (1238) */
/* 1282 */	
			0x12, 0x0,	/* FC_UP */
/* 1284 */	0x10, 0xfb,	/* Offset= -1264 (20) */
/* 1286 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1288 */	0xc, 0xfb,	/* Offset= -1268 (20) */
/* 1290 */	
			0x11, 0x0,	/* FC_RP */
/* 1292 */	0x8, 0xfb,	/* Offset= -1272 (20) */
/* 1294 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1296 */	0x2, 0x0,	/* Offset= 2 (1298) */
/* 1298 */	
			0x12, 0x0,	/* FC_UP */
/* 1300 */	0x90, 0xfb,	/* Offset= -1136 (164) */
/* 1302 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1304 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
