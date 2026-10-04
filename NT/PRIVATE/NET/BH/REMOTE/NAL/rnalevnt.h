//=============================================================================
//  Microsoft (R) Bloodhound (tm). Copyright (C) 1991-1993.
//
//  MODULE: rnal.c
//
//  Modification History
//
//  tonyci       01 Nov 93    Created
//=============================================================================
//
#ifndef _RNALEVNT_
#define _RNALEVNT_
//
// No FacilityNames
//
//     RNAL messages 1-100 are informational
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
#define RNALERR_SEVERITY_WARNING         0x2
#define RNALERR_SEVERITY_SUCCESS         0x0
#define RNALERR_SEVERITY_INFO            0x1
#define RNALERR_SEVERITY_ERROR           0x3


//
// MessageId: AGENT_STARTED
//
// MessageText:
//
//  The Network Monitoring Agent service has successfully started.
//
#define AGENT_STARTED                    ((DWORD)0x40000001L)

//
//
// MessageId: AGENT_STOPPED
//
// MessageText:
//
//  The Network Monitoring Agent service has successfully stopped.
//
#define AGENT_STOPPED                    ((DWORD)0x40000002L)

//
//
// MessageId: MANAGER_CONNECTED
//
// MessageText:
//
//  The Network Monitoring Manager %1 has connected.
//
#define MANAGER_CONNECTED                ((DWORD)0x40000003L)

//
//
// MessageId: MANAGER_INTENTIONALLY_DISCONNECTED
//
// MessageText:
//
//  The Network Monitoring Manager has disconnected.  The currently pending capture operation is continuing.
//
#define MANAGER_INTENTIONALLY_DISCONNECTED ((DWORD)0x40000004L)

//
//
// MessageId: MANAGER_UNINTENTIONALLY_DISCONNECTED
//
// MessageText:
//
//  The Network Monitoring Manager has disconnected.  Any currently pending operations have been stopped.
//
#define MANAGER_UNINTENTIONALLY_DISCONNECTED ((DWORD)0x40000005L)

//
// RNAL messages 200 - 300 are errors
//
//
//
// MessageId: AGENT_0_NETWORKS_FOUND
//
// MessageText:
//
//  The Network Monitoring Agent has failed to start.  The Agent found no local network drivers bound to Network Monitoring, or Network Monitoring is not correctly installed.
//
#define AGENT_0_NETWORKS_FOUND           ((DWORD)0xC00000C8L)

//
//
// MessageId: AGENT_REGISTRATION_FAILED
//
// MessageText:
//
//  The Network Monitoring Agent has failed to start.  The Agent failed registration.  The return code is %1.
//
#define AGENT_REGISTRATION_FAILED        ((DWORD)0xC00000C9L)

//
//
// MessageId: AGENT_NO_AGENTPROC
//
// MessageText:
//
//  The Network Monitoring Agent has failed to start.  The Network Monitoring Agent failed to find the NalAgent() entrypoint in RNAL.DLL.
//
#define AGENT_NO_AGENTPROC               ((DWORD)0xC00000CAL)

//
//
// MessageId: RNAL_NO_NETBIOS
//
// MessageText:
//
//  Both the Network Monitoring Agent and the Network Monitoring Manager require that NetBIOS be bound and active.  NetBIOS was either not found or is not active on this machine.
//
#define RNAL_NO_NETBIOS                  ((DWORD)0xC00000CBL)

//
#endif // _RNALEVNT.H_
