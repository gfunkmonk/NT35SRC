
#include <string.h>
#include "elf.h"

extern const MIDL_FORMAT_STRING __MIDLFormatString;

extern const MIDL_FORMAT_STRING __MIDLProcFormatString;

extern RPC_DISPATCH_TABLE eventlog_DispatchTable;

static const RPC_SERVER_INTERFACE eventlog___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &eventlog_DispatchTable,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE eventlog_ServerIfHandle = (RPC_IF_HANDLE)& eventlog___RpcServerInterface;

extern const MIDL_STUB_DESC eventlog_StubDesc;

void __RPC_STUB
eventlog_ElfrClearELFW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    BackupFileName = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[0] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[4],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrClearELFW(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDLFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrBackupELFW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    BackupFileName = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[10] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrBackupELFW(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDLFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrCloseEL(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[20] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = ElfrCloseEL(( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
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
eventlog_ElfrDeregisterEventSource(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[20] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = ElfrDeregisterEventSource(( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
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
eventlog_ElfrNumberOfRecords(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    PULONG NumberOfRecords;
    ULONG _M6;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    NumberOfRecords = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[26] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NumberOfRecords = &_M6;
        
        _RetVal = ElfrNumberOfRecords(( IELF_HANDLE  )*NDRSContextValue(LogHandle),NumberOfRecords);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfRecords;
        
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
eventlog_ElfrOldestRecord(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    PULONG OldestRecordNumber;
    ULONG _M7;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    OldestRecordNumber = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[26] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        OldestRecordNumber = &_M7;
        
        _RetVal = ElfrOldestRecord(( IELF_HANDLE  )*NDRSContextValue(LogHandle),OldestRecordNumber);
        
        _StubMsg.BufferLength = 4U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *OldestRecordNumber;
        
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
eventlog_ElfrChangeNotify(
    PRPC_MESSAGE _pRpcMessage )
{
    RPC_CLIENT_ID ClientId;
    ULONG Event;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_ClientId;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    _p_ClientId = &ClientId;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[36] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_ClientId,
                                   (PFORMAT_STRING) &__MIDLFormatString.Format[60],
                                   (unsigned char)0 );
        
        Event = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = ElfrChangeNotify(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           ClientId,
                           Event);
        
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
eventlog_ElfrOpenELW(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_UNICODE_STRING ModuleName;
    PRPC_UNICODE_STRING RegModuleName;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenELW(
                      UNCServerName,
                      ModuleName,
                      RegModuleName,
                      MajorVersion,
                      MinorVersion,
                      ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDLFormatString.Format[44] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDLFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrRegisterEventSourceW(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_UNICODE_STRING ModuleName;
    PRPC_UNICODE_STRING RegModuleName;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrRegisterEventSourceW(
                                   UNCServerName,
                                   ModuleName,
                                   RegModuleName,
                                   MajorVersion,
                                   MinorVersion,
                                   ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDLFormatString.Format[44] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDLFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenBELW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    BackupFileName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[70] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenBELW(
                       UNCServerName,
                       BackupFileName,
                       MajorVersion,
                       MinorVersion,
                       ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDLFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReadELW(
    PRPC_MESSAGE _pRpcMessage )
{
    PBYTE Buffer;
    NDR_SCONTEXT LogHandle;
    PULONG MinNumberOfBytesNeeded;
    PULONG NumberOfBytesRead;
    ULONG NumberOfBytesToRead;
    ULONG ReadFlags;
    ULONG RecordOffset;
    ULONG _M8;
    ULONG _M9;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    Buffer = 0;
    NumberOfBytesRead = 0;
    MinNumberOfBytesNeeded = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[88] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        ReadFlags = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        RecordOffset = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumberOfBytesToRead = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = _StubMsg.pfnAllocate(NumberOfBytesToRead * 1);
        NumberOfBytesRead = &_M8;
        MinNumberOfBytesNeeded = &_M9;
        
        _RetVal = ElfrReadELW(
                      ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                      ReadFlags,
                      RecordOffset,
                      NumberOfBytesToRead,
                      Buffer,
                      NumberOfBytesRead,
                      MinNumberOfBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[80] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[80] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfBytesRead;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MinNumberOfBytesNeeded;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReportEventW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING ComputerName;
    PBYTE Data;
    ULONG DataSize;
    USHORT EventCategory;
    ULONG EventID;
    USHORT EventType;
    USHORT Flags;
    NDR_SCONTEXT LogHandle;
    USHORT NumStrings;
    PULONG RecordNumber;
    PRPC_UNICODE_STRING ( __RPC_FAR *Strings )[  ];
    ULONG Time;
    PULONG TimeWritten;
    PRPC_SID UserSID;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    ComputerName = 0;
    UserSID = 0;
    Strings = 0;
    Data = 0;
    RecordNumber = 0;
    TimeWritten = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[112] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Time = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventType = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventCategory = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventID = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumStrings = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        _StubMsg.Buffer += 2;
        DataSize = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ComputerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[44],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserSID,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[94],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Strings,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[138],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Data,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[172],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        Flags = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RecordNumber,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[186],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TimeWritten,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[186],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrReportEventW(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           Time,
                           EventType,
                           EventCategory,
                           EventID,
                           NumStrings,
                           DataSize,
                           ComputerName,
                           UserSID,
                           *Strings,
                           Data,
                           Flags,
                           RecordNumber,
                           TimeWritten);
        
        _StubMsg.BufferLength = 8U + 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RecordNumber,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[186] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TimeWritten,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[186] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ComputerName,
                        &__MIDLFormatString.Format[44] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)UserSID,
                        &__MIDLFormatString.Format[94] );
        
        _StubMsg.MaxCount = NumStrings;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Strings,
                        &__MIDLFormatString.Format[138] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrClearELFA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    BackupFileName = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[156] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[190],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrClearELFA(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDLFormatString.Format[190] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrBackupELFA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    BackupFileName = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[166] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrBackupELFA(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDLFormatString.Format[226] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenELA(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_STRING ModuleName;
    PRPC_STRING RegModuleName;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[176] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[230],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenELA(
                      UNCServerName,
                      ModuleName,
                      RegModuleName,
                      MajorVersion,
                      MinorVersion,
                      ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDLFormatString.Format[226] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDLFormatString.Format[226] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrRegisterEventSourceA(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_STRING ModuleName;
    PRPC_STRING RegModuleName;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[176] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[230],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrRegisterEventSourceA(
                                   UNCServerName,
                                   ModuleName,
                                   RegModuleName,
                                   MajorVersion,
                                   MinorVersion,
                                   ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDLFormatString.Format[226] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDLFormatString.Format[226] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenBELA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING FileName;
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    UNCServerName = 0;
    FileName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[198] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[230],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&FileName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenBELA(
                       UNCServerName,
                       FileName,
                       MajorVersion,
                       MinorVersion,
                       ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)FileName,
                        &__MIDLFormatString.Format[226] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReadELA(
    PRPC_MESSAGE _pRpcMessage )
{
    PBYTE Buffer;
    NDR_SCONTEXT LogHandle;
    PULONG MinNumberOfBytesNeeded;
    PULONG NumberOfBytesRead;
    ULONG NumberOfBytesToRead;
    ULONG ReadFlags;
    ULONG RecordOffset;
    ULONG _M12;
    ULONG _M13;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    Buffer = 0;
    NumberOfBytesRead = 0;
    MinNumberOfBytesNeeded = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[88] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        ReadFlags = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        RecordOffset = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumberOfBytesToRead = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = _StubMsg.pfnAllocate(NumberOfBytesToRead * 1);
        NumberOfBytesRead = &_M12;
        MinNumberOfBytesNeeded = &_M13;
        
        _RetVal = ElfrReadELA(
                      ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                      ReadFlags,
                      RecordOffset,
                      NumberOfBytesToRead,
                      Buffer,
                      NumberOfBytesRead,
                      MinNumberOfBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Buffer,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[80] );
        
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Buffer,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[80] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfBytesRead;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MinNumberOfBytesNeeded;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReportEventA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING ComputerName;
    PBYTE Data;
    ULONG DataSize;
    USHORT EventCategory;
    ULONG EventID;
    USHORT EventType;
    USHORT Flags;
    NDR_SCONTEXT LogHandle;
    USHORT NumStrings;
    PULONG RecordNumber;
    PRPC_STRING ( __RPC_FAR *Strings )[  ];
    ULONG Time;
    PULONG TimeWritten;
    PRPC_SID UserSID;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    
NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    ComputerName = 0;
    UserSID = 0;
    Strings = 0;
    Data = 0;
    RecordNumber = 0;
    TimeWritten = 0;
    RpcTryFinally
        {
        NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDLProcFormatString.Format[216] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Time = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventType = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventCategory = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventID = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumStrings = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        _StubMsg.Buffer += 2;
        DataSize = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&ComputerName,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[226],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserSID,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[94],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Strings,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[234],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Data,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[172],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        Flags = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RecordNumber,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[186],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TimeWritten,
                              (PFORMAT_STRING) &__MIDLFormatString.Format[186],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrReportEventA(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           Time,
                           EventType,
                           EventCategory,
                           EventID,
                           NumStrings,
                           DataSize,
                           ComputerName,
                           UserSID,
                           *Strings,
                           Data,
                           Flags,
                           RecordNumber,
                           TimeWritten);
        
        _StubMsg.BufferLength = 8U + 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, 0 );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RecordNumber,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[186] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TimeWritten,
                            (PFORMAT_STRING) &__MIDLFormatString.Format[186] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ComputerName,
                        &__MIDLFormatString.Format[226] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)UserSID,
                        &__MIDLFormatString.Format[94] );
        
        _StubMsg.MaxCount = NumStrings;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Strings,
                        &__MIDLFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void __RPC_FAR *)& eventlog___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
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

static RPC_DISPATCH_FUNCTION eventlog_table[] =
    {
    eventlog_ElfrClearELFW,
    eventlog_ElfrBackupELFW,
    eventlog_ElfrCloseEL,
    eventlog_ElfrDeregisterEventSource,
    eventlog_ElfrNumberOfRecords,
    eventlog_ElfrOldestRecord,
    eventlog_ElfrChangeNotify,
    eventlog_ElfrOpenELW,
    eventlog_ElfrRegisterEventSourceW,
    eventlog_ElfrOpenBELW,
    eventlog_ElfrReadELW,
    eventlog_ElfrReportEventW,
    eventlog_ElfrClearELFA,
    eventlog_ElfrBackupELFA,
    eventlog_ElfrOpenELA,
    eventlog_ElfrRegisterEventSourceA,
    eventlog_ElfrOpenBELA,
    eventlog_ElfrReadELA,
    eventlog_ElfrReportEventA,
    0
    };
RPC_DISPATCH_TABLE eventlog_DispatchTable = 
    {
    19,
    eventlog_table
    };

static const MIDL_FORMAT_STRING __MIDLProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/*  2 */	0x0, 0x0,	/* Type Offset=0 */
/*  4 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/*  6 */	0x4, 0x0,	/* Type Offset=4 */
/*  8 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 12 */	0x0, 0x0,	/* Type Offset=0 */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 16 */	0x2c, 0x0,	/* Type Offset=44 */
/* 18 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 22 */	0x30, 0x0,	/* Type Offset=48 */
/* 24 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 28 */	0x0, 0x0,	/* Type Offset=0 */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 32 */	0x38, 0x0,	/* Type Offset=56 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 38 */	0x0, 0x0,	/* Type Offset=0 */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* 2 */
/* 42 */	0x3c, 0x0,	/* Type Offset=60 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 50 */	0x44, 0x0,	/* Type Offset=68 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 54 */	0x2c, 0x0,	/* Type Offset=44 */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 58 */	0x2c, 0x0,	/* Type Offset=44 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 66 */	0x48, 0x0,	/* Type Offset=72 */
/* 68 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 70 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 72 */	0x44, 0x0,	/* Type Offset=68 */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 76 */	0x2c, 0x0,	/* Type Offset=44 */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 82 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 84 */	0x48, 0x0,	/* Type Offset=72 */
/* 86 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 90 */	0x0, 0x0,	/* Type Offset=0 */
/* 92 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 100 */	0x50, 0x0,	/* Type Offset=80 */
/* 102 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 104 */	0x38, 0x0,	/* Type Offset=56 */
/* 106 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 108 */	0x38, 0x0,	/* Type Offset=56 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 114 */	0x0, 0x0,	/* Type Offset=0 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 120 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 126 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 128 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 130 */	0x2c, 0x0,	/* Type Offset=44 */
/* 132 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 134 */	0x5e, 0x0,	/* Type Offset=94 */
/* 136 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 138 */	0x8a, 0x0,	/* Type Offset=138 */
/* 140 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 142 */	0xac, 0x0,	/* Type Offset=172 */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 146 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 148 */	0xba, 0x0,	/* Type Offset=186 */
/* 150 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 152 */	0xba, 0x0,	/* Type Offset=186 */
/* 154 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 158 */	0x0, 0x0,	/* Type Offset=0 */
/* 160 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 162 */	0xbe, 0x0,	/* Type Offset=190 */
/* 164 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 166 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 168 */	0x0, 0x0,	/* Type Offset=0 */
/* 170 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 172 */	0xe2, 0x0,	/* Type Offset=226 */
/* 174 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 178 */	0xe6, 0x0,	/* Type Offset=230 */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 182 */	0xe2, 0x0,	/* Type Offset=226 */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 186 */	0xe2, 0x0,	/* Type Offset=226 */
/* 188 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 190 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 192 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 194 */	0x48, 0x0,	/* Type Offset=72 */
/* 196 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 200 */	0xe6, 0x0,	/* Type Offset=230 */
/* 202 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 204 */	0xe2, 0x0,	/* Type Offset=226 */
/* 206 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x51,		/* FC_OUT_PARAM */
			0x1,		/* 1 */
/* 212 */	0x48, 0x0,	/* Type Offset=72 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 218 */	0x0, 0x0,	/* Type Offset=0 */
/* 220 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 222 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 226 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 228 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 230 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 234 */	0xe2, 0x0,	/* Type Offset=226 */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 238 */	0x5e, 0x0,	/* Type Offset=94 */
/* 240 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 242 */	0xea, 0x0,	/* Type Offset=234 */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
			0x1,		/* 1 */
/* 246 */	0xac, 0x0,	/* Type Offset=172 */
/* 248 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 250 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 252 */	0xba, 0x0,	/* Type Offset=186 */
/* 254 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x1,		/* 1 */
/* 256 */	0xba, 0x0,	/* Type Offset=186 */
/* 258 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_FORMAT_STRING __MIDLFormatString =
    {
        0,
        {
			0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/*  2 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	0x10, 0x0,	/* Offset= 16 (22) */
/*  8 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 10 */	0x2, 0x0,	/* 2 */
/* 12 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 14 */	0x2, 0x0,	/* 2 */
/* 16 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 18 */	0x0, 0x0,	/* 0 */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 24 */	0x8, 0x0,	/* 8 */
/* 26 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 30 */	0x4, 0x0,	/* 4 */
/* 32 */	0x4, 0x0,	/* 4 */
/* 34 */	0x12, 0x0,	/* FC_UP */
/* 36 */	0xe4, 0xff,	/* Offset= -28 (8) */
/* 38 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 40 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 42 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 44 */	
			0x11, 0x0,	/* FC_RP */
/* 46 */	0xe8, 0xff,	/* Offset= -24 (22) */
/* 48 */	
			0x11, 0x0,	/* FC_RP */
/* 50 */	0x2, 0x0,	/* Offset= 2 (52) */
/* 52 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* -32 */
/* 54 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 58 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 62 */	0x8, 0x0,	/* 8 */
/* 64 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 70 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x11, 0x0,	/* FC_RP */
/* 74 */	0x2, 0x0,	/* Offset= 2 (76) */
/* 76 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* -96 */
/* 78 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0x0,	/* FC_RP */
/* 82 */	0x2, 0x0,	/* Offset= 2 (84) */
/* 84 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 86 */	0x1, 0x0,	/* 1 */
/* 88 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 90 */	0xc, 0x0,	/* Stack offset= 12 */
#else
			0x18, 0x0,	/* Stack offset= 24 */
#endif
/* 92 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	0x1c, 0x0,	/* Offset= 28 (124) */
/* 98 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 100 */	0x6, 0x0,	/* 6 */
/* 102 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 104 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 106 */	0x6, 0x0,	/* 6 */
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	0xf4, 0xff,	/* Offset= -12 (98) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 116 */	0x4, 0x0,	/* 4 */
/* 118 */	0x3,		/* 3 */
			0x0,		/*  */
/* 120 */	0xf9, 0xff,	/* -7 */
/* 122 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 124 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 126 */	0x8, 0x0,	/* 8 */
/* 128 */	0xf2, 0xff,	/* Offset= -14 (114) */
/* 130 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 134 */	0xe2, 0xff,	/* Offset= -30 (104) */
/* 136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 138 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 140 */	0x2, 0x0,	/* Offset= 2 (142) */
/* 142 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 144 */	0x4, 0x0,	/* 4 */
/* 146 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 148 */	0x14, 0x0,	/* Stack offset= 20 */
#else
			0x28, 0x0,	/* Stack offset= 40 */
#endif
/* 150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 154 */	0x4, 0x0,	/* 4 */
/* 156 */	0x0, 0x0,	/* 0 */
/* 158 */	0x1, 0x0,	/* 1 */
/* 160 */	0x0, 0x0,	/* 0 */
/* 162 */	0x0, 0x0,	/* 0 */
/* 164 */	0x12, 0x0,	/* FC_UP */
/* 166 */	0x70, 0xff,	/* Offset= -144 (22) */
/* 168 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x12, 0x0,	/* FC_UP */
/* 174 */	0x2, 0x0,	/* Offset= 2 (176) */
/* 176 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 178 */	0x1, 0x0,	/* 1 */
/* 180 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 182 */	0x18, 0x0,	/* Stack offset= 24 */
#else
			0x30, 0x0,	/* Stack offset= 48 */
#endif
/* 184 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 186 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 188 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x12, 0x0,	/* FC_UP */
/* 192 */	0xc, 0x0,	/* Offset= 12 (204) */
/* 194 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 196 */	0x1, 0x0,	/* 1 */
/* 198 */	0x16,		/* 22 */
			0x0,		/*  */
/* 200 */	0x2, 0x0,	/* 2 */
/* 202 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 204 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 206 */	0x8, 0x0,	/* 8 */
/* 208 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 212 */	0x4, 0x0,	/* 4 */
/* 214 */	0x4, 0x0,	/* 4 */
/* 216 */	0x12, 0x0,	/* FC_UP */
/* 218 */	0xe8, 0xff,	/* Offset= -24 (194) */
/* 220 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 222 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 224 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x0,	/* FC_RP */
/* 228 */	0xe8, 0xff,	/* Offset= -24 (204) */
/* 230 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 232 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 236 */	0x2, 0x0,	/* Offset= 2 (238) */
/* 238 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 240 */	0x4, 0x0,	/* 4 */
/* 242 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 244 */	0x14, 0x0,	/* Stack offset= 20 */
#else
			0x28, 0x0,	/* Stack offset= 40 */
#endif
/* 246 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 248 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 250 */	0x4, 0x0,	/* 4 */
/* 252 */	0x0, 0x0,	/* 0 */
/* 254 */	0x1, 0x0,	/* 1 */
/* 256 */	0x0, 0x0,	/* 0 */
/* 258 */	0x0, 0x0,	/* 0 */
/* 260 */	0x12, 0x0,	/* FC_UP */
/* 262 */	0xc6, 0xff,	/* Offset= -58 (204) */
/* 264 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
