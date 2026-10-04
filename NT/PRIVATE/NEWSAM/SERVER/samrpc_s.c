
#include <string.h>
#include "samrpc.h"

extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;

extern RPC_DISPATCH_TABLE samr_DispatchTable;

static const RPC_SERVER_INTERFACE samr___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAC}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &samr_DispatchTable,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE samr_ServerIfHandle = (RPC_IF_HANDLE)& samr___RpcServerInterface;

extern const MIDL_STUB_DESC samr_StubDesc;

void __RPC_STUB
samr_SamrConnect(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT ServerHandle;
    PSAMPR_SERVER_NAME ServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    ServerName = 0;
    ServerHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        ServerHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = SamrConnect(
                      ServerName,
                      ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(ServerHandle),
                      DesiredAccess);
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ServerHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrCloseHandle(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT SamHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    SamHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        SamHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrCloseHandle(( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(SamHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )SamHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrSetSecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PSAMPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[18] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[24],
                              (unsigned char)0 );
        
        
        _RetVal = SamrSetSecurityObject(
                                ( SAMPR_HANDLE  )*NDRSContextValue(ObjectHandle),
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
                        &__MIDLFormatString.Format[24] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQuerySecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PSAMPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    PSAMPR_SR_SECURITY_DESCRIPTOR _M6;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[30] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecurityDescriptor = &_M6;
        _M6 = 0;
        
        _RetVal = SamrQuerySecurityObject(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(ObjectHandle),
                                  SecurityInformation,
                                  SecurityDescriptor);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[58] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecurityDescriptor,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[58] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecurityDescriptor,
                        &__MIDLFormatString.Format[58] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrShutdownSamServer(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ServerHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[42] );
        
        ServerHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrShutdownSamServer(( SAMPR_HANDLE  )*NDRSContextValue(ServerHandle));
        
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
samr_SamrLookupDomainInSamServer(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_SID __RPC_FAR *DomainId;
    PRPC_UNICODE_STRING Name;
    NDR_SCONTEXT ServerHandle;
    PRPC_SID _M7;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Name = 0;
    DomainId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[48] );
        
        ServerHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        DomainId = &_M7;
        _M7 = 0;
        
        _RetVal = SamrLookupDomainInSamServer(
                                      ( SAMPR_HANDLE  )*NDRSContextValue(ServerHandle),
                                      Name,
                                      DomainId);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DomainId,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[106] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DomainId,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[106] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[66] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainId,
                        &__MIDLFormatString.Format[106] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrEnumerateDomainsInSamServer(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer;
    PULONG CountReturned;
    PSAM_ENUMERATE_HANDLE EnumerationContext;
    ULONG PreferedMaximumLength;
    NDR_SCONTEXT ServerHandle;
    PSAMPR_ENUMERATION_BUFFER _M8;
    ULONG _M9;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    EnumerationContext = 0;
    Buffer = 0;
    CountReturned = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[62] );
        
        ServerHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = &_M8;
        _M8 = 0;
        CountReturned = &_M9;
        
        _RetVal = SamrEnumerateDomainsInSamServer(
                                          ( SAMPR_HANDLE  )*NDRSContextValue(ServerHandle),
                                          EnumerationContext,
                                          Buffer,
                                          PreferedMaximumLength,
                                          CountReturned);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *CountReturned;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[158] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrOpenDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    PRPC_SID DomainId;
    NDR_SCONTEXT ServerHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    DomainId = 0;
    DomainHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[82] );
        
        ServerHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DomainId,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[260],
                              (unsigned char)0 );
        
        DomainHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = SamrOpenDomain(
                         ( SAMPR_HANDLE  )*NDRSContextValue(ServerHandle),
                         DesiredAccess,
                         DomainId,
                         ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(DomainHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )DomainHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainId,
                        &__MIDLFormatString.Format[260] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryInformationDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer;
    NDR_SCONTEXT DomainHandle;
    DOMAIN_INFORMATION_CLASS DomainInformationClass;
    PSAMPR_DOMAIN_INFO_BUFFER _M10;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[98] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DomainInformationClass,
                           13);
        Buffer = &_M10;
        _M10 = 0;
        
        _RetVal = SamrQueryInformationDomain(
                                     ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                     DomainInformationClass,
                                     Buffer);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[264] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[264] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[264] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrSetInformationDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT DomainHandle;
    PSAMPR_DOMAIN_INFO_BUFFER DomainInformation;
    DOMAIN_INFORMATION_CLASS DomainInformationClass;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    DomainInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[110] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DomainInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DomainInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[592],
                              (unsigned char)0 );
        
        
        _RetVal = SamrSetInformationDomain(
                                   ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                   DomainInformationClass,
                                   DomainInformation);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainInformation,
                        &__MIDLFormatString.Format[592] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrCreateGroupInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    NDR_SCONTEXT GroupHandle;
    PRPC_UNICODE_STRING Name;
    PULONG RelativeId;
    ULONG _M11;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Name = 0;
    GroupHandle = 0;
    RelativeId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[122] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        GroupHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        RelativeId = &_M11;
        
        _RetVal = SamrCreateGroupInDomain(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                  Name,
                                  DesiredAccess,
                                  ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(GroupHandle),
                                  RelativeId);
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )GroupHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *RelativeId;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrEnumerateGroupsInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer;
    PULONG CountReturned;
    NDR_SCONTEXT DomainHandle;
    PSAM_ENUMERATE_HANDLE EnumerationContext;
    ULONG PreferedMaximumLength;
    PSAMPR_ENUMERATION_BUFFER _M12;
    ULONG _M13;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    EnumerationContext = 0;
    Buffer = 0;
    CountReturned = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[62] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = &_M12;
        _M12 = 0;
        CountReturned = &_M13;
        
        _RetVal = SamrEnumerateGroupsInDomain(
                                      ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                      EnumerationContext,
                                      Buffer,
                                      PreferedMaximumLength,
                                      CountReturned);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *CountReturned;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[158] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrCreateUserInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    PRPC_UNICODE_STRING Name;
    PULONG RelativeId;
    NDR_SCONTEXT UserHandle;
    ULONG _M14;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Name = 0;
    UserHandle = 0;
    RelativeId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[122] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        UserHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        RelativeId = &_M14;
        
        _RetVal = SamrCreateUserInDomain(
                                 ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                 Name,
                                 DesiredAccess,
                                 ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(UserHandle),
                                 RelativeId);
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )UserHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *RelativeId;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrEnumerateUsersInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer;
    PULONG CountReturned;
    NDR_SCONTEXT DomainHandle;
    PSAM_ENUMERATE_HANDLE EnumerationContext;
    ULONG PreferedMaximumLength;
    ULONG UserAccountControl;
    PSAMPR_ENUMERATION_BUFFER _M15;
    ULONG _M16;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    EnumerationContext = 0;
    Buffer = 0;
    CountReturned = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[142] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        UserAccountControl = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = &_M15;
        _M15 = 0;
        CountReturned = &_M16;
        
        _RetVal = SamrEnumerateUsersInDomain(
                                     ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                     EnumerationContext,
                                     UserAccountControl,
                                     Buffer,
                                     PreferedMaximumLength,
                                     CountReturned);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *CountReturned;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[158] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrCreateAliasInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING AccountName;
    NDR_SCONTEXT AliasHandle;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    PULONG RelativeId;
    ULONG _M17;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    AccountName = 0;
    AliasHandle = 0;
    RelativeId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[122] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AliasHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        RelativeId = &_M17;
        
        _RetVal = SamrCreateAliasInDomain(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                  AccountName,
                                  DesiredAccess,
                                  ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(AliasHandle),
                                  RelativeId);
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AliasHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *RelativeId;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountName,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrEnumerateAliasesInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer;
    PULONG CountReturned;
    NDR_SCONTEXT DomainHandle;
    PSAM_ENUMERATE_HANDLE EnumerationContext;
    ULONG PreferedMaximumLength;
    PSAMPR_ENUMERATION_BUFFER _M18;
    ULONG _M19;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    EnumerationContext = 0;
    Buffer = 0;
    CountReturned = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[62] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = &_M18;
        _M18 = 0;
        CountReturned = &_M19;
        
        _RetVal = SamrEnumerateAliasesInDomain(
                                       ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                       EnumerationContext,
                                       Buffer,
                                       PreferedMaximumLength,
                                       CountReturned);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[158] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *CountReturned;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[158] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrGetAliasMembership(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT DomainHandle;
    PSAMPR_ULONG_ARRAY Membership;
    PSAMPR_PSID_ARRAY SidArray;
    struct _SAMPR_ULONG_ARRAY _MembershipM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    SidArray = 0;
    Membership = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[164] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SidArray,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[604],
                              (unsigned char)0 );
        
        Membership = &_MembershipM;
        Membership -> Element = 0;
        
        _RetVal = SamrGetAliasMembership(
                                 ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                 SidArray,
                                 Membership);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Membership,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Membership,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SidArray,
                        &__MIDLFormatString.Format[604] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Membership,
                        &__MIDLFormatString.Format[680] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrLookupNamesInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Count;
    NDR_SCONTEXT DomainHandle;
    RPC_UNICODE_STRING ( __RPC_FAR *Names )[  ];
    PSAMPR_ULONG_ARRAY RelativeIds;
    PSAMPR_ULONG_ARRAY Use;
    struct _SAMPR_ULONG_ARRAY _RelativeIdsM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    struct _SAMPR_ULONG_ARRAY _UseM;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Names = 0;
    RelativeIds = 0;
    Use = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[178] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Count = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&Names,
                                             (PFORMAT_STRING) &__MIDLFormatString.Format[714],
                                             (unsigned char)0 );
        
        RelativeIds = &_RelativeIdsM;
        RelativeIds -> Element = 0;
        Use = &_UseM;
        Use -> Element = 0;
        
        _RetVal = SamrLookupNamesInDomain(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                  Count,
                                  *Names,
                                  RelativeIds,
                                  Use);
        
        _StubMsg.BufferLength = 0U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)RelativeIds,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Use,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RelativeIds,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Use,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = 1 * 1000;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = 1 * Count;
        
        NdrConformantVaryingArrayFree( &_StubMsg,
                                       (unsigned char __RPC_FAR *)Names,
                                       &__MIDLFormatString.Format[714] );
        
        if ( Names )
            _StubMsg.pfnFree( Names );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RelativeIds,
                        &__MIDLFormatString.Format[680] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Use,
                        &__MIDLFormatString.Format[680] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrLookupIdsInDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Count;
    NDR_SCONTEXT DomainHandle;
    PSAMPR_RETURNED_USTRING_ARRAY Names;
    PULONG RelativeIds;
    PSAMPR_ULONG_ARRAY Use;
    struct _SAMPR_RETURNED_USTRING_ARRAY _NamesM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    struct _SAMPR_ULONG_ARRAY _UseM;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RelativeIds = 0;
    Names = 0;
    Use = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[198] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Count = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RelativeIds,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[750],
                              (unsigned char)0 );
        
        Names = &_NamesM;
        Names -> Element = 0;
        Use = &_UseM;
        Use -> Element = 0;
        
        _RetVal = SamrLookupIdsInDomain(
                                ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                Count,
                                RelativeIds,
                                Names,
                                Use);
        
        _StubMsg.BufferLength = 0U + 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Names,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[768] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Use,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Names,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[768] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Use,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[680] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = 1 * 1000;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = 1 * Count;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RelativeIds,
                        &__MIDLFormatString.Format[750] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Names,
                        &__MIDLFormatString.Format[768] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Use,
                        &__MIDLFormatString.Format[680] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrOpenGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    NDR_SCONTEXT GroupHandle;
    ULONG GroupId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    GroupHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[218] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        GroupId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        GroupHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = SamrOpenGroup(
                        ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                        DesiredAccess,
                        GroupId,
                        ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(GroupHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )GroupHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrQueryInformationGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_GROUP_INFO_BUFFER __RPC_FAR *Buffer;
    NDR_SCONTEXT GroupHandle;
    GROUP_INFORMATION_CLASS GroupInformationClass;
    PSAMPR_GROUP_INFO_BUFFER _M22;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[232] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&GroupInformationClass,
                           13);
        Buffer = &_M22;
        _M22 = 0;
        
        _RetVal = SamrQueryInformationGroup(
                                    ( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),
                                    GroupInformationClass,
                                    Buffer);
        
        _StubMsg.BufferLength = 4U + 7U;
        _StubMsg.MaxCount = GroupInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[824] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = GroupInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[824] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = GroupInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[824] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrSetInformationGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_GROUP_INFO_BUFFER Buffer;
    NDR_SCONTEXT GroupHandle;
    GROUP_INFORMATION_CLASS GroupInformationClass;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[244] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&GroupInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[914],
                              (unsigned char)0 );
        
        
        _RetVal = SamrSetInformationGroup(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),
                                  GroupInformationClass,
                                  Buffer);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = GroupInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[914] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrAddMemberToGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Attributes;
    NDR_SCONTEXT GroupHandle;
    ULONG MemberId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[256] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        MemberId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Attributes = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = SamrAddMemberToGroup(
                               ( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),
                               MemberId,
                               Attributes);
        
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
samr_SamrDeleteGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT GroupHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    GroupHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrDeleteGroup(( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(GroupHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )GroupHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrRemoveMemberFromGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT GroupHandle;
    ULONG MemberId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[266] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        MemberId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = SamrRemoveMemberFromGroup(( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),MemberId);
        
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
samr_SamrGetMembersInGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT GroupHandle;
    PSAMPR_GET_MEMBERS_BUFFER __RPC_FAR *Members;
    PSAMPR_GET_MEMBERS_BUFFER _M23;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Members = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[274] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Members = &_M23;
        _M23 = 0;
        
        _RetVal = SamrGetMembersInGroup(( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),Members);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Members,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[926] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Members,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[926] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Members,
                        &__MIDLFormatString.Format[926] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrSetMemberAttributesOfGroup(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Attributes;
    NDR_SCONTEXT GroupHandle;
    ULONG MemberId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[256] );
        
        GroupHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        MemberId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Attributes = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = SamrSetMemberAttributesOfGroup(
                                         ( SAMPR_HANDLE  )*NDRSContextValue(GroupHandle),
                                         MemberId,
                                         Attributes);
        
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
samr_SamrOpenAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    ULONG AliasId;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    AliasHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[218] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AliasId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        AliasHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = SamrOpenAlias(
                        ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                        DesiredAccess,
                        AliasId,
                        ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(AliasHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AliasHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrQueryInformationAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    ALIAS_INFORMATION_CLASS AliasInformationClass;
    PSAMPR_ALIAS_INFO_BUFFER __RPC_FAR *Buffer;
    PSAMPR_ALIAS_INFO_BUFFER _M24;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[284] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&AliasInformationClass,
                           13);
        Buffer = &_M24;
        _M24 = 0;
        
        _RetVal = SamrQueryInformationAlias(
                                    ( SAMPR_HANDLE  )*NDRSContextValue(AliasHandle),
                                    AliasInformationClass,
                                    Buffer);
        
        _StubMsg.BufferLength = 4U + 7U;
        _StubMsg.MaxCount = AliasInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[966] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = AliasInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[966] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = AliasInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[966] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrSetInformationAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    ALIAS_INFORMATION_CLASS AliasInformationClass;
    PSAMPR_ALIAS_INFO_BUFFER Buffer;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[296] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&AliasInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1058],
                              (unsigned char)0 );
        
        
        _RetVal = SamrSetInformationAlias(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(AliasHandle),
                                  AliasInformationClass,
                                  Buffer);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = AliasInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[1058] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrDeleteAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    AliasHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrDeleteAlias(( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(AliasHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AliasHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrAddMemberToAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    PRPC_SID MemberId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    MemberId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[308] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&MemberId,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[260],
                              (unsigned char)0 );
        
        
        _RetVal = SamrAddMemberToAlias(( SAMPR_HANDLE  )*NDRSContextValue(AliasHandle),MemberId);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)MemberId,
                        &__MIDLFormatString.Format[260] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrRemoveMemberFromAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    PRPC_SID MemberId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    MemberId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[308] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&MemberId,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[260],
                              (unsigned char)0 );
        
        
        _RetVal = SamrRemoveMemberFromAlias(( SAMPR_HANDLE  )*NDRSContextValue(AliasHandle),MemberId);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)MemberId,
                        &__MIDLFormatString.Format[260] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrGetMembersInAlias(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AliasHandle;
    PSAMPR_PSID_ARRAY Members;
    struct _SAMPR_PSID_ARRAY _MembersM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Members = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[318] );
        
        AliasHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Members = &_MembersM;
        Members -> Sids = 0;
        
        _RetVal = SamrGetMembersInAlias(( SAMPR_HANDLE  )*NDRSContextValue(AliasHandle),Members);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Members,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1070] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Members,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1070] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Members,
                        &__MIDLFormatString.Format[1070] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrOpenUser(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    NDR_SCONTEXT UserHandle;
    ULONG UserId;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    UserHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[218] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        UserId = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        UserHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = SamrOpenUser(
                       ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                       DesiredAccess,
                       UserId,
                       ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(UserHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )UserHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrDeleteUser(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT UserHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    UserHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[12] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrDeleteUser(( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(UserHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )UserHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
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
samr_SamrQueryInformationUser(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer;
    NDR_SCONTEXT UserHandle;
    USER_INFORMATION_CLASS UserInformationClass;
    PSAMPR_USER_INFO_BUFFER _M25;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[328] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&UserInformationClass,
                           13);
        Buffer = &_M25;
        _M25 = 0;
        
        _RetVal = SamrQueryInformationUser(
                                   ( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),
                                   UserInformationClass,
                                   Buffer);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[1074] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[1074] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[1074] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrSetInformationUser(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_USER_INFO_BUFFER Buffer;
    NDR_SCONTEXT UserHandle;
    USER_INFORMATION_CLASS UserInformationClass;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[340] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&UserInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2328],
                              (unsigned char)0 );
        
        
        _RetVal = SamrSetInformationUser(
                                 ( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),
                                 UserInformationClass,
                                 Buffer);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2328] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrChangePasswordUser(
    PRPC_MESSAGE _pRpcMessage )
{
    BOOLEAN LmCrossEncryptionPresent;
    PENCRYPTED_LM_OWF_PASSWORD LmNewEncryptedWithLmOld;
    PENCRYPTED_LM_OWF_PASSWORD LmNtNewEncryptedWithNtNew;
    PENCRYPTED_LM_OWF_PASSWORD LmOldEncryptedWithLmNew;
    BOOLEAN LmPresent;
    BOOLEAN NtCrossEncryptionPresent;
    PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithLmNew;
    PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithNtOld;
    PENCRYPTED_NT_OWF_PASSWORD NtOldEncryptedWithNtNew;
    BOOLEAN NtPresent;
    NDR_SCONTEXT UserHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    LmOldEncryptedWithLmNew = 0;
    LmNewEncryptedWithLmOld = 0;
    NtOldEncryptedWithNtNew = 0;
    NtNewEncryptedWithNtOld = 0;
    NtNewEncryptedWithLmNew = 0;
    LmNtNewEncryptedWithNtNew = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[352] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        LmPresent = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LmOldEncryptedWithLmNew,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LmNewEncryptedWithLmOld,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        NtPresent = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&NtOldEncryptedWithNtNew,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&NtNewEncryptedWithNtOld,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        NtCrossEncryptionPresent = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&NtNewEncryptedWithLmNew,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        LmCrossEncryptionPresent = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&LmNtNewEncryptedWithNtNew,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2340],
                              (unsigned char)0 );
        
        
        _RetVal = SamrChangePasswordUser(
                                 ( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),
                                 LmPresent,
                                 LmOldEncryptedWithLmNew,
                                 LmNewEncryptedWithLmOld,
                                 NtPresent,
                                 NtOldEncryptedWithNtNew,
                                 NtNewEncryptedWithNtOld,
                                 NtCrossEncryptionPresent,
                                 NtNewEncryptedWithLmNew,
                                 LmCrossEncryptionPresent,
                                 LmNtNewEncryptedWithNtNew);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)LmOldEncryptedWithLmNew,
                        &__MIDLFormatString.Format[2340] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)LmNewEncryptedWithLmOld,
                        &__MIDLFormatString.Format[2340] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)NtOldEncryptedWithNtNew,
                        &__MIDLFormatString.Format[2340] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)NtNewEncryptedWithNtOld,
                        &__MIDLFormatString.Format[2340] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)NtNewEncryptedWithLmNew,
                        &__MIDLFormatString.Format[2340] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)LmNtNewEncryptedWithNtNew,
                        &__MIDLFormatString.Format[2340] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrGetGroupsForUser(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_GET_GROUPS_BUFFER __RPC_FAR *Groups;
    NDR_SCONTEXT UserHandle;
    PSAMPR_GET_GROUPS_BUFFER _M26;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Groups = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[390] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Groups = &_M26;
        _M26 = 0;
        
        _RetVal = SamrGetGroupsForUser(( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),Groups);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Groups,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2344] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Groups,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2344] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Groups,
                        &__MIDLFormatString.Format[2344] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryDisplayInformation(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_DISPLAY_INFO_BUFFER Buffer;
    DOMAIN_DISPLAY_INFORMATION DisplayInformationClass;
    NDR_SCONTEXT DomainHandle;
    ULONG EntryCount;
    ULONG Index;
    ULONG PreferredMaximumLength;
    PULONG TotalAvailable;
    PULONG TotalReturned;
    union _SAMPR_DISPLAY_INFO_BUFFER _BufferM;
    ULONG _M27;
    ULONG _M28;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    TotalAvailable = 0;
    TotalReturned = 0;
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[400] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                           13);
        _StubMsg.Buffer += 2;
        Index = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EntryCount = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        PreferredMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        TotalAvailable = &_M27;
        TotalReturned = &_M28;
        Buffer = &_BufferM;
        MIDL_memset(
               Buffer,
               0,
               sizeof( union _SAMPR_DISPLAY_INFO_BUFFER  ));
        
        _RetVal = SamrQueryDisplayInformation(
                                      ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                      DisplayInformationClass,
                                      Index,
                                      EntryCount,
                                      PreferredMaximumLength,
                                      TotalAvailable,
                                      TotalReturned,
                                      Buffer);
        
        _StubMsg.BufferLength = 4U + 4U + 0U + 7U;
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2386] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalAvailable;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalReturned;
        
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2386] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2386] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrGetDisplayEnumerationIndex(
    PRPC_MESSAGE _pRpcMessage )
{
    DOMAIN_DISPLAY_INFORMATION DisplayInformationClass;
    NDR_SCONTEXT DomainHandle;
    PULONG Index;
    PRPC_UNICODE_STRING Prefix;
    ULONG _M29;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Prefix = 0;
    Index = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[426] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Prefix,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        Index = &_M29;
        
        _RetVal = SamrGetDisplayEnumerationIndex(
                                         ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                         DisplayInformationClass,
                                         Prefix,
                                         Index);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *Index;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Prefix,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrTestPrivateFunctionsDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT DomainHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[42] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrTestPrivateFunctionsDomain(( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle));
        
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
samr_SamrTestPrivateFunctionsUser(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT UserHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[42] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = SamrTestPrivateFunctionsUser(( SAMPR_HANDLE  )*NDRSContextValue(UserHandle));
        
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
samr_SamrGetUserDomainPasswordInformation(
    PRPC_MESSAGE _pRpcMessage )
{
    PUSER_DOMAIN_PASSWORD_INFORMATION PasswordInformation;
    NDR_SCONTEXT UserHandle;
    struct _USER_DOMAIN_PASSWORD_INFORMATION _PasswordInformationM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    PasswordInformation = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[442] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        PasswordInformation = &_PasswordInformationM;
        
        _RetVal = SamrGetUserDomainPasswordInformation(( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),PasswordInformation);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PasswordInformation,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2746] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PasswordInformation,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2746] );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)PasswordInformation,
                        &__MIDLFormatString.Format[2746] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrRemoveMemberFromForeignDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT DomainHandle;
    PRPC_SID MemberSid;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    MemberSid = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[308] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&MemberSid,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[260],
                              (unsigned char)0 );
        
        
        _RetVal = SamrRemoveMemberFromForeignDomain(( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),MemberSid);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)MemberSid,
                        &__MIDLFormatString.Format[260] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryInformationDomain2(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer;
    NDR_SCONTEXT DomainHandle;
    DOMAIN_INFORMATION_CLASS DomainInformationClass;
    PSAMPR_DOMAIN_INFO_BUFFER _M30;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[452] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DomainInformationClass,
                           13);
        Buffer = &_M30;
        _M30 = 0;
        
        _RetVal = SamrQueryInformationDomain2(
                                      ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                      DomainInformationClass,
                                      Buffer);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2762] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2762] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DomainInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2762] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryInformationUser2(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer;
    NDR_SCONTEXT UserHandle;
    USER_INFORMATION_CLASS UserInformationClass;
    PSAMPR_USER_INFO_BUFFER _M31;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[464] );
        
        UserHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&UserInformationClass,
                           13);
        Buffer = &_M31;
        _M31 = 0;
        
        _RetVal = SamrQueryInformationUser2(
                                    ( SAMPR_HANDLE  )*NDRSContextValue(UserHandle),
                                    UserInformationClass,
                                    Buffer);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2778] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2778] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = UserInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2778] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryDisplayInformation2(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_DISPLAY_INFO_BUFFER Buffer;
    DOMAIN_DISPLAY_INFORMATION DisplayInformationClass;
    NDR_SCONTEXT DomainHandle;
    ULONG EntryCount;
    ULONG Index;
    ULONG PreferredMaximumLength;
    PULONG TotalAvailable;
    PULONG TotalReturned;
    union _SAMPR_DISPLAY_INFO_BUFFER _BufferM;
    ULONG _M32;
    ULONG _M33;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    TotalAvailable = 0;
    TotalReturned = 0;
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[476] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                           13);
        _StubMsg.Buffer += 2;
        Index = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EntryCount = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        PreferredMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        TotalAvailable = &_M32;
        TotalReturned = &_M33;
        Buffer = &_BufferM;
        MIDL_memset(
               Buffer,
               0,
               sizeof( union _SAMPR_DISPLAY_INFO_BUFFER  ));
        
        _RetVal = SamrQueryDisplayInformation2(
                                       ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                       DisplayInformationClass,
                                       Index,
                                       EntryCount,
                                       PreferredMaximumLength,
                                       TotalAvailable,
                                       TotalReturned,
                                       Buffer);
        
        _StubMsg.BufferLength = 4U + 4U + 0U + 7U;
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2794] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalAvailable;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalReturned;
        
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2794] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2794] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrGetDisplayEnumerationIndex2(
    PRPC_MESSAGE _pRpcMessage )
{
    DOMAIN_DISPLAY_INFORMATION DisplayInformationClass;
    NDR_SCONTEXT DomainHandle;
    PULONG Index;
    PRPC_UNICODE_STRING Prefix;
    ULONG _M34;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Prefix = 0;
    Index = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[426] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                           13);
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Prefix,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        Index = &_M34;
        
        _RetVal = SamrGetDisplayEnumerationIndex2(
                                          ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                          DisplayInformationClass,
                                          Prefix,
                                          Index);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *Index;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Prefix,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrCreateUser2InDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG AccountType;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT DomainHandle;
    PULONG GrantedAccess;
    PRPC_UNICODE_STRING Name;
    PULONG RelativeId;
    NDR_SCONTEXT UserHandle;
    ULONG _M35;
    ULONG _M36;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    Name = 0;
    UserHandle = 0;
    GrantedAccess = 0;
    RelativeId = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[502] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[66],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        AccountType = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        UserHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        GrantedAccess = &_M35;
        RelativeId = &_M36;
        
        _RetVal = SamrCreateUser2InDomain(
                                  ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                  Name,
                                  AccountType,
                                  DesiredAccess,
                                  ( SAMPR_HANDLE __RPC_FAR * )NDRSContextValue(UserHandle),
                                  GrantedAccess,
                                  RelativeId);
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )UserHandle,
                            ( NDR_RUNDOWN  )SAMPR_HANDLE_rundown);
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *GrantedAccess;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *RelativeId;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDLFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
samr_SamrQueryDisplayInformation3(
    PRPC_MESSAGE _pRpcMessage )
{
    PSAMPR_DISPLAY_INFO_BUFFER Buffer;
    DOMAIN_DISPLAY_INFORMATION DisplayInformationClass;
    NDR_SCONTEXT DomainHandle;
    ULONG EntryCount;
    ULONG Index;
    ULONG PreferredMaximumLength;
    PULONG TotalAvailable;
    PULONG TotalReturned;
    union _SAMPR_DISPLAY_INFO_BUFFER _BufferM;
    ULONG _M37;
    ULONG _M38;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &samr_StubDesc);
    TotalAvailable = 0;
    TotalReturned = 0;
    Buffer = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[528] );
        
        DomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&DisplayInformationClass,
                           13);
        _StubMsg.Buffer += 2;
        Index = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EntryCount = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        PreferredMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        TotalAvailable = &_M37;
        TotalReturned = &_M38;
        Buffer = &_BufferM;
        MIDL_memset(
               Buffer,
               0,
               sizeof( union _SAMPR_DISPLAY_INFO_BUFFER  ));
        
        _RetVal = SamrQueryDisplayInformation3(
                                       ( SAMPR_HANDLE  )*NDRSContextValue(DomainHandle),
                                       DisplayInformationClass,
                                       Index,
                                       EntryCount,
                                       PreferredMaximumLength,
                                       TotalAvailable,
                                       TotalReturned,
                                       Buffer);
        
        _StubMsg.BufferLength = 4U + 4U + 0U + 7U;
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[2806] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalAvailable;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *TotalReturned;
        
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[2806] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = DisplayInformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Buffer,
                        &__MIDLFormatString.Format[2806] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC samr_StubDesc = 
    {
    (void __RPC_FAR *)& samr___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION samr_table[] =
    {
    samr_SamrConnect,
    samr_SamrCloseHandle,
    samr_SamrSetSecurityObject,
    samr_SamrQuerySecurityObject,
    samr_SamrShutdownSamServer,
    samr_SamrLookupDomainInSamServer,
    samr_SamrEnumerateDomainsInSamServer,
    samr_SamrOpenDomain,
    samr_SamrQueryInformationDomain,
    samr_SamrSetInformationDomain,
    samr_SamrCreateGroupInDomain,
    samr_SamrEnumerateGroupsInDomain,
    samr_SamrCreateUserInDomain,
    samr_SamrEnumerateUsersInDomain,
    samr_SamrCreateAliasInDomain,
    samr_SamrEnumerateAliasesInDomain,
    samr_SamrGetAliasMembership,
    samr_SamrLookupNamesInDomain,
    samr_SamrLookupIdsInDomain,
    samr_SamrOpenGroup,
    samr_SamrQueryInformationGroup,
    samr_SamrSetInformationGroup,
    samr_SamrAddMemberToGroup,
    samr_SamrDeleteGroup,
    samr_SamrRemoveMemberFromGroup,
    samr_SamrGetMembersInGroup,
    samr_SamrSetMemberAttributesOfGroup,
    samr_SamrOpenAlias,
    samr_SamrQueryInformationAlias,
    samr_SamrSetInformationAlias,
    samr_SamrDeleteAlias,
    samr_SamrAddMemberToAlias,
    samr_SamrRemoveMemberFromAlias,
    samr_SamrGetMembersInAlias,
    samr_SamrOpenUser,
    samr_SamrDeleteUser,
    samr_SamrQueryInformationUser,
    samr_SamrSetInformationUser,
    samr_SamrChangePasswordUser,
    samr_SamrGetGroupsForUser,
    samr_SamrQueryDisplayInformation,
    samr_SamrGetDisplayEnumerationIndex,
    samr_SamrTestPrivateFunctionsDomain,
    samr_SamrTestPrivateFunctionsUser,
    samr_SamrGetUserDomainPasswordInformation,
    samr_SamrRemoveMemberFromForeignDomain,
    samr_SamrQueryInformationDomain2,
    samr_SamrQueryInformationUser2,
    samr_SamrQueryDisplayInformation2,
    samr_SamrGetDisplayEnumerationIndex2,
    samr_SamrCreateUser2InDomain,
    samr_SamrQueryDisplayInformation3,
    0
    };
RPC_DISPATCH_TABLE samr_DispatchTable = 
    {
    52,
    samr_table
    };

void __RPC_USER samr_SAMPR_USER_LOGON_INFORMATION_ExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_LOGON_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_LOGON_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

void __RPC_USER samr_SAMPR_USER_LOGON_HOURS_INFORMATION_ExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_LOGON_HOURS_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_LOGON_HOURS_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

void __RPC_USER samr_SAMPR_USER_ACCOUNT_INFORMATION_ExprEval_0002( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_ACCOUNT_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_ACCOUNT_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

void __RPC_USER samr_SAMPR_USER_ALL_INFORMATION_ExprEval_0003( PMIDL_STUB_MESSAGE pStubMsg )
{
    SAMPR_USER_ALL_INFORMATION __RPC_FAR *pS	=	( SAMPR_USER_ALL_INFORMATION __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (pS->LogonHours.UnitsPerWeek + 7) / 8;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    samr_SAMPR_USER_LOGON_INFORMATION_ExprEval_0000
    ,samr_SAMPR_USER_LOGON_HOURS_INFORMATION_ExprEval_0001
    ,samr_SAMPR_USER_ACCOUNT_INFORMATION_ExprEval_0002
    ,samr_SAMPR_USER_ALL_INFORMATION_ExprEval_0003
    };


static const MIDL_FORMAT_STRING __MIDLProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/*  2 */	0x0, 0x0,	/* Type Offset=0 */
/*  4 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/*  6 */	0x4, 0x0,	/* Type Offset=4 */
/*  8 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 14 */	0xc, 0x0,	/* Type Offset=12 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 20 */	0x14, 0x0,	/* Type Offset=20 */
/* 22 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 26 */	0x18, 0x0,	/* Type Offset=24 */
/* 28 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 32 */	0x14, 0x0,	/* Type Offset=20 */
/* 34 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 38 */	0x3a, 0x0,	/* Type Offset=58 */
/* 40 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 44 */	0x14, 0x0,	/* Type Offset=20 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 50 */	0x14, 0x0,	/* Type Offset=20 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 54 */	0x42, 0x0,	/* Type Offset=66 */
/* 56 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 58 */	0x6a, 0x0,	/* Type Offset=106 */
/* 60 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 64 */	0x14, 0x0,	/* Type Offset=20 */
/* 66 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 68 */	0x9a, 0x0,	/* Type Offset=154 */
/* 70 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 72 */	0x9e, 0x0,	/* Type Offset=158 */
/* 74 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 76 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 78 */	0x0, 0x1,	/* Type Offset=256 */
/* 80 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 82 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 84 */	0x14, 0x0,	/* Type Offset=20 */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 90 */	0x4, 0x1,	/* Type Offset=260 */
/* 92 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 94 */	0x4, 0x0,	/* Type Offset=4 */
/* 96 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 100 */	0x14, 0x0,	/* Type Offset=20 */
/* 102 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 104 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 106 */	0x8, 0x1,	/* Type Offset=264 */
/* 108 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 112 */	0x14, 0x0,	/* Type Offset=20 */
/* 114 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 116 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 118 */	0x50, 0x2,	/* Type Offset=592 */
/* 120 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 124 */	0x14, 0x0,	/* Type Offset=20 */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 128 */	0x42, 0x0,	/* Type Offset=66 */
/* 130 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 132 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 134 */	0x4, 0x0,	/* Type Offset=4 */
/* 136 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 138 */	0x0, 0x1,	/* Type Offset=256 */
/* 140 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 142 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 144 */	0x14, 0x0,	/* Type Offset=20 */
/* 146 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 148 */	0x9a, 0x0,	/* Type Offset=154 */
/* 150 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 152 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 154 */	0x9e, 0x0,	/* Type Offset=158 */
/* 156 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 158 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 160 */	0x0, 0x1,	/* Type Offset=256 */
/* 162 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 164 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 166 */	0x14, 0x0,	/* Type Offset=20 */
/* 168 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 170 */	0x5c, 0x2,	/* Type Offset=604 */
/* 172 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 174 */	0xa8, 0x2,	/* Type Offset=680 */
/* 176 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 180 */	0x14, 0x0,	/* Type Offset=20 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 186 */	0xca, 0x2,	/* Type Offset=714 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 190 */	0xa8, 0x2,	/* Type Offset=680 */
/* 192 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 194 */	0xa8, 0x2,	/* Type Offset=680 */
/* 196 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 200 */	0x14, 0x0,	/* Type Offset=20 */
/* 202 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 206 */	0xee, 0x2,	/* Type Offset=750 */
/* 208 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 210 */	0x0, 0x3,	/* Type Offset=768 */
/* 212 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 214 */	0xa8, 0x2,	/* Type Offset=680 */
/* 216 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 218 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 220 */	0x14, 0x0,	/* Type Offset=20 */
/* 222 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 226 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 228 */	0x4, 0x0,	/* Type Offset=4 */
/* 230 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 234 */	0x14, 0x0,	/* Type Offset=20 */
/* 236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 238 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 240 */	0x38, 0x3,	/* Type Offset=824 */
/* 242 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 246 */	0x14, 0x0,	/* Type Offset=20 */
/* 248 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 250 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 252 */	0x92, 0x3,	/* Type Offset=914 */
/* 254 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 256 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 258 */	0x14, 0x0,	/* Type Offset=20 */
/* 260 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 262 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 266 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 268 */	0x14, 0x0,	/* Type Offset=20 */
/* 270 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 272 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 274 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 276 */	0x14, 0x0,	/* Type Offset=20 */
/* 278 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 280 */	0x9e, 0x3,	/* Type Offset=926 */
/* 282 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 284 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 286 */	0x14, 0x0,	/* Type Offset=20 */
/* 288 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 290 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 292 */	0xc6, 0x3,	/* Type Offset=966 */
/* 294 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 298 */	0x14, 0x0,	/* Type Offset=20 */
/* 300 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 302 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 304 */	0x22, 0x4,	/* Type Offset=1058 */
/* 306 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 308 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 310 */	0x14, 0x0,	/* Type Offset=20 */
/* 312 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 314 */	0x4, 0x1,	/* Type Offset=260 */
/* 316 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 318 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 320 */	0x14, 0x0,	/* Type Offset=20 */
/* 322 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 324 */	0x2e, 0x4,	/* Type Offset=1070 */
/* 326 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 328 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 330 */	0x14, 0x0,	/* Type Offset=20 */
/* 332 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 334 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 336 */	0x32, 0x4,	/* Type Offset=1074 */
/* 338 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 340 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 342 */	0x14, 0x0,	/* Type Offset=20 */
/* 344 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 346 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 348 */	0x18, 0x9,	/* Type Offset=2328 */
/* 350 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 352 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 354 */	0x14, 0x0,	/* Type Offset=20 */
/* 356 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 358 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 360 */	0x24, 0x9,	/* Type Offset=2340 */
/* 362 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 364 */	0x24, 0x9,	/* Type Offset=2340 */
/* 366 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 368 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 370 */	0x24, 0x9,	/* Type Offset=2340 */
/* 372 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 374 */	0x24, 0x9,	/* Type Offset=2340 */
/* 376 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 378 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 380 */	0x24, 0x9,	/* Type Offset=2340 */
/* 382 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 384 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 386 */	0x24, 0x9,	/* Type Offset=2340 */
/* 388 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 390 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 392 */	0x14, 0x0,	/* Type Offset=20 */
/* 394 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 396 */	0x28, 0x9,	/* Type Offset=2344 */
/* 398 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 400 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 402 */	0x14, 0x0,	/* Type Offset=20 */
/* 404 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 406 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 408 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 410 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 412 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 414 */	0x0, 0x1,	/* Type Offset=256 */
/* 416 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 418 */	0x0, 0x1,	/* Type Offset=256 */
/* 420 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 422 */	0x52, 0x9,	/* Type Offset=2386 */
/* 424 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 426 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 428 */	0x14, 0x0,	/* Type Offset=20 */
/* 430 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 432 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 434 */	0x42, 0x0,	/* Type Offset=66 */
/* 436 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 438 */	0x0, 0x1,	/* Type Offset=256 */
/* 440 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 442 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 444 */	0x14, 0x0,	/* Type Offset=20 */
/* 446 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 448 */	0xba, 0xa,	/* Type Offset=2746 */
/* 450 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 452 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 454 */	0x14, 0x0,	/* Type Offset=20 */
/* 456 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 458 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 460 */	0xca, 0xa,	/* Type Offset=2762 */
/* 462 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 464 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 466 */	0x14, 0x0,	/* Type Offset=20 */
/* 468 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 470 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 472 */	0xda, 0xa,	/* Type Offset=2778 */
/* 474 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 476 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 478 */	0x14, 0x0,	/* Type Offset=20 */
/* 480 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 482 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 484 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 486 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 488 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 490 */	0x0, 0x1,	/* Type Offset=256 */
/* 492 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 494 */	0x0, 0x1,	/* Type Offset=256 */
/* 496 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 498 */	0xea, 0xa,	/* Type Offset=2794 */
/* 500 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 502 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 504 */	0x14, 0x0,	/* Type Offset=20 */
/* 506 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 508 */	0x42, 0x0,	/* Type Offset=66 */
/* 510 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 512 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 514 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 516 */	0x4, 0x0,	/* Type Offset=4 */
/* 518 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 520 */	0x0, 0x1,	/* Type Offset=256 */
/* 522 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 524 */	0x0, 0x1,	/* Type Offset=256 */
/* 526 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 528 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 530 */	0x14, 0x0,	/* Type Offset=20 */
/* 532 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 534 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 536 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 538 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 540 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 542 */	0x0, 0x1,	/* Type Offset=256 */
/* 544 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 546 */	0x0, 0x1,	/* Type Offset=256 */
/* 548 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 550 */	0xf6, 0xa,	/* Type Offset=2806 */
/* 552 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_FORMAT_STRING __MIDLFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x0,	/* FC_RP */
/*  6 */	0x2, 0x0,	/* Offset= 2 (8) */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* -96 */
/* 10 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x0,	/* FC_RP */
/* 14 */	0x2, 0x0,	/* Offset= 2 (16) */
/* 16 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* -32 */
/* 18 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 20 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 22 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	0xc, 0x0,	/* Offset= 12 (38) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 30 */	0x1, 0x0,	/* 1 */
/* 32 */	0x18,		/* 24 */
			0x0,		/*  */
/* 34 */	0x0, 0x0,	/* 0 */
/* 36 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 38 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 40 */	0x8, 0x0,	/* 8 */
/* 42 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 46 */	0x4, 0x0,	/* 4 */
/* 48 */	0x4, 0x0,	/* 4 */
/* 50 */	0x12, 0x0,	/* FC_UP */
/* 52 */	0xe8, 0xff,	/* Offset= -24 (28) */
/* 54 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 60 */	0x2, 0x0,	/* Offset= 2 (62) */
/* 62 */	
			0x12, 0x0,	/* FC_UP */
/* 64 */	0xe6, 0xff,	/* Offset= -26 (38) */
/* 66 */	
			0x11, 0x0,	/* FC_RP */
/* 68 */	0x10, 0x0,	/* Offset= 16 (84) */
/* 70 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 72 */	0x2, 0x0,	/* 2 */
/* 74 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 76 */	0x2, 0x0,	/* 2 */
/* 78 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 80 */	0x0, 0x0,	/* 0 */
/* 82 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 84 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 86 */	0x8, 0x0,	/* 8 */
/* 88 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 92 */	0x4, 0x0,	/* 4 */
/* 94 */	0x4, 0x0,	/* 4 */
/* 96 */	0x12, 0x0,	/* FC_UP */
/* 98 */	0xe4, 0xff,	/* Offset= -28 (70) */
/* 100 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 102 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 106 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 108 */	0x2, 0x0,	/* Offset= 2 (110) */
/* 110 */	
			0x12, 0x0,	/* FC_UP */
/* 112 */	0x1c, 0x0,	/* Offset= 28 (140) */
/* 114 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 116 */	0x6, 0x0,	/* 6 */
/* 118 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 120 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 122 */	0x6, 0x0,	/* 6 */
/* 124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 126 */	0xf4, 0xff,	/* Offset= -12 (114) */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 132 */	0x4, 0x0,	/* 4 */
/* 134 */	0x3,		/* 3 */
			0x0,		/*  */
/* 136 */	0xf9, 0xff,	/* -7 */
/* 138 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 140 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 142 */	0x8, 0x0,	/* 8 */
/* 144 */	0xf2, 0xff,	/* Offset= -14 (130) */
/* 146 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 148 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 150 */	0xe2, 0xff,	/* Offset= -30 (120) */
/* 152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 154 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 156 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 160 */	0x2, 0x0,	/* Offset= 2 (162) */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	0x48, 0x0,	/* Offset= 72 (236) */
/* 166 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 168 */	0x2, 0x0,	/* 2 */
/* 170 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 172 */	0x6, 0x0,	/* 6 */
/* 174 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 176 */	0x4, 0x0,	/* 4 */
/* 178 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 180 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 182 */	0xc, 0x0,	/* 12 */
/* 184 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 188 */	0x8, 0x0,	/* 8 */
/* 190 */	0x8, 0x0,	/* 8 */
/* 192 */	0x12, 0x0,	/* FC_UP */
/* 194 */	0xe4, 0xff,	/* Offset= -28 (166) */
/* 196 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 198 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 200 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 206 */	0xc, 0x0,	/* 12 */
/* 208 */	0x18,		/* 24 */
			0x0,		/*  */
/* 210 */	0x0, 0x0,	/* 0 */
/* 212 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 216 */	0xc, 0x0,	/* 12 */
/* 218 */	0x0, 0x0,	/* 0 */
/* 220 */	0x1, 0x0,	/* 1 */
/* 222 */	0x8, 0x0,	/* 8 */
/* 224 */	0x8, 0x0,	/* 8 */
/* 226 */	0x12, 0x0,	/* FC_UP */
/* 228 */	0xc2, 0xff,	/* Offset= -62 (166) */
/* 230 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 232 */	0x0,		/* 0 */
			0xcb, 0xff,	/* Offset= -53 (180) */
			0x5b,		/* FC_END */
/* 236 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 238 */	0x8, 0x0,	/* 8 */
/* 240 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 244 */	0x4, 0x0,	/* 4 */
/* 246 */	0x4, 0x0,	/* 4 */
/* 248 */	0x12, 0x0,	/* FC_UP */
/* 250 */	0xd2, 0xff,	/* Offset= -46 (204) */
/* 252 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 258 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x11, 0x0,	/* FC_RP */
/* 262 */	0x86, 0xff,	/* Offset= -122 (140) */
/* 264 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 266 */	0x2, 0x0,	/* Offset= 2 (268) */
/* 268 */	
			0x12, 0x0,	/* FC_UP */
/* 270 */	0x2, 0x0,	/* Offset= 2 (272) */
/* 272 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 274 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 276 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 278 */	0x2, 0x0,	/* Offset= 2 (280) */
/* 280 */	0x54, 0x0,	/* 84 */
/* 282 */	0xc, 0x70,	/* 28684 */
/* 284 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 288 */	0x4e, 0x0,	/* Offset= 78 (366) */
/* 290 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 294 */	0x82, 0x0,	/* Offset= 130 (424) */
/* 296 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 300 */	0xbe, 0x0,	/* Offset= 190 (490) */
/* 302 */	0x4, 0x0, 0x0, 0x0,	/* 4 */
/* 306 */	0x22, 0xff,	/* Offset= -222 (84) */
/* 308 */	0x5, 0x0, 0x0, 0x0,	/* 5 */
/* 312 */	0x1c, 0xff,	/* Offset= -228 (84) */
/* 314 */	0x7, 0x0, 0x0, 0x0,	/* 7 */
/* 318 */	0xb6, 0x0,	/* Offset= 182 (500) */
/* 320 */	0x6, 0x0, 0x0, 0x0,	/* 6 */
/* 324 */	0x10, 0xff,	/* Offset= -240 (84) */
/* 326 */	0x8, 0x0, 0x0, 0x0,	/* 8 */
/* 330 */	0xb4, 0x0,	/* Offset= 180 (510) */
/* 332 */	0x9, 0x0, 0x0, 0x0,	/* 9 */
/* 336 */	0xa4, 0x0,	/* Offset= 164 (500) */
/* 338 */	0xb, 0x0, 0x0, 0x0,	/* 11 */
/* 342 */	0xbc, 0x0,	/* Offset= 188 (530) */
/* 344 */	0xc, 0x0, 0x0, 0x0,	/* 12 */
/* 348 */	0xce, 0x0,	/* Offset= 206 (554) */
/* 350 */	0xd, 0x0, 0x0, 0x0,	/* 13 */
/* 354 */	0xdc, 0x0,	/* Offset= 220 (574) */
/* 356 */	0xff, 0xff,	/* Offset= -1 (355) */
/* 358 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 360 */	0x8, 0x0,	/* 8 */
/* 362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 364 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 366 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 368 */	0x18, 0x0,	/* 24 */
/* 370 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 372 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 374 */	0x0,		/* 0 */
			0xef, 0xff,	/* Offset= -17 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 378 */	0x0,		/* 0 */
			0xeb, 0xff,	/* Offset= -21 (358) */
			0x5b,		/* FC_END */
/* 382 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 384 */	0x2, 0x0,	/* 2 */
/* 386 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 388 */	0xa, 0x0,	/* 10 */
/* 390 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 392 */	0x8, 0x0,	/* 8 */
/* 394 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 396 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 398 */	0x2, 0x0,	/* 2 */
/* 400 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 402 */	0x12, 0x0,	/* 18 */
/* 404 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 406 */	0x10, 0x0,	/* 16 */
/* 408 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 410 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 412 */	0x2, 0x0,	/* 2 */
/* 414 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 416 */	0x1a, 0x0,	/* 26 */
/* 418 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 420 */	0x18, 0x0,	/* 24 */
/* 422 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 424 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 426 */	0x40, 0x0,	/* 64 */
/* 428 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 430 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 432 */	0xc, 0x0,	/* 12 */
/* 434 */	0xc, 0x0,	/* 12 */
/* 436 */	0x12, 0x0,	/* FC_UP */
/* 438 */	0xc8, 0xff,	/* Offset= -56 (382) */
/* 440 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 442 */	0x14, 0x0,	/* 20 */
/* 444 */	0x14, 0x0,	/* 20 */
/* 446 */	0x12, 0x0,	/* FC_UP */
/* 448 */	0xcc, 0xff,	/* Offset= -52 (396) */
/* 450 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 452 */	0x1c, 0x0,	/* 28 */
/* 454 */	0x1c, 0x0,	/* 28 */
/* 456 */	0x12, 0x0,	/* FC_UP */
/* 458 */	0xd0, 0xff,	/* Offset= -48 (410) */
/* 460 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 462 */	0x0,		/* 0 */
			0x97, 0xff,	/* Offset= -105 (358) */
			0x6,		/* FC_SHORT */
/* 466 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 468 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 470 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 472 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 474 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 476 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 478 */	0x0,		/* 0 */
			0x87, 0xff,	/* Offset= -121 (358) */
			0x8,		/* FC_LONG */
/* 482 */	0x8,		/* FC_LONG */
			0x2,		/* FC_CHAR */
/* 484 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 486 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 488 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 490 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 492 */	0x8, 0x0,	/* 8 */
/* 494 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 496 */	0x76, 0xff,	/* Offset= -138 (358) */
/* 498 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 500 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 502 */	0x4, 0x0,	/* 4 */
/* 504 */	0x0, 0x0,	/* 0 */
/* 506 */	0x0, 0x0,	/* Offset= 0 (506) */
/* 508 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 510 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 512 */	0x10, 0x0,	/* 16 */
/* 514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 516 */	0x62, 0xff,	/* Offset= -158 (358) */
/* 518 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 520 */	0x5e, 0xff,	/* Offset= -162 (358) */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 526 */	0x8, 0x0,	/* 8 */
/* 528 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 530 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 532 */	0x54, 0x0,	/* 84 */
/* 534 */	0x0, 0x0,	/* 0 */
/* 536 */	0x0, 0x0,	/* Offset= 0 (536) */
/* 538 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 540 */	0x8c, 0xff,	/* Offset= -116 (424) */
/* 542 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 544 */	0xec, 0xff,	/* Offset= -20 (524) */
/* 546 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 548 */	0xe8, 0xff,	/* Offset= -24 (524) */
/* 550 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 556 */	0x18, 0x0,	/* 24 */
/* 558 */	0x0, 0x0,	/* 0 */
/* 560 */	0x0, 0x0,	/* Offset= 0 (560) */
/* 562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 564 */	0xd8, 0xff,	/* Offset= -40 (524) */
/* 566 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 568 */	0xd4, 0xff,	/* Offset= -44 (524) */
/* 570 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 574 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 576 */	0x18, 0x0,	/* 24 */
/* 578 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 580 */	0x22, 0xff,	/* Offset= -222 (358) */
/* 582 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 584 */	0x1e, 0xff,	/* Offset= -226 (358) */
/* 586 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 588 */	0x1a, 0xff,	/* Offset= -230 (358) */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x11, 0x0,	/* FC_RP */
/* 594 */	0x2, 0x0,	/* Offset= 2 (596) */
/* 596 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 598 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 600 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 602 */	0xbe, 0xfe,	/* Offset= -322 (280) */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	0x36, 0x0,	/* Offset= 54 (660) */
/* 608 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 610 */	0x4, 0x0,	/* 4 */
/* 612 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 614 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 616 */	0x0, 0x0,	/* 0 */
/* 618 */	0x0, 0x0,	/* 0 */
/* 620 */	0x12, 0x0,	/* FC_UP */
/* 622 */	0x1e, 0xfe,	/* Offset= -482 (140) */
/* 624 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 626 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 628 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 630 */	0x4, 0x0,	/* 4 */
/* 632 */	0x18,		/* 24 */
			0x0,		/*  */
/* 634 */	0x0, 0x0,	/* 0 */
/* 636 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 638 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 640 */	0x4, 0x0,	/* 4 */
/* 642 */	0x0, 0x0,	/* 0 */
/* 644 */	0x1, 0x0,	/* 1 */
/* 646 */	0x0, 0x0,	/* 0 */
/* 648 */	0x0, 0x0,	/* 0 */
/* 650 */	0x12, 0x0,	/* FC_UP */
/* 652 */	0x0, 0xfe,	/* Offset= -512 (140) */
/* 654 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 656 */	0x0,		/* 0 */
			0xcf, 0xff,	/* Offset= -49 (608) */
			0x5b,		/* FC_END */
/* 660 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 662 */	0x8, 0x0,	/* 8 */
/* 664 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 668 */	0x4, 0x0,	/* 4 */
/* 670 */	0x4, 0x0,	/* 4 */
/* 672 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 674 */	0xd2, 0xff,	/* Offset= -46 (628) */
/* 676 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 678 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 680 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 682 */	0xc, 0x0,	/* Offset= 12 (694) */
/* 684 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 686 */	0x4, 0x0,	/* 4 */
/* 688 */	0x18,		/* 24 */
			0x0,		/*  */
/* 690 */	0x0, 0x0,	/* 0 */
/* 692 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 694 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 696 */	0x8, 0x0,	/* 8 */
/* 698 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 700 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 702 */	0x4, 0x0,	/* 4 */
/* 704 */	0x4, 0x0,	/* 4 */
/* 706 */	0x12, 0x0,	/* FC_UP */
/* 708 */	0xe8, 0xff,	/* Offset= -24 (684) */
/* 710 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 712 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 714 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 716 */	0x8, 0x0,	/* 8 */
/* 718 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 720 */	0xe8, 0x3,	/* 1000 */
/* 722 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 724 */	0x0, 0x0,	/* 0 */
/* 726 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 728 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 730 */	0x8, 0x0,	/* 8 */
/* 732 */	0x0, 0x0,	/* 0 */
/* 734 */	0x1, 0x0,	/* 1 */
/* 736 */	0x4, 0x0,	/* 4 */
/* 738 */	0x4, 0x0,	/* 4 */
/* 740 */	0x12, 0x0,	/* FC_UP */
/* 742 */	0x60, 0xfd,	/* Offset= -672 (70) */
/* 744 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 746 */	0x0,		/* 0 */
			0x69, 0xfd,	/* Offset= -663 (84) */
			0x5b,		/* FC_END */
/* 750 */	
			0x11, 0x0,	/* FC_RP */
/* 752 */	0x2, 0x0,	/* Offset= 2 (754) */
/* 754 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 756 */	0x4, 0x0,	/* 4 */
/* 758 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 760 */	0xe8, 0x3,	/* 1000 */
/* 762 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 764 */	0x0, 0x0,	/* 0 */
/* 766 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 768 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 770 */	0x22, 0x0,	/* Offset= 34 (804) */
/* 772 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 774 */	0x8, 0x0,	/* 8 */
/* 776 */	0x18,		/* 24 */
			0x0,		/*  */
/* 778 */	0x0, 0x0,	/* 0 */
/* 780 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 782 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 784 */	0x8, 0x0,	/* 8 */
/* 786 */	0x0, 0x0,	/* 0 */
/* 788 */	0x1, 0x0,	/* 1 */
/* 790 */	0x4, 0x0,	/* 4 */
/* 792 */	0x4, 0x0,	/* 4 */
/* 794 */	0x12, 0x0,	/* FC_UP */
/* 796 */	0x2a, 0xfd,	/* Offset= -726 (70) */
/* 798 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 800 */	0x0,		/* 0 */
			0x33, 0xfd,	/* Offset= -717 (84) */
			0x5b,		/* FC_END */
/* 804 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 806 */	0x8, 0x0,	/* 8 */
/* 808 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	0x4, 0x0,	/* 4 */
/* 814 */	0x4, 0x0,	/* 4 */
/* 816 */	0x12, 0x0,	/* FC_UP */
/* 818 */	0xd2, 0xff,	/* Offset= -46 (772) */
/* 820 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 822 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 824 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 826 */	0x2, 0x0,	/* Offset= 2 (828) */
/* 828 */	
			0x12, 0x0,	/* FC_UP */
/* 830 */	0x2, 0x0,	/* Offset= 2 (832) */
/* 832 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 834 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 836 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 838 */	0x2, 0x0,	/* Offset= 2 (840) */
/* 840 */	0x18, 0x0,	/* 24 */
/* 842 */	0x4, 0x30,	/* 12292 */
/* 844 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 848 */	0x16, 0x0,	/* Offset= 22 (870) */
/* 850 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 854 */	0xfe, 0xfc,	/* Offset= -770 (84) */
/* 856 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 860 */	0x30, 0x0,	/* Offset= 48 (908) */
/* 862 */	0x4, 0x0, 0x0, 0x0,	/* 4 */
/* 866 */	0xf2, 0xfc,	/* Offset= -782 (84) */
/* 868 */	0xff, 0xff,	/* Offset= -1 (867) */
/* 870 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 872 */	0x18, 0x0,	/* 24 */
/* 874 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 876 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 878 */	0x4, 0x0,	/* 4 */
/* 880 */	0x4, 0x0,	/* 4 */
/* 882 */	0x12, 0x0,	/* FC_UP */
/* 884 */	0xd2, 0xfc,	/* Offset= -814 (70) */
/* 886 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 888 */	0x14, 0x0,	/* 20 */
/* 890 */	0x14, 0x0,	/* 20 */
/* 892 */	0x12, 0x0,	/* FC_UP */
/* 894 */	0xe, 0xfe,	/* Offset= -498 (396) */
/* 896 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 898 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 900 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 902 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 904 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 906 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 908 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 910 */	0x4, 0x0,	/* 4 */
/* 912 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 914 */	
			0x11, 0x0,	/* FC_RP */
/* 916 */	0x2, 0x0,	/* Offset= 2 (918) */
/* 918 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 920 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 922 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 924 */	0xac, 0xff,	/* Offset= -84 (840) */
/* 926 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 928 */	0x2, 0x0,	/* Offset= 2 (930) */
/* 930 */	
			0x12, 0x0,	/* FC_UP */
/* 932 */	0x2, 0x0,	/* Offset= 2 (934) */
/* 934 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 936 */	0xc, 0x0,	/* 12 */
/* 938 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 942 */	0x4, 0x0,	/* 4 */
/* 944 */	0x4, 0x0,	/* 4 */
/* 946 */	0x12, 0x0,	/* FC_UP */
/* 948 */	0xf8, 0xfe,	/* Offset= -264 (684) */
/* 950 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 952 */	0x8, 0x0,	/* 8 */
/* 954 */	0x8, 0x0,	/* 8 */
/* 956 */	0x12, 0x0,	/* FC_UP */
/* 958 */	0xee, 0xfe,	/* Offset= -274 (684) */
/* 960 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 962 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 966 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 968 */	0x2, 0x0,	/* Offset= 2 (970) */
/* 970 */	
			0x12, 0x0,	/* FC_UP */
/* 972 */	0x2, 0x0,	/* Offset= 2 (974) */
/* 974 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 976 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 978 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 980 */	0x2, 0x0,	/* Offset= 2 (982) */
/* 982 */	0x14, 0x0,	/* 20 */
/* 984 */	0x3, 0x30,	/* 12291 */
/* 986 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 990 */	0x1e, 0x0,	/* Offset= 30 (1020) */
/* 992 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 996 */	0x70, 0xfc,	/* Offset= -912 (84) */
/* 998 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 1002 */	0x6a, 0xfc,	/* Offset= -918 (84) */
/* 1004 */	0xff, 0xff,	/* Offset= -1 (1003) */
/* 1006 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1008 */	0x2, 0x0,	/* 2 */
/* 1010 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1012 */	0xe, 0x0,	/* 14 */
/* 1014 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1016 */	0xc, 0x0,	/* 12 */
/* 1018 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1020 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1022 */	0x14, 0x0,	/* 20 */
/* 1024 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1026 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1028 */	0x4, 0x0,	/* 4 */
/* 1030 */	0x4, 0x0,	/* 4 */
/* 1032 */	0x12, 0x0,	/* FC_UP */
/* 1034 */	0x3c, 0xfc,	/* Offset= -964 (70) */
/* 1036 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1038 */	0x10, 0x0,	/* 16 */
/* 1040 */	0x10, 0x0,	/* 16 */
/* 1042 */	0x12, 0x0,	/* FC_UP */
/* 1044 */	0xda, 0xff,	/* Offset= -38 (1006) */
/* 1046 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1048 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1050 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1052 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1054 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1056 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1058 */	
			0x11, 0x0,	/* FC_RP */
/* 1060 */	0x2, 0x0,	/* Offset= 2 (1062) */
/* 1062 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1064 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1066 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1068 */	0xaa, 0xff,	/* Offset= -86 (982) */
/* 1070 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1072 */	0x64, 0xfe,	/* Offset= -412 (660) */
/* 1074 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1076 */	0x2, 0x0,	/* Offset= 2 (1078) */
/* 1078 */	
			0x12, 0x0,	/* FC_UP */
/* 1080 */	0x2, 0x0,	/* Offset= 2 (1082) */
/* 1082 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1084 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1086 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 1088 */	0x2, 0x0,	/* Offset= 2 (1090) */
/* 1090 */	0xcc, 0x0,	/* 204 */
/* 1092 */	0x15, 0x70,	/* 28693 */
/* 1094 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 1098 */	0x98, 0x0,	/* Offset= 152 (1250) */
/* 1100 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 1104 */	0xd4, 0x0,	/* Offset= 212 (1316) */
/* 1106 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 1110 */	0x3a, 0x1,	/* Offset= 314 (1424) */
/* 1112 */	0x4, 0x0, 0x0, 0x0,	/* 4 */
/* 1116 */	0xd4, 0x1,	/* Offset= 468 (1584) */
/* 1118 */	0x5, 0x0, 0x0, 0x0,	/* 5 */
/* 1122 */	0x0, 0x2,	/* Offset= 512 (1634) */
/* 1124 */	0x6, 0x0, 0x0, 0x0,	/* 6 */
/* 1128 */	0x96, 0x2,	/* Offset= 662 (1790) */
/* 1130 */	0x7, 0x0, 0x0, 0x0,	/* 7 */
/* 1134 */	0xe6, 0xfb,	/* Offset= -1050 (84) */
/* 1136 */	0x8, 0x0, 0x0, 0x0,	/* 8 */
/* 1140 */	0xe0, 0xfb,	/* Offset= -1056 (84) */
/* 1142 */	0x9, 0x0, 0x0, 0x0,	/* 9 */
/* 1146 */	0x12, 0xff,	/* Offset= -238 (908) */
/* 1148 */	0xa, 0x0, 0x0, 0x0,	/* 10 */
/* 1152 */	0x7e, 0x2,	/* Offset= 638 (1790) */
/* 1154 */	0xb, 0x0, 0x0, 0x0,	/* 11 */
/* 1158 */	0xce, 0xfb,	/* Offset= -1074 (84) */
/* 1160 */	0xc, 0x0, 0x0, 0x0,	/* 12 */
/* 1164 */	0xc8, 0xfb,	/* Offset= -1080 (84) */
/* 1166 */	0xd, 0x0, 0x0, 0x0,	/* 13 */
/* 1170 */	0xc2, 0xfb,	/* Offset= -1086 (84) */
/* 1172 */	0xe, 0x0, 0x0, 0x0,	/* 14 */
/* 1176 */	0xbc, 0xfb,	/* Offset= -1092 (84) */
/* 1178 */	0x10, 0x0, 0x0, 0x0,	/* 16 */
/* 1182 */	0xee, 0xfe,	/* Offset= -274 (908) */
/* 1184 */	0x11, 0x0, 0x0, 0x0,	/* 17 */
/* 1188 */	0x46, 0xfd,	/* Offset= -698 (490) */
/* 1190 */	0x12, 0x0, 0x0, 0x0,	/* 18 */
/* 1194 */	0x9c, 0x2,	/* Offset= 668 (1862) */
/* 1196 */	0x13, 0x0, 0x0, 0x0,	/* 19 */
/* 1200 */	0xa6, 0x2,	/* Offset= 678 (1878) */
/* 1202 */	0x14, 0x0, 0x0, 0x0,	/* 20 */
/* 1206 */	0x9e, 0xfb,	/* Offset= -1122 (84) */
/* 1208 */	0x15, 0x0, 0x0, 0x0,	/* 21 */
/* 1212 */	0x4e, 0x3,	/* Offset= 846 (2058) */
/* 1214 */	0x16, 0x0, 0x0, 0x0,	/* 22 */
/* 1218 */	0x44, 0x4,	/* Offset= 1092 (2310) */
/* 1220 */	0xff, 0xff,	/* Offset= -1 (1219) */
/* 1222 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1224 */	0x2, 0x0,	/* 2 */
/* 1226 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1228 */	0x16, 0x0,	/* 22 */
/* 1230 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1232 */	0x14, 0x0,	/* 20 */
/* 1234 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1236 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1238 */	0x2, 0x0,	/* 2 */
/* 1240 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1242 */	0x1e, 0x0,	/* 30 */
/* 1244 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1246 */	0x1c, 0x0,	/* 28 */
/* 1248 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1252 */	0x24, 0x0,	/* 36 */
/* 1254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1258 */	0x4, 0x0,	/* 4 */
/* 1260 */	0x4, 0x0,	/* 4 */
/* 1262 */	0x12, 0x0,	/* FC_UP */
/* 1264 */	0x56, 0xfb,	/* Offset= -1194 (70) */
/* 1266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1268 */	0xc, 0x0,	/* 12 */
/* 1270 */	0xc, 0x0,	/* 12 */
/* 1272 */	0x12, 0x0,	/* FC_UP */
/* 1274 */	0x84, 0xfc,	/* Offset= -892 (382) */
/* 1276 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1278 */	0x18, 0x0,	/* 24 */
/* 1280 */	0x18, 0x0,	/* 24 */
/* 1282 */	0x12, 0x0,	/* FC_UP */
/* 1284 */	0xc2, 0xff,	/* Offset= -62 (1222) */
/* 1286 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1288 */	0x20, 0x0,	/* 32 */
/* 1290 */	0x20, 0x0,	/* 32 */
/* 1292 */	0x12, 0x0,	/* FC_UP */
/* 1294 */	0xc6, 0xff,	/* Offset= -58 (1236) */
/* 1296 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1298 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1300 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1302 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1306 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1308 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1310 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1312 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1314 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1316 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1318 */	0x14, 0x0,	/* 20 */
/* 1320 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1324 */	0x4, 0x0,	/* 4 */
/* 1326 */	0x4, 0x0,	/* 4 */
/* 1328 */	0x12, 0x0,	/* FC_UP */
/* 1330 */	0x14, 0xfb,	/* Offset= -1260 (70) */
/* 1332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1334 */	0xc, 0x0,	/* 12 */
/* 1336 */	0xc, 0x0,	/* 12 */
/* 1338 */	0x12, 0x0,	/* FC_UP */
/* 1340 */	0x42, 0xfc,	/* Offset= -958 (382) */
/* 1342 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1344 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1346 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1348 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1350 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1352 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1354 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1356 */	0x2, 0x0,	/* 2 */
/* 1358 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1360 */	0x22, 0x0,	/* 34 */
/* 1362 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1364 */	0x20, 0x0,	/* 32 */
/* 1366 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1368 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1370 */	0x2, 0x0,	/* 2 */
/* 1372 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1374 */	0x2a, 0x0,	/* 42 */
/* 1376 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1378 */	0x28, 0x0,	/* 40 */
/* 1380 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1382 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1384 */	0x2, 0x0,	/* 2 */
/* 1386 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1388 */	0x32, 0x0,	/* 50 */
/* 1390 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1392 */	0x30, 0x0,	/* 48 */
/* 1394 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1396 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1398 */	0x2, 0x0,	/* 2 */
/* 1400 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1402 */	0x3a, 0x0,	/* 58 */
/* 1404 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1406 */	0x38, 0x0,	/* 56 */
/* 1408 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1410 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1412 */	0x1, 0x0,	/* 1 */
/* 1414 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1416 */	0xec, 0x4,	/* 1260 */
/* 1418 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1420 */	0x0, 0x0,	/* 0 */
/* 1422 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1424 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1426 */	0x78, 0x0,	/* 120 */
/* 1428 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1430 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1432 */	0x4, 0x0,	/* 4 */
/* 1434 */	0x4, 0x0,	/* 4 */
/* 1436 */	0x12, 0x0,	/* FC_UP */
/* 1438 */	0xa8, 0xfa,	/* Offset= -1368 (70) */
/* 1440 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1442 */	0xc, 0x0,	/* 12 */
/* 1444 */	0xc, 0x0,	/* 12 */
/* 1446 */	0x12, 0x0,	/* FC_UP */
/* 1448 */	0xd6, 0xfb,	/* Offset= -1066 (382) */
/* 1450 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1452 */	0x1c, 0x0,	/* 28 */
/* 1454 */	0x1c, 0x0,	/* 28 */
/* 1456 */	0x12, 0x0,	/* FC_UP */
/* 1458 */	0xe8, 0xfb,	/* Offset= -1048 (410) */
/* 1460 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1462 */	0x24, 0x0,	/* 36 */
/* 1464 */	0x24, 0x0,	/* 36 */
/* 1466 */	0x12, 0x0,	/* FC_UP */
/* 1468 */	0x8e, 0xff,	/* Offset= -114 (1354) */
/* 1470 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1472 */	0x2c, 0x0,	/* 44 */
/* 1474 */	0x2c, 0x0,	/* 44 */
/* 1476 */	0x12, 0x0,	/* FC_UP */
/* 1478 */	0x92, 0xff,	/* Offset= -110 (1368) */
/* 1480 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1482 */	0x34, 0x0,	/* 52 */
/* 1484 */	0x34, 0x0,	/* 52 */
/* 1486 */	0x12, 0x0,	/* FC_UP */
/* 1488 */	0x96, 0xff,	/* Offset= -106 (1382) */
/* 1490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1492 */	0x3c, 0x0,	/* 60 */
/* 1494 */	0x3c, 0x0,	/* 60 */
/* 1496 */	0x12, 0x0,	/* FC_UP */
/* 1498 */	0x9a, 0xff,	/* Offset= -102 (1396) */
/* 1500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1502 */	0x6c, 0x0,	/* 108 */
/* 1504 */	0x6c, 0x0,	/* 108 */
/* 1506 */	0x12, 0x0,	/* FC_UP */
/* 1508 */	0x9e, 0xff,	/* Offset= -98 (1410) */
/* 1510 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1512 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1514 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1516 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1520 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1522 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1524 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1526 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1528 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1530 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1532 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1534 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1536 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1538 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1540 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1542 */	0x0,		/* 0 */
			0x5f, 0xfb,	/* Offset= -1185 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1546 */	0x0,		/* 0 */
			0x5b, 0xfb,	/* Offset= -1189 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1550 */	0x0,		/* 0 */
			0x57, 0xfb,	/* Offset= -1193 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1554 */	0x0,		/* 0 */
			0x53, 0xfb,	/* Offset= -1197 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1558 */	0x0,		/* 0 */
			0x4f, 0xfb,	/* Offset= -1201 (358) */
			0x6,		/* FC_SHORT */
/* 1562 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1564 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1566 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1570 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1572 */	0x1, 0x0,	/* 1 */
/* 1574 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1576 */	0xec, 0x4,	/* 1260 */
/* 1578 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1580 */	0x1, 0x0,	/* 1 */
/* 1582 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1584 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1586 */	0x8, 0x0,	/* 8 */
/* 1588 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1590 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1592 */	0x4, 0x0,	/* 4 */
/* 1594 */	0x4, 0x0,	/* 4 */
/* 1596 */	0x12, 0x0,	/* FC_UP */
/* 1598 */	0xe4, 0xff,	/* Offset= -28 (1570) */
/* 1600 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1602 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1604 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1606 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1608 */	0x2, 0x0,	/* 2 */
/* 1610 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1612 */	0x42, 0x0,	/* 66 */
/* 1614 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1616 */	0x40, 0x0,	/* 64 */
/* 1618 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1620 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1622 */	0x1, 0x0,	/* 1 */
/* 1624 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 1626 */	0xec, 0x4,	/* 1260 */
/* 1628 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1630 */	0x2, 0x0,	/* 2 */
/* 1632 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1634 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1636 */	0x78, 0x0,	/* 120 */
/* 1638 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1640 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1642 */	0x4, 0x0,	/* 4 */
/* 1644 */	0x4, 0x0,	/* 4 */
/* 1646 */	0x12, 0x0,	/* FC_UP */
/* 1648 */	0xd6, 0xf9,	/* Offset= -1578 (70) */
/* 1650 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1652 */	0xc, 0x0,	/* 12 */
/* 1654 */	0xc, 0x0,	/* 12 */
/* 1656 */	0x12, 0x0,	/* FC_UP */
/* 1658 */	0x4, 0xfb,	/* Offset= -1276 (382) */
/* 1660 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1662 */	0x1c, 0x0,	/* 28 */
/* 1664 */	0x1c, 0x0,	/* 28 */
/* 1666 */	0x12, 0x0,	/* FC_UP */
/* 1668 */	0x16, 0xfb,	/* Offset= -1258 (410) */
/* 1670 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1672 */	0x24, 0x0,	/* 36 */
/* 1674 */	0x24, 0x0,	/* 36 */
/* 1676 */	0x12, 0x0,	/* FC_UP */
/* 1678 */	0xbc, 0xfe,	/* Offset= -324 (1354) */
/* 1680 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1682 */	0x2c, 0x0,	/* 44 */
/* 1684 */	0x2c, 0x0,	/* 44 */
/* 1686 */	0x12, 0x0,	/* FC_UP */
/* 1688 */	0xc0, 0xfe,	/* Offset= -320 (1368) */
/* 1690 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1692 */	0x34, 0x0,	/* 52 */
/* 1694 */	0x34, 0x0,	/* 52 */
/* 1696 */	0x12, 0x0,	/* FC_UP */
/* 1698 */	0xc4, 0xfe,	/* Offset= -316 (1382) */
/* 1700 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1702 */	0x3c, 0x0,	/* 60 */
/* 1704 */	0x3c, 0x0,	/* 60 */
/* 1706 */	0x12, 0x0,	/* FC_UP */
/* 1708 */	0xc8, 0xfe,	/* Offset= -312 (1396) */
/* 1710 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1712 */	0x44, 0x0,	/* 68 */
/* 1714 */	0x44, 0x0,	/* 68 */
/* 1716 */	0x12, 0x0,	/* FC_UP */
/* 1718 */	0x90, 0xff,	/* Offset= -112 (1606) */
/* 1720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1722 */	0x5c, 0x0,	/* 92 */
/* 1724 */	0x5c, 0x0,	/* 92 */
/* 1726 */	0x12, 0x0,	/* FC_UP */
/* 1728 */	0x94, 0xff,	/* Offset= -108 (1620) */
/* 1730 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1732 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1734 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1736 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1740 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1742 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1744 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1746 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1748 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1750 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1752 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1754 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1756 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1758 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1760 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1762 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1764 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1766 */	0x0,		/* 0 */
			0x7f, 0xfa,	/* Offset= -1409 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1770 */	0x0,		/* 0 */
			0x7b, 0xfa,	/* Offset= -1413 (358) */
			0x6,		/* FC_SHORT */
/* 1774 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1776 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1778 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1780 */	0x72, 0xfa,	/* Offset= -1422 (358) */
/* 1782 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1784 */	0x6e, 0xfa,	/* Offset= -1426 (358) */
/* 1786 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1788 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1790 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1792 */	0x10, 0x0,	/* 16 */
/* 1794 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1796 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1798 */	0x4, 0x0,	/* 4 */
/* 1800 */	0x4, 0x0,	/* 4 */
/* 1802 */	0x12, 0x0,	/* FC_UP */
/* 1804 */	0x3a, 0xf9,	/* Offset= -1734 (70) */
/* 1806 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1808 */	0xc, 0x0,	/* 12 */
/* 1810 */	0xc, 0x0,	/* 12 */
/* 1812 */	0x12, 0x0,	/* FC_UP */
/* 1814 */	0x68, 0xfa,	/* Offset= -1432 (382) */
/* 1816 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1818 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1820 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1822 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1824 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1826 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1828 */	0x8, 0x0,	/* 8 */
/* 1830 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1832 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1834 */	0x8, 0x0,	/* 8 */
/* 1836 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1838 */	0xf4, 0xff,	/* Offset= -12 (1826) */
/* 1840 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1842 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1844 */	0x10, 0x0,	/* 16 */
/* 1846 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1848 */	0xf0, 0xff,	/* Offset= -16 (1832) */
/* 1850 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1852 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1854 */	0x10, 0x0,	/* 16 */
/* 1856 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1858 */	0xf0, 0xff,	/* Offset= -16 (1842) */
/* 1860 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1862 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1864 */	0x23, 0x0,	/* 35 */
/* 1866 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1868 */	0xf0, 0xff,	/* Offset= -16 (1852) */
/* 1870 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1872 */	0xec, 0xff,	/* Offset= -20 (1852) */
/* 1874 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 1876 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1878 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1880 */	0x18, 0x0,	/* 24 */
/* 1882 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1884 */	0x0,		/* 0 */
			0x9, 0xfa,	/* Offset= -1527 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1888 */	0x0,		/* 0 */
			0x5, 0xfa,	/* Offset= -1531 (358) */
			0x6,		/* FC_SHORT */
/* 1892 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1894 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1896 */	0x2, 0x0,	/* 2 */
/* 1898 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1900 */	0x4a, 0x0,	/* 74 */
/* 1902 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1904 */	0x48, 0x0,	/* 72 */
/* 1906 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1908 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1910 */	0x2, 0x0,	/* 2 */
/* 1912 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1914 */	0x52, 0x0,	/* 82 */
/* 1916 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1918 */	0x50, 0x0,	/* 80 */
/* 1920 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1922 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1924 */	0x2, 0x0,	/* 2 */
/* 1926 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1928 */	0x5a, 0x0,	/* 90 */
/* 1930 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1932 */	0x58, 0x0,	/* 88 */
/* 1934 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1936 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1938 */	0x2, 0x0,	/* 2 */
/* 1940 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1942 */	0x62, 0x0,	/* 98 */
/* 1944 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1946 */	0x60, 0x0,	/* 96 */
/* 1948 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1950 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1952 */	0x2, 0x0,	/* 2 */
/* 1954 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1956 */	0x6a, 0x0,	/* 106 */
/* 1958 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1960 */	0x68, 0x0,	/* 104 */
/* 1962 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1964 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1966 */	0x2, 0x0,	/* 2 */
/* 1968 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1970 */	0x72, 0x0,	/* 114 */
/* 1972 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1974 */	0x70, 0x0,	/* 112 */
/* 1976 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1978 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1980 */	0x2, 0x0,	/* 2 */
/* 1982 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1984 */	0x7a, 0x0,	/* 122 */
/* 1986 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1988 */	0x78, 0x0,	/* 120 */
/* 1990 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1992 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 1994 */	0x2, 0x0,	/* 2 */
/* 1996 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 1998 */	0x82, 0x0,	/* 130 */
/* 2000 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2002 */	0x80, 0x0,	/* 128 */
/* 2004 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2006 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2008 */	0x2, 0x0,	/* 2 */
/* 2010 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2012 */	0x8a, 0x0,	/* 138 */
/* 2014 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2016 */	0x88, 0x0,	/* 136 */
/* 2018 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2020 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2022 */	0x2, 0x0,	/* 2 */
/* 2024 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2026 */	0x92, 0x0,	/* 146 */
/* 2028 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 2030 */	0x90, 0x0,	/* 144 */
/* 2032 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2034 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2036 */	0x1, 0x0,	/* 1 */
/* 2038 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2040 */	0x98, 0x0,	/* 152 */
/* 2042 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2044 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 2046 */	0x1, 0x0,	/* 1 */
/* 2048 */	0x40,		/* 64 */
			0x0,		/* 0 */
/* 2050 */	0xec, 0x4,	/* 1260 */
/* 2052 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 2054 */	0x3, 0x0,	/* 3 */
/* 2056 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2058 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2060 */	0xc4, 0x0,	/* 196 */
/* 2062 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2064 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2066 */	0x34, 0x0,	/* 52 */
/* 2068 */	0x34, 0x0,	/* 52 */
/* 2070 */	0x12, 0x0,	/* FC_UP */
/* 2072 */	0x4e, 0xfd,	/* Offset= -690 (1382) */
/* 2074 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2076 */	0x3c, 0x0,	/* 60 */
/* 2078 */	0x3c, 0x0,	/* 60 */
/* 2080 */	0x12, 0x0,	/* FC_UP */
/* 2082 */	0x52, 0xfd,	/* Offset= -686 (1396) */
/* 2084 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2086 */	0x44, 0x0,	/* 68 */
/* 2088 */	0x44, 0x0,	/* 68 */
/* 2090 */	0x12, 0x0,	/* FC_UP */
/* 2092 */	0x1a, 0xfe,	/* Offset= -486 (1606) */
/* 2094 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2096 */	0x4c, 0x0,	/* 76 */
/* 2098 */	0x4c, 0x0,	/* 76 */
/* 2100 */	0x12, 0x0,	/* FC_UP */
/* 2102 */	0x30, 0xff,	/* Offset= -208 (1894) */
/* 2104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2106 */	0x54, 0x0,	/* 84 */
/* 2108 */	0x54, 0x0,	/* 84 */
/* 2110 */	0x12, 0x0,	/* FC_UP */
/* 2112 */	0x34, 0xff,	/* Offset= -204 (1908) */
/* 2114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2116 */	0x5c, 0x0,	/* 92 */
/* 2118 */	0x5c, 0x0,	/* 92 */
/* 2120 */	0x12, 0x0,	/* FC_UP */
/* 2122 */	0x38, 0xff,	/* Offset= -200 (1922) */
/* 2124 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2126 */	0x64, 0x0,	/* 100 */
/* 2128 */	0x64, 0x0,	/* 100 */
/* 2130 */	0x12, 0x0,	/* FC_UP */
/* 2132 */	0x3c, 0xff,	/* Offset= -196 (1936) */
/* 2134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2136 */	0x6c, 0x0,	/* 108 */
/* 2138 */	0x6c, 0x0,	/* 108 */
/* 2140 */	0x12, 0x0,	/* FC_UP */
/* 2142 */	0x40, 0xff,	/* Offset= -192 (1950) */
/* 2144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2146 */	0x74, 0x0,	/* 116 */
/* 2148 */	0x74, 0x0,	/* 116 */
/* 2150 */	0x12, 0x0,	/* FC_UP */
/* 2152 */	0x44, 0xff,	/* Offset= -188 (1964) */
/* 2154 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2156 */	0x7c, 0x0,	/* 124 */
/* 2158 */	0x7c, 0x0,	/* 124 */
/* 2160 */	0x12, 0x0,	/* FC_UP */
/* 2162 */	0x48, 0xff,	/* Offset= -184 (1978) */
/* 2164 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2166 */	0x84, 0x0,	/* 132 */
/* 2168 */	0x84, 0x0,	/* 132 */
/* 2170 */	0x12, 0x0,	/* FC_UP */
/* 2172 */	0x4c, 0xff,	/* Offset= -180 (1992) */
/* 2174 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2176 */	0x8c, 0x0,	/* 140 */
/* 2178 */	0x8c, 0x0,	/* 140 */
/* 2180 */	0x12, 0x0,	/* FC_UP */
/* 2182 */	0x50, 0xff,	/* Offset= -176 (2006) */
/* 2184 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2186 */	0x94, 0x0,	/* 148 */
/* 2188 */	0x94, 0x0,	/* 148 */
/* 2190 */	0x12, 0x0,	/* FC_UP */
/* 2192 */	0x54, 0xff,	/* Offset= -172 (2020) */
/* 2194 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2196 */	0x9c, 0x0,	/* 156 */
/* 2198 */	0x9c, 0x0,	/* 156 */
/* 2200 */	0x12, 0x0,	/* FC_UP */
/* 2202 */	0x58, 0xff,	/* Offset= -168 (2034) */
/* 2204 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2206 */	0xb4, 0x0,	/* 180 */
/* 2208 */	0xb4, 0x0,	/* 180 */
/* 2210 */	0x12, 0x0,	/* FC_UP */
/* 2212 */	0x58, 0xff,	/* Offset= -168 (2044) */
/* 2214 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2216 */	0x0,		/* 0 */
			0xbd, 0xf8,	/* Offset= -1859 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2220 */	0x0,		/* 0 */
			0xb9, 0xf8,	/* Offset= -1863 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2224 */	0x0,		/* 0 */
			0xb5, 0xf8,	/* Offset= -1867 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2228 */	0x0,		/* 0 */
			0xb1, 0xf8,	/* Offset= -1871 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2232 */	0x0,		/* 0 */
			0xad, 0xf8,	/* Offset= -1875 (358) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2236 */	0x0,		/* 0 */
			0xa9, 0xf8,	/* Offset= -1879 (358) */
			0x6,		/* FC_SHORT */
/* 2240 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2242 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2244 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2246 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2248 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2250 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2252 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2254 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2256 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2258 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2260 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2262 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2264 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2266 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2268 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2270 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2272 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2274 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2276 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2278 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2280 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2282 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2284 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2286 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2288 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 2290 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2292 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2294 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2296 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2298 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2300 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2302 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2304 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2306 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 2308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2310 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2312 */	0xcc, 0x0,	/* 204 */
/* 2314 */	0x0, 0x0,	/* 0 */
/* 2316 */	0x0, 0x0,	/* Offset= 0 (2316) */
/* 2318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2320 */	0xfa, 0xfe,	/* Offset= -262 (2058) */
/* 2322 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2324 */	0xf8, 0xf8,	/* Offset= -1800 (524) */
/* 2326 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2328 */	
			0x11, 0x0,	/* FC_RP */
/* 2330 */	0x2, 0x0,	/* Offset= 2 (2332) */
/* 2332 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2334 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2336 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2338 */	0x20, 0xfb,	/* Offset= -1248 (1090) */
/* 2340 */	
			0x12, 0x0,	/* FC_UP */
/* 2342 */	0x16, 0xfe,	/* Offset= -490 (1852) */
/* 2344 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 2346 */	0x2, 0x0,	/* Offset= 2 (2348) */
/* 2348 */	
			0x12, 0x0,	/* FC_UP */
/* 2350 */	0x10, 0x0,	/* Offset= 16 (2366) */
/* 2352 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2354 */	0x8, 0x0,	/* 8 */
/* 2356 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2358 */	0x0, 0x0,	/* 0 */
/* 2360 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2362 */	0x2c, 0xf8,	/* Offset= -2004 (358) */
/* 2364 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2366 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2368 */	0x8, 0x0,	/* 8 */
/* 2370 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2372 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2374 */	0x4, 0x0,	/* 4 */
/* 2376 */	0x4, 0x0,	/* 4 */
/* 2378 */	0x12, 0x0,	/* FC_UP */
/* 2380 */	0xe4, 0xff,	/* Offset= -28 (2352) */
/* 2382 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2384 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2386 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2388 */	0x2, 0x0,	/* Offset= 2 (2390) */
/* 2390 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2392 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2394 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2396 */	0x2, 0x0,	/* Offset= 2 (2398) */
/* 2398 */	0x8, 0x0,	/* 8 */
/* 2400 */	0x5, 0x30,	/* 12293 */
/* 2402 */	0x1, 0x0, 0x0, 0x0,	/* 1 */
/* 2406 */	0x82, 0x0,	/* Offset= 130 (2536) */
/* 2408 */	0x2, 0x0, 0x0, 0x0,	/* 2 */
/* 2412 */	0xe0, 0x0,	/* Offset= 224 (2636) */
/* 2414 */	0x3, 0x0, 0x0, 0x0,	/* 3 */
/* 2418 */	0xda, 0x0,	/* Offset= 218 (2636) */
/* 2420 */	0x4, 0x0, 0x0, 0x0,	/* 4 */
/* 2424 */	0x2e, 0x1,	/* Offset= 302 (2726) */
/* 2426 */	0x5, 0x0, 0x0, 0x0,	/* 5 */
/* 2430 */	0x28, 0x1,	/* Offset= 296 (2726) */
/* 2432 */	0xff, 0xff,	/* Offset= -1 (2431) */
/* 2434 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2436 */	0x24, 0x0,	/* 36 */
/* 2438 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2440 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2442 */	0x10, 0x0,	/* 16 */
/* 2444 */	0x10, 0x0,	/* 16 */
/* 2446 */	0x12, 0x0,	/* FC_UP */
/* 2448 */	0x5e, 0xfa,	/* Offset= -1442 (1006) */
/* 2450 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2452 */	0x18, 0x0,	/* 24 */
/* 2454 */	0x18, 0x0,	/* 24 */
/* 2456 */	0x12, 0x0,	/* FC_UP */
/* 2458 */	0x2c, 0xfb,	/* Offset= -1236 (1222) */
/* 2460 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2462 */	0x20, 0x0,	/* 32 */
/* 2464 */	0x20, 0x0,	/* 32 */
/* 2466 */	0x12, 0x0,	/* FC_UP */
/* 2468 */	0x30, 0xfb,	/* Offset= -1232 (1236) */
/* 2470 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2472 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2474 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2476 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2478 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2480 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2482 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2484 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2488 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2490 */	0x24, 0x0,	/* 36 */
/* 2492 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2494 */	0x0, 0x0,	/* 0 */
/* 2496 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2498 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2500 */	0x24, 0x0,	/* 36 */
/* 2502 */	0x0, 0x0,	/* 0 */
/* 2504 */	0x3, 0x0,	/* 3 */
/* 2506 */	0x10, 0x0,	/* 16 */
/* 2508 */	0x10, 0x0,	/* 16 */
/* 2510 */	0x12, 0x0,	/* FC_UP */
/* 2512 */	0x1e, 0xfa,	/* Offset= -1506 (1006) */
/* 2514 */	0x18, 0x0,	/* 24 */
/* 2516 */	0x18, 0x0,	/* 24 */
/* 2518 */	0x12, 0x0,	/* FC_UP */
/* 2520 */	0xee, 0xfa,	/* Offset= -1298 (1222) */
/* 2522 */	0x20, 0x0,	/* 32 */
/* 2524 */	0x20, 0x0,	/* 32 */
/* 2526 */	0x12, 0x0,	/* FC_UP */
/* 2528 */	0xf4, 0xfa,	/* Offset= -1292 (1236) */
/* 2530 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2532 */	0x0,		/* 0 */
			0x9d, 0xff,	/* Offset= -99 (2434) */
			0x5b,		/* FC_END */
/* 2536 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2538 */	0x8, 0x0,	/* 8 */
/* 2540 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2542 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2544 */	0x4, 0x0,	/* 4 */
/* 2546 */	0x4, 0x0,	/* 4 */
/* 2548 */	0x12, 0x0,	/* FC_UP */
/* 2550 */	0xc2, 0xff,	/* Offset= -62 (2488) */
/* 2552 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2554 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2556 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2558 */	0x1c, 0x0,	/* 28 */
/* 2560 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2562 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2564 */	0x10, 0x0,	/* 16 */
/* 2566 */	0x10, 0x0,	/* 16 */
/* 2568 */	0x12, 0x0,	/* FC_UP */
/* 2570 */	0xe4, 0xf9,	/* Offset= -1564 (1006) */
/* 2572 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2574 */	0x18, 0x0,	/* 24 */
/* 2576 */	0x18, 0x0,	/* 24 */
/* 2578 */	0x12, 0x0,	/* FC_UP */
/* 2580 */	0xb2, 0xfa,	/* Offset= -1358 (1222) */
/* 2582 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2584 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2586 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2588 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2590 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2592 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2594 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2596 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2598 */	0x1c, 0x0,	/* 28 */
/* 2600 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2602 */	0x0, 0x0,	/* 0 */
/* 2604 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2606 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2608 */	0x1c, 0x0,	/* 28 */
/* 2610 */	0x0, 0x0,	/* 0 */
/* 2612 */	0x2, 0x0,	/* 2 */
/* 2614 */	0x10, 0x0,	/* 16 */
/* 2616 */	0x10, 0x0,	/* 16 */
/* 2618 */	0x12, 0x0,	/* FC_UP */
/* 2620 */	0xb2, 0xf9,	/* Offset= -1614 (1006) */
/* 2622 */	0x18, 0x0,	/* 24 */
/* 2624 */	0x18, 0x0,	/* 24 */
/* 2626 */	0x12, 0x0,	/* FC_UP */
/* 2628 */	0x82, 0xfa,	/* Offset= -1406 (1222) */
/* 2630 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2632 */	0x0,		/* 0 */
			0xb3, 0xff,	/* Offset= -77 (2556) */
			0x5b,		/* FC_END */
/* 2636 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2638 */	0x8, 0x0,	/* 8 */
/* 2640 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2642 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2644 */	0x4, 0x0,	/* 4 */
/* 2646 */	0x4, 0x0,	/* 4 */
/* 2648 */	0x12, 0x0,	/* FC_UP */
/* 2650 */	0xca, 0xff,	/* Offset= -54 (2596) */
/* 2652 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2654 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2656 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 2658 */	0x1, 0x0,	/* 1 */
/* 2660 */	0x16,		/* 22 */
			0x0,		/*  */
/* 2662 */	0x6, 0x0,	/* 6 */
/* 2664 */	0x16,		/* 22 */
			0x0,		/*  */
/* 2666 */	0x4, 0x0,	/* 4 */
/* 2668 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2670 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2672 */	0xc, 0x0,	/* 12 */
/* 2674 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2676 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2678 */	0x8, 0x0,	/* 8 */
/* 2680 */	0x8, 0x0,	/* 8 */
/* 2682 */	0x12, 0x0,	/* FC_UP */
/* 2684 */	0xe4, 0xff,	/* Offset= -28 (2656) */
/* 2686 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2688 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2690 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2694 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2696 */	0xc, 0x0,	/* 12 */
/* 2698 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2700 */	0x0, 0x0,	/* 0 */
/* 2702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2704 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2706 */	0xc, 0x0,	/* 12 */
/* 2708 */	0x0, 0x0,	/* 0 */
/* 2710 */	0x1, 0x0,	/* 1 */
/* 2712 */	0x8, 0x0,	/* 8 */
/* 2714 */	0x8, 0x0,	/* 8 */
/* 2716 */	0x12, 0x0,	/* FC_UP */
/* 2718 */	0xc2, 0xff,	/* Offset= -62 (2656) */
/* 2720 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2722 */	0x0,		/* 0 */
			0xcb, 0xff,	/* Offset= -53 (2670) */
			0x5b,		/* FC_END */
/* 2726 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2728 */	0x8, 0x0,	/* 8 */
/* 2730 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2732 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2734 */	0x4, 0x0,	/* 4 */
/* 2736 */	0x4, 0x0,	/* 4 */
/* 2738 */	0x12, 0x0,	/* FC_UP */
/* 2740 */	0xd2, 0xff,	/* Offset= -46 (2694) */
/* 2742 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2744 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2746 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2748 */	0x2, 0x0,	/* Offset= 2 (2750) */
/* 2750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2752 */	0x6, 0x0,	/* 6 */
/* 2754 */	0x0, 0x0,	/* 0 */
/* 2756 */	0x0, 0x0,	/* Offset= 0 (2756) */
/* 2758 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 2760 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2762 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 2764 */	0x2, 0x0,	/* Offset= 2 (2766) */
/* 2766 */	
			0x12, 0x0,	/* FC_UP */
/* 2768 */	0x2, 0x0,	/* Offset= 2 (2770) */
/* 2770 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2772 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2774 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2776 */	0x40, 0xf6,	/* Offset= -2496 (280) */
/* 2778 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 2780 */	0x2, 0x0,	/* Offset= 2 (2782) */
/* 2782 */	
			0x12, 0x0,	/* FC_UP */
/* 2784 */	0x2, 0x0,	/* Offset= 2 (2786) */
/* 2786 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2788 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2790 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2792 */	0x5a, 0xf9,	/* Offset= -1702 (1090) */
/* 2794 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2796 */	0x2, 0x0,	/* Offset= 2 (2798) */
/* 2798 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2800 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2802 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2804 */	0x6a, 0xfe,	/* Offset= -406 (2398) */
/* 2806 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2808 */	0x2, 0x0,	/* Offset= 2 (2810) */
/* 2810 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2812 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2814 */	0x4, 0x0,	/* Stack offset= 4 */
#else
			0x8, 0x0,	/* Stack offset= 8 */
#endif
/* 2816 */	0x5e, 0xfe,	/* Offset= -418 (2398) */

			0x0
        }
    };
