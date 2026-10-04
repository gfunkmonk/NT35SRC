/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1990  Microsoft Corporation

Module Name:

    msg.h

Abstract:

    This file contains the message definitions for the Win32 Cntfs
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
// MessageId: CNTFS_OK
//
// MessageText:
//
//  [OK]
//
#define CNTFS_OK                         0x00000001L

//
// MessageId: CNTFS_ERR
//
// MessageText:
//
//  [ERR]
//
#define CNTFS_ERR                        0x00000002L

//
// MessageId: CNTFS_LIST_CDIR
//
// MessageText:
//
//  
//   Listing of %1 [Compress new files]
//  
//
#define CNTFS_LIST_CDIR                  0x00000006L

//
// MessageId: CNTFS_LIST_UDIR
//
// MessageText:
//
//  
//   Listing of %1 [Do not compress new files]
//  
//
#define CNTFS_LIST_UDIR                  0x00000007L

//
// MessageId: CNTFS_LIST_SUMMARY
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
#define CNTFS_LIST_SUMMARY               0x00000008L

//
// MessageId: CNTFS_COMPRESS_DIR
//
// MessageText:
//
//  
//   Setting the directory %1 to compress new files %0
//  
//
#define CNTFS_COMPRESS_DIR               0x00000009L

//
// MessageId: CNTFS_COMPRESS_CDIR
//
// MessageText:
//
//  
//   Compress files within %1 [Compress new files]
//  
//
#define CNTFS_COMPRESS_CDIR              0x0000000AL

//
// MessageId: CNTFS_COMPRESS_UDIR
//
// MessageText:
//
//  
//   Compress files within %1 [Do not compress new files]
//  
//
#define CNTFS_COMPRESS_UDIR              0x0000000BL

//
// MessageId: CNTFS_COMPRESS_SUMMARY
//
// MessageText:
//
//  
//  %1 files within %2 directories were compressed.
//  %3 bytes are being used to store %4 total bytes of data.
//  The data occupies %5%% of its uncompressed size.
//  
//
#define CNTFS_COMPRESS_SUMMARY           0x0000000CL

//
// MessageId: CNTFS_UNCOMPRESS_DIR
//
// MessageText:
//
//  
//   Setting the directory %1 to not compress new files %0
//  
//
#define CNTFS_UNCOMPRESS_DIR             0x0000000DL

//
// MessageId: CNTFS_UNCOMPRESS_CDIR
//
// MessageText:
//
//  
//   Uncompress files within %1 [Compress new files]
//  
//
#define CNTFS_UNCOMPRESS_CDIR            0x0000000EL

//
// MessageId: CNTFS_UNCOMPRESS_UDIR
//
// MessageText:
//
//  
//   Uncompress files within %1 [Do not compress new files]
//  
//
#define CNTFS_UNCOMPRESS_UDIR            0x0000000FL

//
// MessageId: CNTFS_UNCOMPRESS_SUMMARY
//
// MessageText:
//
//  
//  %1 files within %2 directories were uncompressed.
//  
//
#define CNTFS_UNCOMPRESS_SUMMARY         0x00000010L

//
// MessageId: CNTFS_USAGE
//
// MessageText:
//
//  Displays and alters the compression of files or directories.
//  
//  CNTFS [/C | /U] [/S] [/I] [/L] [filename [...]]
//  
//    /C        Compresses the specified directory or file.
//    /U        Uncompress the specified directory or file.
//    /S        Performs the specified operation on
//              the current directory and all subdirectories.
//    /I        Ignore errors.
//    /L        Display the compression state of the specified
//              directory or files.
//    filename  Specifies the file or directory.
//  
//    Used without parameters, CNTFS displays the compression state of
//    the current directory. You may use multiple filenames and
//    wildcard.
//  
//
#define CNTFS_USAGE                      0x00000032L

