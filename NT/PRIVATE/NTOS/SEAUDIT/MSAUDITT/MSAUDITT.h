/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1991  Microsoft Corporation

Module Name:

    msauditt.mc

Abstract:

    Constant definitions for the NT Audit Event Messages.

Author:

    Jim Kelly (JimK) 30-Mar-1992

Revision History:

Notes:

    The .h and .res forms of this file are generated from the .mc
    form of the file (private\ntos\seaudit\msauditt\msauditt.mc).  Please make
    all changes to the .mc form of the file.



--*/

#ifndef _MSAUDITT_
#define _MSAUDITT_

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
//        Type:  SE_ADT_SUCCESSFUL_LOGON
//
// Parameter Strings:
//
//      String1 - Description
//
//
// MessageId: SE_ADT_SUCCESSFUL_LOGON
//
// MessageText:
//
//  Successful Logon -
//               Successful Logon
//
#define SE_ADT_SUCCESSFUL_LOGON          ((ULONG)0x00000001L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_UNSUCCESSFUL_LOGON
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
//
// MessageId: SE_ADT_UNSUCCESSFUL_LOGON
//
// MessageText:
//
//  Failed Logon -
//               Unsuccessful Logon
//
#define SE_ADT_UNSUCCESSFUL_LOGON        ((ULONG)0x00000002L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SUCCESSFUL_OBJECT_OPEN
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
//
// MessageId: SE_ADT_SUCCESSFUL_OBJECT_OPEN
//
// MessageText:
//
//  Successful Object Open -
//          Successful Object Open
//
#define SE_ADT_SUCCESSFUL_OBJECT_OPEN    ((ULONG)0x00000003L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_UNSUCCESSFUL_OBJECT_OPEN
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
//
// MessageId: SE_ADT_UNSUCCESSFUL_OBJECT_OPEN
//
// MessageText:
//
//  Unsuccessful Object Open -
//          Unsuccessful Object Open
//
#define SE_ADT_UNSUCCESSFUL_OBJECT_OPEN  ((ULONG)0x00000004L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SYSTEM_RESTART
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_SYSTEM_RESTART
//
// MessageText:
//
//  System has been rebooted -
//          System has been rebooted
//
#define SE_ADT_SYSTEM_RESTART            ((ULONG)0x00000005L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_HANDLE_ALLOCATION
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_HANDLE_ALLOCATION
//
// MessageText:
//
//  A handle has been allocated
//          A handle has been allocated
//
#define SE_ADT_HANDLE_ALLOCATION         ((ULONG)0x00000006L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SUCC_PRIV_SERVICE
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
// MessageId: SE_ADT_SUCC_PRIV_SERVICE
//
// MessageText:
//
//  A privilege was successfully used in a system service
//          A privilege was successfully used in a system service
//  
//
#define SE_ADT_SUCC_PRIV_SERVICE         ((ULONG)0x00000007L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_FAILED_PRIV_SERVICE
//
//
// Parameter Strings:
//
//
//
//
// MessageId: SE_ADT_FAILED_PRIV_SERVICE
//
// MessageText:
//
//  A privilege check in a system service failed
//          A privilege check in a system service failed
//  
//
#define SE_ADT_FAILED_PRIV_SERVICE       ((ULONG)0x00000008L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SUCC_PRIV_OBJECT
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_SUCC_PRIV_OBJECT
//
// MessageText:
//
//  An attempt to access a privileged object succeeded
//          An attempt to access a privileged object succeeded
//  
//
#define SE_ADT_SUCC_PRIV_OBJECT          ((ULONG)0x00000009L)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_FAILED_PRIV_OBJECT
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_FAILED_PRIV_OBJECT
//
// MessageText:
//
//  An attempt to access a privileged object failed
//          An attempt to access a privileged object failed
//  
//
#define SE_ADT_FAILED_PRIV_OBJECT        ((ULONG)0x0000000AL)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SUCC_PRIV_SERVICE
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_SUCC_PRIV_SERVICE
//
// MessageText:
//
//  An attempt to execute a privileged service succeeded.
//          An attempt to execute a privileged service succeeded.
//  
//
#define SE_ADT_SUCC_PRIV_SERVICE         ((ULONG)0x0000000BL)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_OBJECT_CLOSE
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_OBJECT_CLOSE
//
// MessageText:
//
//  An object was closed
//          An object was closed
//  
//
#define SE_ADT_OBJECT_CLOSE              ((ULONG)0x0000000CL)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SUCC_OBJECT_REFERENCE
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_SUCC_OBJECT_REFERENCE
//
// MessageText:
//
//  A named object was accessed but no handle was created
//          A named object was accessed but no handle was created
//  
//
#define SE_ADT_SUCC_OBJECT_REFERENCE     ((ULONG)0x0000000DL)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_FAILED_OBJECT_REFERENCE
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_FAILED_OBJECT_REFERENCE
//
// MessageText:
//
//  An attempt to reference a named object was denied
//          An attempt to reference a named object was denied
//  
//
#define SE_ADT_FAILED_OBJECT_REFERENCE   ((ULONG)0x0000000EL)

////////////////////////////////////////////////
//
//        Type:  SE_ADT_SHUTDOWN
//
//
// Parameter Strings:
//
//      String1 - Description
//
//
//
// MessageId: SE_ADT_SHUTDOWN
//
// MessageText:
//
//  The system was shut down.
//          The system was shut down.
//  
//
#define SE_ADT_SHUTDOWN                  ((ULONG)0x0000000EL)

/*lint +e767 */  // Resume checking for different macro definitions // winnt


#endif // _MSAUDITT_
