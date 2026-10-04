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
// MessageId: MSG_UNKNOWN_FLAG
//
// MessageText:
//
//  posix: unknown flag %1
//
#define MSG_UNKNOWN_FLAG                 0x00000001L

//
// MessageId: MSG_USAGE
//
// MessageText:
//
//  usage: posix /c <path> [<args>]
//
#define MSG_USAGE                        0x00000002L

//
// MessageId: MSG_COMMAND_MISSING
//
// MessageText:
//
//  posix: command missing
//
#define MSG_COMMAND_MISSING              0x00000003L

//
// MessageId: MSG_CANNOT_CONNECT
//
// MessageText:
//
//  posix: cannot connect to posix subsystem
//
#define MSG_CANNOT_CONNECT               0x00000004L

//
// MessageId: MSG_CANNOT_START_PROC
//
// MessageText:
//
//  posix: cannot start process
//
#define MSG_CANNOT_START_PROC            0x00000005L

