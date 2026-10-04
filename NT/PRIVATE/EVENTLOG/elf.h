#include "rpc.h"
#include "rpcndr.h"

#ifndef __elf_h__
#define __elf_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#include "imports.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __eventlog_INTERFACE_DEFINED__
#define __eventlog_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: eventlog
 * at Sat Oct 03 20:23:48 2026
 * using MIDL 2.00.71
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


			/* size is 8 */
typedef UNICODE_STRING RPC_UNICODE_STRING;

			/* size is 4 */
typedef UNICODE_STRING __RPC_FAR *PRPC_UNICODE_STRING;

			/* size is 8 */
typedef struct  _RPC_SID
    {
    UCHAR Revision;
    UCHAR SubAuthorityCount;
    SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ ULONG SubAuthority[ 1 ];
    }	RPC_SID;

			/* size is 4 */
typedef struct _RPC_SID __RPC_FAR *PRPC_SID;

			/* size is 4 */
typedef struct _RPC_SID __RPC_FAR *__RPC_FAR *PPRPC_SID;

			/* size is 8 */
typedef struct  _RPC_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [size_is] */ PCHAR Buffer;
    }	RPC_STRING;

			/* size is 4 */
typedef struct _RPC_STRING __RPC_FAR *PRPC_STRING;

			/* size is 8 */
typedef struct _RPC_STRING RPC_ANSI_STRING;

			/* size is 4 */
typedef struct _RPC_STRING __RPC_FAR *PRPC_ANSI_STRING;

			/* size is 8 */
typedef struct  _RPC_CLIENT_ID
    {
    ULONG UniqueProcess;
    ULONG UniqueThread;
    }	RPC_CLIENT_ID;

			/* size is 4 */
typedef struct _RPC_CLIENT_ID __RPC_FAR *PRPC_CLIENT_ID;

			/* size is 4 */
typedef /* [unique][handle] */ LPWSTR EVENTLOG_HANDLE_W;

			/* size is 4 */
typedef /* [unique][handle] */ LPSTR EVENTLOG_HANDLE_A;

			/* size is 4 */
typedef /* [context_handle] */ struct  _IELF_HANDLE
    {
    LIST_ENTRY Next;
    ULONG Signature;
    ULONG Flags;
    ULONG GrantedAccess;
    ATOM Atom;
    ULONG SeekRecordPos;
    ULONG SeekBytePos;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG NameLength;
    /* [size_is] */ WCHAR Name[ 1 ];
    }	__RPC_FAR *IELF_HANDLE;

			/* size is 4 */
typedef IELF_HANDLE __RPC_FAR *PIELF_HANDLE;

			/* size is 4 */
NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName);

			/* size is 4 */
NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName);

			/* size is 4 */
NTSTATUS ElfrCloseEL( 
    /* [out][in] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG NumberOfRecords);

			/* size is 4 */
NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG OldestRecordNumber);

			/* size is 4 */
NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event);

			/* size is 4 */
NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded);

			/* size is 4 */
NTSTATUS ElfrReportEventW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [in] */ USHORT NumStrings,
    /* [in] */ ULONG DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING __RPC_FAR Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten);

			/* size is 4 */
NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName);

			/* size is 4 */
NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName);

			/* size is 4 */
NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING FileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

			/* size is 4 */
NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded);

			/* size is 4 */
NTSTATUS ElfrReportEventA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [in] */ USHORT NumStrings,
    /* [in] */ ULONG DataSize,
    /* [in] */ PRPC_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_STRING __RPC_FAR Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten);


extern handle_t eventlog_handle;


extern RPC_IF_HANDLE eventlog_ClientIfHandle;
extern RPC_IF_HANDLE eventlog_ServerIfHandle;
#endif /* __eventlog_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER EVENTLOG_HANDLE_W_bind( EVENTLOG_HANDLE_W );
void __RPC_USER EVENTLOG_HANDLE_W_unbind( EVENTLOG_HANDLE_W, handle_t );
handle_t __RPC_USER EVENTLOG_HANDLE_A_bind( EVENTLOG_HANDLE_A );
void __RPC_USER EVENTLOG_HANDLE_A_unbind( EVENTLOG_HANDLE_A, handle_t );

void __RPC_USER IELF_HANDLE_rundown( IELF_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
