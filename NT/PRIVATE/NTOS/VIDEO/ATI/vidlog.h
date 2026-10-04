/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992, 1993  Microsoft Corporation

Module Name:

    ntiologc.h

Abstract:

    Constant definitions for the I/O error code log values.

Revision History:

--*/

#ifndef _VIDLOG_
#define _VIDLOG_

//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
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
//      Facility - is the facility code
//
//      Code - is the facility's status code
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
#define FACILITY_VIDEO_ERROR_CODE        0x101
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: VID_SMALL_BUFFER
//
// MessageText:
//
//  Insufficient buffer size, unable to proceed.
//
#define VID_SMALL_BUFFER                 ((VP_STATUS)0xC1010001L)

//
// MessageId: VID_CANT_MAP
//
// MessageText:
//
//  Unable to map required address ranges for graphics card.
//
#define VID_CANT_MAP                     ((VP_STATUS)0xC1010002L)

//
// MessageId: VID_QUERY_FAIL
//
// MessageText:
//
//  Unable to obtain configuration information for graphics card.
//
#define VID_QUERY_FAIL                   ((VP_STATUS)0xC1010003L)

//
// MessageId: VID_LFB_CONFLICT
//
// MessageText:
//
//  LFB Aperture conflict, disabling aperture.
//
#define VID_LFB_CONFLICT                 ((VP_STATUS)0x81010004L)

//
// MessageId: VID_ATIOEM_UNUSED
//
// MessageText:
//
//  The ATIOEM registry entry was found but was not used to configure the adapter.
//  The registry entry is either obsolete or invalid.
//
#define VID_ATIOEM_UNUSED                ((VP_STATUS)0x41010005L)

#endif /* _NTIOLOGC_ */
