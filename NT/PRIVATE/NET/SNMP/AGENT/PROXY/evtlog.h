//------------------------ MODULE DESCRIPTION ----------------------------
//
//  evtlog.mc
//
//  Copyright 1992 Technology Dynamics, Inc.
//
//  All Rights Reserved!!!
//
//     This source code is CONFIDENTIAL and PROPRIETARY to Technology
//     Dynamics. Unauthorized distribution, adaptation or use may be
//     subject to civil and criminal penalties.
//
//  All Rights Reserved!!!
//
//-------------------------------------------------------------------------
//
//  Event Logger Message definitions for the SNMP Service.
//
//  Project:  Implementation of an SNMP Agent for Microsoft's NT Kernel
//
//  $Revision:   1.0  $
//  $Date:   20 May 1992 20:14:02  $
//  $Author:   mlk  $
//
//  $Log:   N:/agent/proxy/vcs/evtlog.mcv  $
//
//    Rev 1.0   20 May 1992 20:14:02   mlk
// Initial revision.
//
//    Rev 1.3   29 Apr 1992 19:12:12   mlk
// Cleanup.
//
//    Rev 1.2   24 Apr 1992 10:36:54   mlk
// Fixed vcs again.
//
//    Rev 1.1   24 Apr 1992 10:35:32   mlk
// Fixed vcs comments.
//
//    Rev 1.0   23 Apr 1992 17:49:24   mlk
// Initial revision.
//
//-------------------------------------------------------------------------
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
// MessageId: MSG_SNMP_SERVICE_STARTING
//
// MessageText:
//
//  SNMP service STARTING...
//
#define MSG_SNMP_SERVICE_STARTING        0x000003E8L

//
// MessageId: MSG_SNMP_SERVICE_STARTED
//
// MessageText:
//
//  SNMP service STARTED.
//
#define MSG_SNMP_SERVICE_STARTED         0x000003E9L

//
// MessageId: MSG_SNMP_SERVICE_STOPPING
//
// MessageText:
//
//  SNMP service STOPPING...
//
#define MSG_SNMP_SERVICE_STOPPING        0x000003EAL

//
// MessageId: MSG_SNMP_SERVICE_STOPPED
//
// MessageText:
//
//  SNMP service STOPPED.
//
#define MSG_SNMP_SERVICE_STOPPED         0x000003EBL

//
// MessageId: MSG_SNMP_STATE_CHANGE
//
// MessageText:
//
//  SNMP service state changed to %1.
//
#define MSG_SNMP_STATE_CHANGE            0x000003ECL

//
// MessageId: MSG_SNMP_RECOVERABLE_ERROR
//
// MessageText:
//
//  SNMP service encountered a recoverable error.
//
#define MSG_SNMP_RECOVERABLE_ERROR       0x0000044CL

//
// MessageId: MSG_SNMP_FATAL_ERROR
//
// MessageText:
//
//  SNMP service encountered a fatal error.
//
#define MSG_SNMP_FATAL_ERROR             0x0000044DL

//
// MessageId: MSG_SNMP_INVALID_TRAPDEST_ERROR
//
// MessageText:
//
//  SNMP service configured with an invalid trap destination %1.
//
#define MSG_SNMP_INVALID_TRAPDEST_ERROR  0x0000044EL

//
// MessageId: MSG_SNMP_BAD_PLATFORM
//
// MessageText:
//
//  SNMP service only runs on NT Daytona and Chicago.
//
#define MSG_SNMP_BAD_PLATFORM            0x0000044FL

// this MessageId must match definition in snmp.c
//
// MessageId: MSG_SNMP_DEBUG_TRACE
//
// MessageText:
//
//  SNMP service debug trace:
//    %1
//
#define MSG_SNMP_DEBUG_TRACE             0x000007CFL

//------------------------------ END --------------------------------------
