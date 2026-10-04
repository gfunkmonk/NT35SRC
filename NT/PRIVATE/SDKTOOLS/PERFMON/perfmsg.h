/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992-1994  Microsoft Corporation

Module Name:

    perfmsg.h
       (generated from perfmsg.mc)

Abstract:

   Event message definititions used by routines in PERFMON.EXE

Created:

    19-Nov-1993  Hon-Wah Chan

Revision History:

--*/
//
//     Perfutil messages
//
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
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: MSG_ALERT_OCCURRED
//
// MessageText:
//
//  An Alert condition has occurred on Computer: %1!s! ; Object:   %2!s! ;
//   Counter:  %3!s! ; Instance: %4!s! ; Parent:   %5!s! ; Value:    %6!s! ;
//   Trigger:  %7!s!
//
#define MSG_ALERT_OCCURRED               ((DWORD)0x400007D0L)

//
// MessageId: MSG_ALERT_SYSTEM
//
// MessageText:
//
//  Monitoring Alert on Computer %1!s! - %2!s!
//
#define MSG_ALERT_SYSTEM                 ((DWORD)0x400007D1L)

