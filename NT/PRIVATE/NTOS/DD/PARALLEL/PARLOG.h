/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992, 1993  Microsoft Corporation

Module Name:

    ntiologc.h

Abstract:

    Constant definitions for the I/O error code log values.

Author:

    Tony Ercolano (Tonye) 12-23-1992

Revision History:

--*/

#ifndef _PARLOG_
#define _PARLOG_

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
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_PARALLEL_ERROR_CODE     0x7
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: PAR_UNREPORTED_IRQL_CONFLICT
//
// MessageText:
//
//  Another driver on the system, which did not report its resources, has already claimed the interrupt used by %1.
//  The driver will switch this port from interrupt driven to poll driven.
//
#define PAR_UNREPORTED_IRQL_CONFLICT     ((NTSTATUS)0x80070001L)

//
// MessageId: PAR_REPORTED_IRQL_CONFLICT
//
// MessageText:
//
//  Another driver on the system has already claimed the interrupt used by %1.
//  The driver will switch this port from interrupt driven to poll driven.
//
#define PAR_REPORTED_IRQL_CONFLICT       ((NTSTATUS)0x40070002L)

//
// MessageId: PAR_INSUFFICIENT_RESOURCES
//
// MessageText:
//
//  Not enough memory was available to allocate internal storage needed for the device %1.
//
#define PAR_INSUFFICIENT_RESOURCES       ((NTSTATUS)0xC0070003L)

//
// MessageId: PAR_REGISTERS_NOT_MAPPED
//
// MessageText:
//
//  The hardware locations for %1 could not be translated to something the memory management system could understand.
//
#define PAR_REGISTERS_NOT_MAPPED         ((NTSTATUS)0xC0070004L)

//
// MessageId: PAR_ADDRESS_CONFLICT
//
// MessageText:
//
//  The hardware addresses for %1 are already in use by another device.
//
#define PAR_ADDRESS_CONFLICT             ((NTSTATUS)0xC0070005L)

//
// MessageId: PAR_NOT_ENOUGH_CONFIG_INFO
//
// MessageText:
//
//  Some firmware configuration information was incomplete.
//
#define PAR_NOT_ENOUGH_CONFIG_INFO       ((NTSTATUS)0xC0070006L)

//
// MessageId: PAR_NO_PARAMETERS_INFO
//
// MessageText:
//
//  No Parameters subkey was found for user defined data.  This is odd, and it also means no user configuration can be found.
//
#define PAR_NO_PARAMETERS_INFO           ((NTSTATUS)0xC0070007L)

//
// MessageId: PAR_UNABLE_TO_ACCESS_CONFIG
//
// MessageText:
//
//  Specific user configuration data is unretrievable.
//
#define PAR_UNABLE_TO_ACCESS_CONFIG      ((NTSTATUS)0xC0070008L)

//
// MessageId: PAR_UNKNOWN_BUS
//
// MessageText:
//
//  The bus type for the port is not recognizable.
//
#define PAR_UNKNOWN_BUS                  ((NTSTATUS)0xC0070009L)

//
// MessageId: PAR_BUS_NOT_PRESENT
//
// MessageText:
//
//  The bus type for the port is not available on this computer.
//
#define PAR_BUS_NOT_PRESENT              ((NTSTATUS)0xC007000AL)

//
// MessageId: PAR_BUS_INTERRUPT_CONFLICT
//
// MessageText:
//
//  The bus specified for the port does not support the specified method of interrupt.
//
#define PAR_BUS_INTERRUPT_CONFLICT       ((NTSTATUS)0xC007000BL)

//
// MessageId: PAR_INVALID_USER_CONFIG
//
// MessageText:
//
//  User configuration data does not contain all required information.
//
#define PAR_INVALID_USER_CONFIG          ((NTSTATUS)0xC007000CL)

//
// MessageId: PAR_USER_OVERRIDE
//
// MessageText:
//
//  User configuration data is overriding firmware configuration data.
//
#define PAR_USER_OVERRIDE                ((NTSTATUS)0x4007000DL)

//
// MessageId: PAR_DEVICE_TOO_HIGH
//
// MessageText:
//
//  The user specified port is way too high in physical memory.
//
#define PAR_DEVICE_TOO_HIGH              ((NTSTATUS)0xC007000EL)

//
// MessageId: PAR_CONTROL_OVERLAP
//
// MessageText:
//
//  The control registers for the port overlaps with a previous ports control registers.
//
#define PAR_CONTROL_OVERLAP              ((NTSTATUS)0xC007000FL)

//
// MessageId: PAR_NO_SYMLINK_CREATED
//
// MessageText:
//
//  Unable to create the symbolic link for %1.
//
#define PAR_NO_SYMLINK_CREATED           ((NTSTATUS)0x80070010L)

//
// MessageId: PAR_NO_DEVICE_MAP_CREATED
//
// MessageText:
//
//  Unable to create the device map entry for %1.
//
#define PAR_NO_DEVICE_MAP_CREATED        ((NTSTATUS)0x80070011L)

//
// MessageId: PAR_NO_DEVICE_MAP_DELETED
//
// MessageText:
//
//  Unable to delete the device map entry for %1.
//
#define PAR_NO_DEVICE_MAP_DELETED        ((NTSTATUS)0x80070012L)

//
// MessageId: PAR_DISABLED_PORT
//
// MessageText:
//
//  Disabling port %1 as requested by the configuration data.
//
#define PAR_DISABLED_PORT                ((NTSTATUS)0x40070013L)

//
// MessageId: PAR_INTERRUPT_STORM
//
// MessageText:
//
//  Disabling port %1 interrupts because we were being blasted by unexpected interrupts.
//
#define PAR_INTERRUPT_STORM              ((NTSTATUS)0xC0070014L)

#endif /* _NTIOLOGC_ */
