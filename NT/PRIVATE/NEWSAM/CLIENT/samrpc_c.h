#include "rpc.h"
#include "rpcndr.h"

#ifndef __samrpc_c_h__
#define __samrpc_c_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#include "samimp.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __samr_INTERFACE_DEFINED__
#define __samr_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: samr
 * at Sat Oct 03 20:24:34 2026
 * using MIDL 2.00.71
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


			/* size is 8 */
typedef struct  _RPC_UNICODE_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [length_is][size_is] */ PWCH Buffer;
    }	RPC_UNICODE_STRING;

			/* size is 4 */
typedef struct _RPC_UNICODE_STRING __RPC_FAR *PRPC_UNICODE_STRING;

			/* size is 12 */
typedef struct  _RPC_CYPHER_DATA
    {
    ULONG Length;
    ULONG MaximumLength;
    /* [length_is][size_is] */ PCHAR Buffer;
    }	RPC_CYPHER_DATA;

			/* size is 4 */
typedef struct _RPC_CYPHER_DATA __RPC_FAR *PRPC_CYPHER_DATA;

			/* size is 8 */
typedef struct  _RPC_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [length_is][size_is] */ PCHAR Buffer;
    }	RPC_STRING;

			/* size is 4 */
typedef struct _RPC_STRING __RPC_FAR *PRPC_STRING;

			/* size is 8 */
typedef struct _RPC_STRING RPC_ANSI_STRING;

			/* size is 4 */
typedef struct _RPC_STRING __RPC_FAR *PRPC_ANSI_STRING;

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

			/* size is 4 */
typedef /* [handle] */ LPWSTR PSAMPR_SERVER_NAME;

			/* size is 4 */
typedef /* [context_handle] */ PVOID SAMPR_HANDLE;

			/* size is 12 */
typedef struct  _SAMPR_RID_ENUMERATION
    {
    ULONG RelativeId;
    RPC_UNICODE_STRING Name;
    }	SAMPR_RID_ENUMERATION;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_RID_ENUMERATION __RPC_FAR *PSAMPR_RID_ENUMERATION;

			/* size is 12 */
typedef struct  _SAMPR_SID_ENUMERATION
    {
    PSID Sid;
    RPC_UNICODE_STRING Name;
    }	SAMPR_SID_ENUMERATION;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_SID_ENUMERATION __RPC_FAR *PSAMPR_SID_ENUMERATION;

			/* size is 8 */
typedef struct  _SAMPR_ENUMERATION_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_RID_ENUMERATION Buffer;
    }	SAMPR_ENUMERATION_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_ENUMERATION_BUFFER __RPC_FAR *PSAMPR_ENUMERATION_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_SR_SECURITY_DESCRIPTOR
    {
    ULONG Length;
    /* [size_is] */ PUCHAR SecurityDescriptor;
    }	SAMPR_SR_SECURITY_DESCRIPTOR;

			/* size is 4 */
typedef struct _SAMPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *PSAMPR_SR_SECURITY_DESCRIPTOR;

			/* size is 8 */
typedef struct  _SAMPR_GET_GROUPS_BUFFER
    {
    ULONG MembershipCount;
    /* [size_is] */ PGROUP_MEMBERSHIP Groups;
    }	SAMPR_GET_GROUPS_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_GET_GROUPS_BUFFER __RPC_FAR *PSAMPR_GET_GROUPS_BUFFER;

			/* size is 12 */
typedef struct  _SAMPR_GET_MEMBERS_BUFFER
    {
    ULONG MemberCount;
    /* [size_is] */ PULONG Members;
    /* [size_is] */ PULONG Attributes;
    }	SAMPR_GET_MEMBERS_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_GET_MEMBERS_BUFFER __RPC_FAR *PSAMPR_GET_MEMBERS_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_LOGON_HOURS
    {
    USHORT UnitsPerWeek;
    /* [length_is][size_is] */ PUCHAR LogonHours;
    }	SAMPR_LOGON_HOURS;

			/* size is 4 */
typedef struct _SAMPR_LOGON_HOURS __RPC_FAR *PSAMPR_LOGON_HOURS;

			/* size is 8 */
typedef struct  _SAMPR_ULONG_ARRAY
    {
    ULONG Count;
    /* [size_is] */ ULONG __RPC_FAR *Element;
    }	SAMPR_ULONG_ARRAY;

			/* size is 4 */
typedef struct _SAMPR_ULONG_ARRAY __RPC_FAR *PSAMPR_ULONG_ARRAY;

			/* size is 4 */
typedef struct  _SAMPR_SID_INFORMATION
    {
    PRPC_SID SidPointer;
    }	SAMPR_SID_INFORMATION;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_SID_INFORMATION __RPC_FAR *PSAMPR_SID_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_PSID_ARRAY
    {
    ULONG Count;
    /* [size_is] */ PSAMPR_SID_INFORMATION Sids;
    }	SAMPR_PSID_ARRAY;

			/* size is 4 */
typedef struct _SAMPR_PSID_ARRAY __RPC_FAR *PSAMPR_PSID_ARRAY;

			/* size is 8 */
typedef struct  _SAMPR_UNICODE_STRING_ARRAY
    {
    ULONG Count;
    /* [size_is] */ RPC_UNICODE_STRING __RPC_FAR *Element;
    }	SAMPR_UNICODE_STRING_ARRAY;

			/* size is 4 */
typedef struct _SAMPR_UNICODE_STRING_ARRAY __RPC_FAR *PSAMPR_UNICODE_STRING_ARRAY;

			/* size is 8 */
typedef RPC_UNICODE_STRING SAMPR_RETURNED_STRING;

			/* size is 4 */
typedef /* [allocate] */ RPC_UNICODE_STRING __RPC_FAR *PSAMPR_RETURNED_STRING;

			/* size is 8 */
typedef STRING SAMPR_RETURNED_NORMAL_STRING;

			/* size is 4 */
typedef /* [allocate] */ STRING __RPC_FAR *PSAMPR_RETURNED_NORMAL_STRING;

			/* size is 8 */
typedef struct  _SAMPR_RETURNED_USTRING_ARRAY
    {
    ULONG Count;
    /* [size_is] */ PSAMPR_RETURNED_STRING Element;
    }	SAMPR_RETURNED_USTRING_ARRAY;

			/* size is 4 */
typedef struct _SAMPR_RETURNED_USTRING_ARRAY __RPC_FAR *PSAMPR_RETURNED_USTRING_ARRAY;


#pragma pack(4)
			/* size is 64 */
typedef struct  _SAMPR_DOMAIN_GENERAL_INFORMATION
    {
    OLD_LARGE_INTEGER ForceLogoff;
    RPC_UNICODE_STRING OemInformation;
    RPC_UNICODE_STRING DomainName;
    RPC_UNICODE_STRING ReplicaSourceNodeName;
    OLD_LARGE_INTEGER DomainModifiedCount;
    ULONG DomainServerState;
    ULONG DomainServerRole;
    BOOLEAN UasCompatibilityRequired;
    ULONG UserCount;
    ULONG GroupCount;
    ULONG AliasCount;
    }	SAMPR_DOMAIN_GENERAL_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_GENERAL_INFORMATION __RPC_FAR *PSAMPR_DOMAIN_GENERAL_INFORMATION;


#pragma pack()

#pragma pack(4)
			/* size is 82 */
typedef struct  _SAMPR_DOMAIN_GENERAL_INFORMATION2
    {
    SAMPR_DOMAIN_GENERAL_INFORMATION I1;
    LARGE_INTEGER LockoutDuration;
    LARGE_INTEGER LockoutObservationWindow;
    USHORT LockoutThreshold;
    }	SAMPR_DOMAIN_GENERAL_INFORMATION2;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_GENERAL_INFORMATION2 __RPC_FAR *PSAMPR_DOMAIN_GENERAL_INFORMATION2;


#pragma pack()
			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_OEM_INFORMATION
    {
    RPC_UNICODE_STRING OemInformation;
    }	SAMPR_DOMAIN_OEM_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_OEM_INFORMATION __RPC_FAR *PSAMPR_DOMAIN_OEM_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_NAME_INFORMATION
    {
    RPC_UNICODE_STRING DomainName;
    }	SAMPR_DOMAIN_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_NAME_INFORMATION __RPC_FAR *PSAMPR_DOMAIN_NAME_INFORMATION;

			/* size is 8 */
typedef struct  SAMPR_DOMAIN_REPLICATION_INFORMATION
    {
    RPC_UNICODE_STRING ReplicaSourceNodeName;
    }	SAMPR_DOMAIN_REPLICATION_INFORMATION;

			/* size is 4 */
typedef struct SAMPR_DOMAIN_REPLICATION_INFORMATION __RPC_FAR *PSAMPR_DOMAIN_REPLICATION_INFORMATION;

			/* size is 18 */
typedef struct  _SAMPR_DOMAIN_LOCKOUT_INFORMATION
    {
    LARGE_INTEGER LockoutDuration;
    LARGE_INTEGER LockoutObservationWindow;
    USHORT LockoutThreshold;
    }	SAMPR_DOMAIN_LOCKOUT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_LOCKOUT_INFORMATION __RPC_FAR *PSAMPR_DOMAIN_LOCKOUT_INFORMATION;

			/* size is 82 */
typedef /* [switch_type] */ union _SAMPR_DOMAIN_INFO_BUFFER
    {
    /* [case] */ DOMAIN_PASSWORD_INFORMATION Password;
    /* [case] */ SAMPR_DOMAIN_GENERAL_INFORMATION General;
    /* [case] */ DOMAIN_LOGOFF_INFORMATION Logoff;
    /* [case] */ SAMPR_DOMAIN_OEM_INFORMATION Oem;
    /* [case] */ SAMPR_DOMAIN_NAME_INFORMATION Name;
    /* [case] */ DOMAIN_SERVER_ROLE_INFORMATION Role;
    /* [case] */ SAMPR_DOMAIN_REPLICATION_INFORMATION Replication;
    /* [case] */ DOMAIN_MODIFIED_INFORMATION Modified;
    /* [case] */ DOMAIN_STATE_INFORMATION State;
    /* [case] */ SAMPR_DOMAIN_GENERAL_INFORMATION2 General2;
    /* [case] */ SAMPR_DOMAIN_LOCKOUT_INFORMATION Lockout;
    /* [case] */ DOMAIN_MODIFIED_INFORMATION2 Modified2;
    }	SAMPR_DOMAIN_INFO_BUFFER;

			/* size is 4 */
typedef /* [allocate][switch_type] */ union _SAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *PSAMPR_DOMAIN_INFO_BUFFER;

			/* size is 24 */
typedef struct  _SAMPR_GROUP_GENERAL_INFORMATION
    {
    RPC_UNICODE_STRING Name;
    ULONG Attributes;
    ULONG MemberCount;
    RPC_UNICODE_STRING AdminComment;
    }	SAMPR_GROUP_GENERAL_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_GROUP_GENERAL_INFORMATION __RPC_FAR *PSAMPR_GROUP_GENERAL_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_GROUP_NAME_INFORMATION
    {
    RPC_UNICODE_STRING Name;
    }	SAMPR_GROUP_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_GROUP_NAME_INFORMATION __RPC_FAR *PSAMPR_GROUP_NAME_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_GROUP_ADM_COMMENT_INFORMATION
    {
    RPC_UNICODE_STRING AdminComment;
    }	SAMPR_GROUP_ADM_COMMENT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_GROUP_ADM_COMMENT_INFORMATION __RPC_FAR *PSAMPR_GROUP_ADM_COMMENT_INFORMATION;

			/* size is 24 */
typedef /* [switch_type] */ union _SAMPR_GROUP_INFO_BUFFER
    {
    /* [case] */ SAMPR_GROUP_GENERAL_INFORMATION General;
    /* [case] */ SAMPR_GROUP_NAME_INFORMATION Name;
    /* [case] */ GROUP_ATTRIBUTE_INFORMATION Attribute;
    /* [case] */ SAMPR_GROUP_ADM_COMMENT_INFORMATION AdminComment;
    }	SAMPR_GROUP_INFO_BUFFER;

			/* size is 4 */
typedef /* [allocate][switch_type] */ union _SAMPR_GROUP_INFO_BUFFER __RPC_FAR *PSAMPR_GROUP_INFO_BUFFER;

			/* size is 20 */
typedef struct  _SAMPR_ALIAS_GENERAL_INFORMATION
    {
    RPC_UNICODE_STRING Name;
    ULONG MemberCount;
    RPC_UNICODE_STRING AdminComment;
    }	SAMPR_ALIAS_GENERAL_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_ALIAS_GENERAL_INFORMATION __RPC_FAR *PSAMPR_ALIAS_GENERAL_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_ALIAS_NAME_INFORMATION
    {
    RPC_UNICODE_STRING Name;
    }	SAMPR_ALIAS_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_ALIAS_NAME_INFORMATION __RPC_FAR *PSAMPR_ALIAS_NAME_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_ALIAS_ADM_COMMENT_INFORMATION
    {
    RPC_UNICODE_STRING AdminComment;
    }	SAMPR_ALIAS_ADM_COMMENT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_ALIAS_ADM_COMMENT_INFORMATION __RPC_FAR *PSAMPR_ALIAS_ADM_COMMENT_INFORMATION;

			/* size is 20 */
typedef /* [switch_type] */ union _SAMPR_ALIAS_INFO_BUFFER
    {
    /* [case] */ SAMPR_ALIAS_GENERAL_INFORMATION General;
    /* [case] */ SAMPR_ALIAS_NAME_INFORMATION Name;
    /* [case] */ SAMPR_ALIAS_ADM_COMMENT_INFORMATION AdminComment;
    }	SAMPR_ALIAS_INFO_BUFFER;

			/* size is 4 */
typedef /* [allocate][switch_type] */ union _SAMPR_ALIAS_INFO_BUFFER __RPC_FAR *PSAMPR_ALIAS_INFO_BUFFER;


#pragma pack(4)
			/* size is 196 */
typedef struct  _SAMPR_USER_ALL_INFORMATION
    {
    OLD_LARGE_INTEGER LastLogon;
    OLD_LARGE_INTEGER LastLogoff;
    OLD_LARGE_INTEGER PasswordLastSet;
    OLD_LARGE_INTEGER AccountExpires;
    OLD_LARGE_INTEGER PasswordCanChange;
    OLD_LARGE_INTEGER PasswordMustChange;
    RPC_UNICODE_STRING UserName;
    RPC_UNICODE_STRING FullName;
    RPC_UNICODE_STRING HomeDirectory;
    RPC_UNICODE_STRING HomeDirectoryDrive;
    RPC_UNICODE_STRING ScriptPath;
    RPC_UNICODE_STRING ProfilePath;
    RPC_UNICODE_STRING AdminComment;
    RPC_UNICODE_STRING WorkStations;
    RPC_UNICODE_STRING UserComment;
    RPC_UNICODE_STRING Parameters;
    RPC_UNICODE_STRING LmOwfPassword;
    RPC_UNICODE_STRING NtOwfPassword;
    RPC_UNICODE_STRING PrivateData;
    SAMPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor;
    ULONG UserId;
    ULONG PrimaryGroupId;
    ULONG UserAccountControl;
    ULONG WhichFields;
    SAMPR_LOGON_HOURS LogonHours;
    USHORT BadPasswordCount;
    USHORT LogonCount;
    USHORT CountryCode;
    USHORT CodePage;
    BOOLEAN LmPasswordPresent;
    BOOLEAN NtPasswordPresent;
    BOOLEAN PasswordExpired;
    BOOLEAN PrivateDataSensitive;
    }	SAMPR_USER_ALL_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_ALL_INFORMATION __RPC_FAR *PSAMPR_USER_ALL_INFORMATION;


#pragma pack()

#pragma pack(4)
			/* size is 208 */
typedef struct  _SAMPR_USER_INTERNAL3_INFORMATION
    {
    SAMPR_USER_ALL_INFORMATION I1;
    LARGE_INTEGER LastBadPasswordTime;
    }	SAMPR_USER_INTERNAL3_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_INTERNAL3_INFORMATION __RPC_FAR *PSAMPR_USER_INTERNAL3_INFORMATION;


#pragma pack()
			/* size is 36 */
typedef struct  _SAMPR_USER_GENERAL_INFORMATION
    {
    RPC_UNICODE_STRING UserName;
    RPC_UNICODE_STRING FullName;
    ULONG PrimaryGroupId;
    RPC_UNICODE_STRING AdminComment;
    RPC_UNICODE_STRING UserComment;
    }	SAMPR_USER_GENERAL_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_GENERAL_INFORMATION __RPC_FAR *PSAMPR_USER_GENERAL_INFORMATION;

			/* size is 20 */
typedef struct  _SAMPR_USER_PREFERENCES_INFORMATION
    {
    RPC_UNICODE_STRING UserComment;
    RPC_UNICODE_STRING Reserved1;
    USHORT CountryCode;
    USHORT CodePage;
    }	SAMPR_USER_PREFERENCES_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_PREFERENCES_INFORMATION __RPC_FAR *PSAMPR_USER_PREFERENCES_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_PARAMETERS_INFORMATION
    {
    RPC_UNICODE_STRING Parameters;
    }	SAMPR_USER_PARAMETERS_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_PARAMETERS_INFORMATION __RPC_FAR *PSAMPR_USER_PARAMETERS_INFORMATION;


#pragma pack(4)
			/* size is 120 */
typedef struct  _SAMPR_USER_LOGON_INFORMATION
    {
    RPC_UNICODE_STRING UserName;
    RPC_UNICODE_STRING FullName;
    ULONG UserId;
    ULONG PrimaryGroupId;
    RPC_UNICODE_STRING HomeDirectory;
    RPC_UNICODE_STRING HomeDirectoryDrive;
    RPC_UNICODE_STRING ScriptPath;
    RPC_UNICODE_STRING ProfilePath;
    RPC_UNICODE_STRING WorkStations;
    OLD_LARGE_INTEGER LastLogon;
    OLD_LARGE_INTEGER LastLogoff;
    OLD_LARGE_INTEGER PasswordLastSet;
    OLD_LARGE_INTEGER PasswordCanChange;
    OLD_LARGE_INTEGER PasswordMustChange;
    SAMPR_LOGON_HOURS LogonHours;
    USHORT BadPasswordCount;
    USHORT LogonCount;
    ULONG UserAccountControl;
    }	SAMPR_USER_LOGON_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_LOGON_INFORMATION __RPC_FAR *PSAMPR_USER_LOGON_INFORMATION;


#pragma pack()

#pragma pack(4)
			/* size is 120 */
typedef struct  _SAMPR_USER_ACCOUNT_INFORMATION
    {
    RPC_UNICODE_STRING UserName;
    RPC_UNICODE_STRING FullName;
    ULONG UserId;
    ULONG PrimaryGroupId;
    RPC_UNICODE_STRING HomeDirectory;
    RPC_UNICODE_STRING HomeDirectoryDrive;
    RPC_UNICODE_STRING ScriptPath;
    RPC_UNICODE_STRING ProfilePath;
    RPC_UNICODE_STRING AdminComment;
    RPC_UNICODE_STRING WorkStations;
    OLD_LARGE_INTEGER LastLogon;
    OLD_LARGE_INTEGER LastLogoff;
    SAMPR_LOGON_HOURS LogonHours;
    USHORT BadPasswordCount;
    USHORT LogonCount;
    OLD_LARGE_INTEGER PasswordLastSet;
    OLD_LARGE_INTEGER AccountExpires;
    ULONG UserAccountControl;
    }	SAMPR_USER_ACCOUNT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_ACCOUNT_INFORMATION __RPC_FAR *PSAMPR_USER_ACCOUNT_INFORMATION;


#pragma pack()
			/* size is 8 */
typedef struct  _SAMPR_USER_A_NAME_INFORMATION
    {
    RPC_UNICODE_STRING UserName;
    }	SAMPR_USER_A_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_A_NAME_INFORMATION __RPC_FAR *PSAMPR_USER_A_NAME_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_F_NAME_INFORMATION
    {
    RPC_UNICODE_STRING FullName;
    }	SAMPR_USER_F_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_F_NAME_INFORMATION __RPC_FAR *PSAMPR_USER_F_NAME_INFORMATION;

			/* size is 16 */
typedef struct  _SAMPR_USER_NAME_INFORMATION
    {
    RPC_UNICODE_STRING UserName;
    RPC_UNICODE_STRING FullName;
    }	SAMPR_USER_NAME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_NAME_INFORMATION __RPC_FAR *PSAMPR_USER_NAME_INFORMATION;

			/* size is 16 */
typedef struct  _SAMPR_USER_HOME_INFORMATION
    {
    RPC_UNICODE_STRING HomeDirectory;
    RPC_UNICODE_STRING HomeDirectoryDrive;
    }	SAMPR_USER_HOME_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_HOME_INFORMATION __RPC_FAR *PSAMPR_USER_HOME_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_SCRIPT_INFORMATION
    {
    RPC_UNICODE_STRING ScriptPath;
    }	SAMPR_USER_SCRIPT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_SCRIPT_INFORMATION __RPC_FAR *PSAMPR_USER_SCRIPT_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_PROFILE_INFORMATION
    {
    RPC_UNICODE_STRING ProfilePath;
    }	SAMPR_USER_PROFILE_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_PROFILE_INFORMATION __RPC_FAR *PSAMPR_USER_PROFILE_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_ADMIN_COMMENT_INFORMATION
    {
    RPC_UNICODE_STRING AdminComment;
    }	SAMPR_USER_ADMIN_COMMENT_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_ADMIN_COMMENT_INFORMATION __RPC_FAR *PSAMPR_USER_ADMIN_COMMENT_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_WORKSTATIONS_INFORMATION
    {
    RPC_UNICODE_STRING WorkStations;
    }	SAMPR_USER_WORKSTATIONS_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_WORKSTATIONS_INFORMATION __RPC_FAR *PSAMPR_USER_WORKSTATIONS_INFORMATION;

			/* size is 8 */
typedef struct  _SAMPR_USER_LOGON_HOURS_INFORMATION
    {
    SAMPR_LOGON_HOURS LogonHours;
    }	SAMPR_USER_LOGON_HOURS_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_LOGON_HOURS_INFORMATION __RPC_FAR *PSAMPR_USER_LOGON_HOURS_INFORMATION;

			/* size is 35 */
typedef struct  _SAMPR_USER_INTERNAL1_INFORMATION
    {
    ENCRYPTED_NT_OWF_PASSWORD EncryptedNtOwfPassword;
    ENCRYPTED_LM_OWF_PASSWORD EncryptedLmOwfPassword;
    BOOLEAN NtPasswordPresent;
    BOOLEAN LmPasswordPresent;
    BOOLEAN PasswordExpired;
    }	SAMPR_USER_INTERNAL1_INFORMATION;

			/* size is 4 */
typedef struct _SAMPR_USER_INTERNAL1_INFORMATION __RPC_FAR *PSAMPR_USER_INTERNAL1_INFORMATION;

			/* size is 208 */
typedef /* [switch_type] */ union _SAMPR_USER_INFO_BUFFER
    {
    /* [case] */ SAMPR_USER_GENERAL_INFORMATION General;
    /* [case] */ SAMPR_USER_PREFERENCES_INFORMATION Preferences;
    /* [case] */ SAMPR_USER_LOGON_INFORMATION Logon;
    /* [case] */ SAMPR_USER_LOGON_HOURS_INFORMATION LogonHours;
    /* [case] */ SAMPR_USER_ACCOUNT_INFORMATION Account;
    /* [case] */ SAMPR_USER_NAME_INFORMATION Name;
    /* [case] */ SAMPR_USER_A_NAME_INFORMATION AccountName;
    /* [case] */ SAMPR_USER_F_NAME_INFORMATION FullName;
    /* [case] */ USER_PRIMARY_GROUP_INFORMATION PrimaryGroup;
    /* [case] */ SAMPR_USER_HOME_INFORMATION Home;
    /* [case] */ SAMPR_USER_SCRIPT_INFORMATION Script;
    /* [case] */ SAMPR_USER_PROFILE_INFORMATION Profile;
    /* [case] */ SAMPR_USER_ADMIN_COMMENT_INFORMATION AdminComment;
    /* [case] */ SAMPR_USER_WORKSTATIONS_INFORMATION WorkStations;
    /* [case] */ USER_CONTROL_INFORMATION Control;
    /* [case] */ USER_EXPIRES_INFORMATION Expires;
    /* [case] */ SAMPR_USER_INTERNAL1_INFORMATION Internal1;
    /* [case] */ USER_INTERNAL2_INFORMATION Internal2;
    /* [case] */ SAMPR_USER_PARAMETERS_INFORMATION Parameters;
    /* [case] */ SAMPR_USER_ALL_INFORMATION All;
    /* [case] */ SAMPR_USER_INTERNAL3_INFORMATION Internal3;
    }	SAMPR_USER_INFO_BUFFER;

			/* size is 4 */
typedef /* [allocate][switch_type] */ union _SAMPR_USER_INFO_BUFFER __RPC_FAR *PSAMPR_USER_INFO_BUFFER;

			/* size is 36 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_USER
    {
    ULONG Index;
    ULONG Rid;
    ULONG AccountControl;
    SAMPR_RETURNED_STRING LogonName;
    SAMPR_RETURNED_STRING AdminComment;
    SAMPR_RETURNED_STRING FullName;
    }	SAMPR_DOMAIN_DISPLAY_USER;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_DOMAIN_DISPLAY_USER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_USER;

			/* size is 28 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_MACHINE
    {
    ULONG Index;
    ULONG Rid;
    ULONG AccountControl;
    SAMPR_RETURNED_STRING Machine;
    SAMPR_RETURNED_STRING Comment;
    }	SAMPR_DOMAIN_DISPLAY_MACHINE;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_DOMAIN_DISPLAY_MACHINE __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_MACHINE;

			/* size is 28 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_GROUP
    {
    ULONG Index;
    ULONG Rid;
    ULONG Attributes;
    SAMPR_RETURNED_STRING Group;
    SAMPR_RETURNED_STRING Comment;
    }	SAMPR_DOMAIN_DISPLAY_GROUP;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_DOMAIN_DISPLAY_GROUP __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_GROUP;

			/* size is 12 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_OEM_USER
    {
    ULONG Index;
    SAMPR_RETURNED_NORMAL_STRING OemUser;
    }	SAMPR_DOMAIN_DISPLAY_OEM_USER;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_DOMAIN_DISPLAY_OEM_USER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_OEM_USER;

			/* size is 12 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_OEM_GROUP
    {
    ULONG Index;
    SAMPR_RETURNED_NORMAL_STRING OemGroup;
    }	SAMPR_DOMAIN_DISPLAY_OEM_GROUP;

			/* size is 4 */
typedef /* [allocate] */ struct _SAMPR_DOMAIN_DISPLAY_OEM_GROUP __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_OEM_GROUP;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_USER_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_DOMAIN_DISPLAY_USER Buffer;
    }	SAMPR_DOMAIN_DISPLAY_USER_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_DISPLAY_USER_BUFFER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_USER_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_DOMAIN_DISPLAY_MACHINE Buffer;
    }	SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_DOMAIN_DISPLAY_GROUP Buffer;
    }	SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_GROUP_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_OEM_USER_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_DOMAIN_DISPLAY_OEM_USER Buffer;
    }	SAMPR_DOMAIN_DISPLAY_OEM_USER_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_DISPLAY_OEM_USER_BUFFER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_OEM_USER_BUFFER;

			/* size is 8 */
typedef struct  _SAMPR_DOMAIN_DISPLAY_OEM_GROUP_BUFFER
    {
    ULONG EntriesRead;
    /* [size_is] */ PSAMPR_DOMAIN_DISPLAY_OEM_GROUP Buffer;
    }	SAMPR_DOMAIN_DISPLAY_OEM_GROUP_BUFFER;

			/* size is 4 */
typedef struct _SAMPR_DOMAIN_DISPLAY_OEM_GROUP_BUFFER __RPC_FAR *PSAMPR_DOMAIN_DISPLAY_OEM_GROUP_BUFFER;

			/* size is 8 */
typedef /* [switch_type] */ union _SAMPR_DISPLAY_INFO_BUFFER
    {
    /* [case] */ SAMPR_DOMAIN_DISPLAY_USER_BUFFER UserInformation;
    /* [case] */ SAMPR_DOMAIN_DISPLAY_MACHINE_BUFFER MachineInformation;
    /* [case] */ SAMPR_DOMAIN_DISPLAY_GROUP_BUFFER GroupInformation;
    /* [case] */ SAMPR_DOMAIN_DISPLAY_OEM_USER_BUFFER OemUserInformation;
    /* [case] */ SAMPR_DOMAIN_DISPLAY_OEM_GROUP_BUFFER OemGroupInformation;
    }	SAMPR_DISPLAY_INFO_BUFFER;

			/* size is 4 */
typedef /* [switch_type] */ union _SAMPR_DISPLAY_INFO_BUFFER __RPC_FAR *PSAMPR_DISPLAY_INFO_BUFFER;

			/* size is 4 */
NTSTATUS SamrConnect( 
    /* [unique][in] */ PSAMPR_SERVER_NAME ServerName,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *ServerHandle,
    /* [in] */ ACCESS_MASK DesiredAccess);

			/* size is 4 */
NTSTATUS SamrCloseHandle( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *SamHandle);

			/* size is 4 */
NTSTATUS SamrSetSecurityObject( 
    /* [in] */ SAMPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PSAMPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor);

			/* size is 4 */
NTSTATUS SamrQuerySecurityObject( 
    /* [in] */ SAMPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PSAMPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor);

			/* size is 4 */
NTSTATUS SamrShutdownSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle);

			/* size is 4 */
NTSTATUS SamrLookupDomainInSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [out] */ PRPC_SID __RPC_FAR *DomainId);

			/* size is 4 */
NTSTATUS SamrEnumerateDomainsInSamServer( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned);

			/* size is 4 */
NTSTATUS SamrOpenDomain( 
    /* [in] */ SAMPR_HANDLE ServerHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ PRPC_SID DomainId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *DomainHandle);

			/* size is 4 */
NTSTATUS SamrQueryInformationDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][out] */ PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrSetInformationDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][in] */ PSAMPR_DOMAIN_INFO_BUFFER DomainInformation);

			/* size is 4 */
NTSTATUS SamrCreateGroupInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *GroupHandle,
    /* [out] */ PULONG RelativeId);

			/* size is 4 */
NTSTATUS SamrEnumerateGroupsInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned);

			/* size is 4 */
NTSTATUS SamrCreateUserInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle,
    /* [out] */ PULONG RelativeId);

			/* size is 4 */
NTSTATUS SamrEnumerateUsersInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [in] */ ULONG UserAccountControl,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned);

			/* size is 4 */
NTSTATUS SamrCreateAliasInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING AccountName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *AliasHandle,
    /* [out] */ PULONG RelativeId);

			/* size is 4 */
NTSTATUS SamrEnumerateAliasesInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [out][in] */ PSAM_ENUMERATE_HANDLE EnumerationContext,
    /* [out] */ PSAMPR_ENUMERATION_BUFFER __RPC_FAR *Buffer,
    /* [in] */ ULONG PreferedMaximumLength,
    /* [out] */ PULONG CountReturned);

			/* size is 4 */
NTSTATUS SamrGetAliasMembership( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PSAMPR_PSID_ARRAY SidArray,
    /* [out] */ PSAMPR_ULONG_ARRAY Membership);

			/* size is 4 */
NTSTATUS SamrLookupNamesInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ULONG Count,
    /* [length_is][size_is][in] */ RPC_UNICODE_STRING __RPC_FAR Names[  ],
    /* [out] */ PSAMPR_ULONG_ARRAY RelativeIds,
    /* [out] */ PSAMPR_ULONG_ARRAY Use);

			/* size is 4 */
NTSTATUS SamrLookupIdsInDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ULONG Count,
    /* [length_is][size_is][in] */ PULONG RelativeIds,
    /* [out] */ PSAMPR_RETURNED_USTRING_ARRAY Names,
    /* [out] */ PSAMPR_ULONG_ARRAY Use);

			/* size is 4 */
NTSTATUS SamrOpenGroup( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG GroupId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *GroupHandle);

			/* size is 4 */
NTSTATUS SamrQueryInformationGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ GROUP_INFORMATION_CLASS GroupInformationClass,
    /* [switch_is][out] */ PSAMPR_GROUP_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrSetInformationGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ GROUP_INFORMATION_CLASS GroupInformationClass,
    /* [switch_is][in] */ PSAMPR_GROUP_INFO_BUFFER Buffer);

			/* size is 4 */
NTSTATUS SamrAddMemberToGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId,
    /* [in] */ ULONG Attributes);

			/* size is 4 */
NTSTATUS SamrDeleteGroup( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *GroupHandle);

			/* size is 4 */
NTSTATUS SamrRemoveMemberFromGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId);

			/* size is 4 */
NTSTATUS SamrGetMembersInGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [out] */ PSAMPR_GET_MEMBERS_BUFFER __RPC_FAR *Members);

			/* size is 4 */
NTSTATUS SamrSetMemberAttributesOfGroup( 
    /* [in] */ SAMPR_HANDLE GroupHandle,
    /* [in] */ ULONG MemberId,
    /* [in] */ ULONG Attributes);

			/* size is 4 */
NTSTATUS SamrOpenAlias( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG AliasId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *AliasHandle);

			/* size is 4 */
NTSTATUS SamrQueryInformationAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ ALIAS_INFORMATION_CLASS AliasInformationClass,
    /* [switch_is][out] */ PSAMPR_ALIAS_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrSetInformationAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ ALIAS_INFORMATION_CLASS AliasInformationClass,
    /* [switch_is][in] */ PSAMPR_ALIAS_INFO_BUFFER Buffer);

			/* size is 4 */
NTSTATUS SamrDeleteAlias( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *AliasHandle);

			/* size is 4 */
NTSTATUS SamrAddMemberToAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PRPC_SID MemberId);

			/* size is 4 */
NTSTATUS SamrRemoveMemberFromAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [in] */ PRPC_SID MemberId);

			/* size is 4 */
NTSTATUS SamrGetMembersInAlias( 
    /* [in] */ SAMPR_HANDLE AliasHandle,
    /* [out] */ PSAMPR_PSID_ARRAY Members);

			/* size is 4 */
NTSTATUS SamrOpenUser( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG UserId,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle);

			/* size is 4 */
NTSTATUS SamrDeleteUser( 
    /* [out][in] */ SAMPR_HANDLE __RPC_FAR *UserHandle);

			/* size is 4 */
NTSTATUS SamrQueryInformationUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][out] */ PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrSetInformationUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][in] */ PSAMPR_USER_INFO_BUFFER Buffer);

			/* size is 4 */
NTSTATUS SamrChangePasswordUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ BOOLEAN LmPresent,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmOldEncryptedWithLmNew,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmNewEncryptedWithLmOld,
    /* [in] */ BOOLEAN NtPresent,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtOldEncryptedWithNtNew,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithNtOld,
    /* [in] */ BOOLEAN NtCrossEncryptionPresent,
    /* [unique][in] */ PENCRYPTED_NT_OWF_PASSWORD NtNewEncryptedWithLmNew,
    /* [in] */ BOOLEAN LmCrossEncryptionPresent,
    /* [unique][in] */ PENCRYPTED_LM_OWF_PASSWORD LmNtNewEncryptedWithNtNew);

			/* size is 4 */
NTSTATUS SamrGetGroupsForUser( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [out] */ PSAMPR_GET_GROUPS_BUFFER __RPC_FAR *Groups);

			/* size is 4 */
NTSTATUS SamrQueryDisplayInformation( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer);

			/* size is 4 */
NTSTATUS SamrGetDisplayEnumerationIndex( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ PRPC_UNICODE_STRING Prefix,
    /* [out] */ PULONG Index);

			/* size is 4 */
NTSTATUS SamrTestPrivateFunctionsDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle);

			/* size is 4 */
NTSTATUS SamrTestPrivateFunctionsUser( 
    /* [in] */ SAMPR_HANDLE UserHandle);

			/* size is 4 */
NTSTATUS SamrGetUserDomainPasswordInformation( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [out] */ PUSER_DOMAIN_PASSWORD_INFORMATION PasswordInformation);

			/* size is 4 */
NTSTATUS SamrRemoveMemberFromForeignDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_SID MemberSid);

			/* size is 4 */
NTSTATUS SamrQueryInformationDomain2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_INFORMATION_CLASS DomainInformationClass,
    /* [switch_is][out] */ PSAMPR_DOMAIN_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrQueryInformationUser2( 
    /* [in] */ SAMPR_HANDLE UserHandle,
    /* [in] */ USER_INFORMATION_CLASS UserInformationClass,
    /* [switch_is][out] */ PSAMPR_USER_INFO_BUFFER __RPC_FAR *Buffer);

			/* size is 4 */
NTSTATUS SamrQueryDisplayInformation2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer);

			/* size is 4 */
NTSTATUS SamrGetDisplayEnumerationIndex2( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ PRPC_UNICODE_STRING Prefix,
    /* [out] */ PULONG Index);

			/* size is 4 */
NTSTATUS SamrCreateUser2InDomain( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ ULONG AccountType,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ SAMPR_HANDLE __RPC_FAR *UserHandle,
    /* [out] */ PULONG GrantedAccess,
    /* [out] */ PULONG RelativeId);

			/* size is 4 */
NTSTATUS SamrQueryDisplayInformation3( 
    /* [in] */ SAMPR_HANDLE DomainHandle,
    /* [in] */ DOMAIN_DISPLAY_INFORMATION DisplayInformationClass,
    /* [in] */ ULONG Index,
    /* [in] */ ULONG EntryCount,
    /* [in] */ ULONG PreferredMaximumLength,
    /* [out] */ PULONG TotalAvailable,
    /* [out] */ PULONG TotalReturned,
    /* [switch_is][out] */ PSAMPR_DISPLAY_INFO_BUFFER Buffer);


extern handle_t samcli_handle;


extern RPC_IF_HANDLE samr_ClientIfHandle;
extern RPC_IF_HANDLE samr_ServerIfHandle;
#endif /* __samr_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER PSAMPR_SERVER_NAME_bind( PSAMPR_SERVER_NAME );
void __RPC_USER PSAMPR_SERVER_NAME_unbind( PSAMPR_SERVER_NAME, handle_t );

void __RPC_USER SAMPR_HANDLE_rundown( SAMPR_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
