/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1990  Microsoft Corporation

Module Name:

    msg.h

Abstract:

    This file contains the message definitions for the Win32 Compact
    utility.

Author:

    Gary Kimura        [garyki]        13-Jan-1994

Revision History:

--*/

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
// MessageId: COMPACT_OK
//
// MessageText:
//
//  [OK]
//
#define COMPACT_OK                       0x00000001L

//
// MessageId: COMPACT_ERR
//
// MessageText:
//
//  [ERR]
//
#define COMPACT_ERR                      0x00000002L

//
// MessageId: COMPACT_LIST_CDIR
//
// MessageText:
//
//  
//   Listing of %1 [Compress new files]
//  
//
#define COMPACT_LIST_CDIR                0x00000006L

//
// MessageId: COMPACT_LIST_UDIR
//
// MessageText:
//
//  
//   Listing of %1 [Do not compress new files]
//  
//
#define COMPACT_LIST_UDIR                0x00000007L

//
// MessageId: COMPACT_LIST_SUMMARY
//
// MessageText:
//
//  
//  Of %1 files within %2 directories
//  %3 are compressed and %4 and not compressed.
//  %5 bytes are being used to store %6 total bytes of data.
//  The data occupies %7%% of its uncompressed size.
//  
//
#define COMPACT_LIST_SUMMARY             0x00000008L

//
// MessageId: COMPACT_COMPRESS_DIR
//
// MessageText:
//
//  
//   Setting the directory %1 to compress new files %0
//  
//
#define COMPACT_COMPRESS_DIR             0x00000009L

//
// MessageId: COMPACT_COMPRESS_CDIR
//
// MessageText:
//
//  
//   Compress files within %1 [Compress new files]
//  
//
#define COMPACT_COMPRESS_CDIR            0x0000000AL

//
// MessageId: COMPACT_COMPRESS_UDIR
//
// MessageText:
//
//  
//   Compress files within %1 [Do not compress new files]
//  
//
#define COMPACT_COMPRESS_UDIR            0x0000000BL

//
// MessageId: COMPACT_COMPRESS_SUMMARY
//
// MessageText:
//
//  
//  %1 files within %2 directories were compressed.
//  %3 bytes are being used to store %4 total bytes of data.
//  The data occupies %5%% of its uncompressed size.
//  
//
#define COMPACT_COMPRESS_SUMMARY         0x0000000CL

//
// MessageId: COMPACT_UNCOMPRESS_DIR
//
// MessageText:
//
//  
//   Setting the directory %1 to not compress new files %0
//  
//
#define COMPACT_UNCOMPRESS_DIR           0x0000000DL

//
// MessageId: COMPACT_UNCOMPRESS_CDIR
//
// MessageText:
//
//  
//   Uncompress files within %1 [Compress new files]
//  
//
#define COMPACT_UNCOMPRESS_CDIR          0x0000000EL

//
// MessageId: COMPACT_UNCOMPRESS_UDIR
//
// MessageText:
//
//  
//   Uncompress files within %1 [Do not compress new files]
//  
//
#define COMPACT_UNCOMPRESS_UDIR          0x0000000FL

//
// MessageId: COMPACT_UNCOMPRESS_SUMMARY
//
// MessageText:
//
//  
//  %1 files within %2 directories were uncompressed.
//  
//
#define COMPACT_UNCOMPRESS_SUMMARY       0x00000010L

//
// MessageId: COMPACT_USAGE
//
// MessageText:
//
//  Displays and alters the compression of files or directories.
//  
//  COMPACT [/C | /U] [/S] [/I] [/L] [filename [...]]
//  
//    /C        Compresses the specified directory or file.
//    /U        Uncompress the specified directory or file.
//    /S        Performs the specified operation on
//              the current directory and all subdirectories.
//    /I        Ignore errors.
//    /F        Force the operation to compress or uncompress
//              the specified directory or file.
//    /L        Display the compression state of the specified
//              directory or files.
//    filename  Specifies the file or directory.
//  
//    Used without parameters, COMPACT displays the compression state of
//    the current directory. You may use multiple filenames and
//    wildcard.
//  
//
#define COMPACT_USAGE                    0x00000032L

