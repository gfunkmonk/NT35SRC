/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

    ntaudit.mc

Abstract:

    Constant definitions for the NT Audit Event Messages.

Author:

    Jim Kelly (JimK) 30-Mar-1992

Revision History:

Notes:

    The .h and .res forms of this file are generated from the .mc
    form of the file (private\ntos\se\nls\ntaudit.mc).  Please make
    all changes to the .mc form of the file.



--*/

#ifndef _NTAUDIT_
#define _NTAUDIT_

/*lint -e767 */  // Don't complain about different definitions // winnt
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: 0x00000000L (No symbolic name defined)
//
// MessageText:
//
//  Unused message ID
//


// Message ID 0 is unused - just used to flush out the diagram

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// Logon Messages Follow                                               //
//                                                                     //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////
//
//   Module Catagory:  SE_ADT_SUCCESSFUL_LOGON
//
//        Event Type:  Successful Logon
//
// Parameter Strings:
//
//      String1 - User name
//
//      String2 - LogonSessionLuid.HighPart (32-bit value)
//
//      String3 - LogonSessionLuid.LowPart (32-bit value)
//
//
// MessageId: SE_EVENTID_SUCCESSFUL_LOGON
//
// MessageText:
//
//  Successful Logon -
//               User: %S
//               Logon session ID: {%ld,%ld}.
//
#define SE_EVENTID_SUCCESSFUL_LOGON      ((ULONG)0x00000001L)

////////////////////////////////////////////////
//
//   Module Catagory:  SE_ADT_UNSUCCESSFUL_LOGON
//
//        Event Type:  Unknown user/password logon attempt
//
// Parameter Strings:
//
//      String1 - User name
//
//
//
//
// MessageId: SE_EVENTID_UNKNOWN_USER_OR_PWD
//
// MessageText:
//
//  Failed Logon -
//               User: %S
//               Reason: Unknown user name or password.
//
#define SE_EVENTID_UNKNOWN_USER_OR_PWD   ((ULONG)0x00000002L)

////////////////////////////////////////////////
//
//   Module Catagory:  SE_ADT_UNSUCCESSFUL_LOGON
//
//        Event Type:  Time restriction logon failure
//
// Parameter Strings:
//
//      String1 - User name
//
//
//
//
// MessageId: SE_EVENTID_ACCOUNT_TIME_RESTR
//
// MessageText:
//
//  Failed Logon -
//               User: %S
//               Reason: Account time restriction violation.
//
#define SE_EVENTID_ACCOUNT_TIME_RESTR    ((ULONG)0x00000003L)

////////////////////////////////////////////////
//
//   Module Catagory:  SE_ADT_UNSUCCESSFUL_LOGON
//
//        Event Type:  Account Disabled
//
// Parameter Strings:
//
//      String1 - User name
//
//
//
//
// MessageId: SE_EVENTID_ACCOUNT_DISABLED
//
// MessageText:
//
//  Failed Logon -
//               User: %S
//               Reason: Account Disabled.
//
#define SE_EVENTID_ACCOUNT_DISABLED      ((ULONG)0x00000004L)

/*lint +e767 */  // Resume checking for different macro definitions // winnt


#endif // _NTAUDIT_
