/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1990  Microsoft Corporation

Module Name:

    rtmsg.h

Abstract:

    This file contains the message definitions for the Win32 utilities
    library.

Author:

    Norbert P. Kusters (norbertk) 2-Apr-1991

Revision History:

--*/
//----------------------
//
// DOS 5 chkdsk message.
//
//----------------------
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
// MessageId: MSG_CONVERT_LOST_CHAINS
//
// MessageText:
//
//  Convert lost chains to files (Y/N)? %0
//
#define MSG_CONVERT_LOST_CHAINS          0x000003E8L

//
// MessageId: MSG_CHK_ERROR_IN_DIR
//
// MessageText:
//
//  Unrecoverable error in directory %1
//
#define MSG_CHK_ERROR_IN_DIR             0x000003E9L

//
// MessageId: MSG_CHK_CONVERT_DIR_TO_FILE
//
// MessageText:
//
//  Convert directory to file (Y/N)? %0
//
#define MSG_CHK_CONVERT_DIR_TO_FILE      0x000003EAL

//
// MessageId: MSG_TOTAL_DISK_SPACE
//
// MessageText:
//
//  
//  %1 bytes total disk space.
//
#define MSG_TOTAL_DISK_SPACE             0x000003EBL

//
// MessageId: MSG_BAD_SECTORS
//
// MessageText:
//
//  %1 bytes in bad sectors.
//
#define MSG_BAD_SECTORS                  0x000003ECL

//
// MessageId: MSG_HIDDEN_FILES
//
// MessageText:
//
//  %1 bytes in %2 hidden files.
//
#define MSG_HIDDEN_FILES                 0x000003EDL

//
// MessageId: MSG_DIRECTORIES
//
// MessageText:
//
//  %1 bytes in %2 directories.
//
#define MSG_DIRECTORIES                  0x000003EEL

//
// MessageId: MSG_USER_FILES
//
// MessageText:
//
//  %1 bytes in %2 user files.
//
#define MSG_USER_FILES                   0x000003EFL

//
// MessageId: MSG_RECOVERED_FILES
//
// MessageText:
//
//  %1 bytes in %2 recovered files.
//
#define MSG_RECOVERED_FILES              0x000003F0L

//
// MessageId: MSG_WOULD_BE_RECOVERED_FILES
//
// MessageText:
//
//  %1 bytes would be in %2 recovered files.
//
#define MSG_WOULD_BE_RECOVERED_FILES     0x000003F1L

//
// MessageId: MSG_AVAILABLE_DISK_SPACE
//
// MessageText:
//
//  %1 bytes available on disk.
//
#define MSG_AVAILABLE_DISK_SPACE         0x000003F2L

//
// MessageId: MSG_TOTAL_MEMORY
//
// MessageText:
//
//  %1 total bytes memory.
//
#define MSG_TOTAL_MEMORY                 0x000003F3L

//
// MessageId: MSG_AVAILABLE_MEMORY
//
// MessageText:
//
//  %1 bytes free.
//
#define MSG_AVAILABLE_MEMORY             0x000003F4L

//
// MessageId: MSG_CHK_CANT_NETWORK
//
// MessageText:
//
//  Cannot CHKDSK a network drive.
//
#define MSG_CHK_CANT_NETWORK             0x000003F5L

//
// MessageId: MSG_1014
//
// MessageText:
//
//  Cannot CHKDSK a SUBSTed or ASSIGNed drive.
//
#define MSG_1014                         0x000003F6L

//
// MessageId: MSG_PROBABLE_NON_DOS_DISK
//
// MessageText:
//
//  Probable non-Windows NT disk
//  Continue (Y/N)? %0
//
#define MSG_PROBABLE_NON_DOS_DISK        0x000003F7L

//
// MessageId: MSG_DISK_ERROR_READING_FAT
//
// MessageText:
//
//  Disk error reading FAT %1
//
#define MSG_DISK_ERROR_READING_FAT       0x000003F8L

//
// MessageId: MSG_DIRECTORY
//
// MessageText:
//
//  Directory %1.
//
#define MSG_DIRECTORY                    0x000003F9L

//
// MessageId: MSG_CONTIGUITY_REPORT
//
// MessageText:
//
//  %1 Contains %2 non-contiguous blocks.
//
#define MSG_CONTIGUITY_REPORT            0x000003FAL

//
// MessageId: MSG_ALL_FILES_CONTIGUOUS
//
// MessageText:
//
//  All specified file(s) are contiguous.
//
#define MSG_ALL_FILES_CONTIGUOUS         0x000003FBL

//
// MessageId: MSG_CORRECTIONS_WILL_NOT_BE_WRITTEN
//
// MessageText:
//
//  Errors found, F parameter not specified.
//  Corrections will not be written to disk.
//
#define MSG_CORRECTIONS_WILL_NOT_BE_WRITTEN 0x000003FCL

//
// MessageId: MSG_BAD_FAT_DRIVE
//
// MessageText:
//
//     File allocation table (FAT) is bad on drive %1.
//
#define MSG_BAD_FAT_DRIVE                0x000003FEL

//
// MessageId: MSG_BAD_FIRST_UNIT
//
// MessageText:
//
//  %1  First allocation unit is invalid, entry truncated.
//
#define MSG_BAD_FIRST_UNIT               0x00000403L

//
// MessageId: MSG_1028
//
// MessageText:
//
//     Allocation error, size adjusted.
//
#define MSG_1028                         0x00000404L

//
// MessageId: MSG_1029
//
// MessageText:
//
//     Cannot recover .. entry, processing continued.
//
#define MSG_1029                         0x00000405L

//
// MessageId: MSG_1030
//
// MessageText:
//
//     Directory is totally empty, no . or ..
//
#define MSG_1030                         0x00000406L

//
// MessageId: MSG_1031
//
// MessageText:
//
//     Directory is joined.
//
#define MSG_1031                         0x00000407L

//
// MessageId: MSG_1032
//
// MessageText:
//
//     Cannot recover .. entry.
//
#define MSG_1032                         0x00000408L

//
// MessageId: MSG_BAD_LINK
//
// MessageText:
//
//  %1  Entry has a bad link.
//
#define MSG_BAD_LINK                     0x00000409L

//
// MessageId: MSG_BAD_ATTRIBUTE
//
// MessageText:
//
//     Entry has a bad attribute.
//
#define MSG_BAD_ATTRIBUTE                0x0000040AL

//
// MessageId: MSG_BAD_FILE_SIZE
//
// MessageText:
//
//  %1  Entry has a bad size.
//
#define MSG_BAD_FILE_SIZE                0x0000040BL

//
// MessageId: MSG_CROSS_LINK
//
// MessageText:
//
//  %1  Is cross linked on allocation unit %2
//
#define MSG_CROSS_LINK                   0x0000040CL

//
// MessageId: MSG_1037
//
// MessageText:
//
//     Cannot CHDIR to %1,
//  tree past this point not processed.
//
#define MSG_1037                         0x0000040DL

//
// MessageId: MSG_1038
//
// MessageText:
//
//     tree past this point not processed.
//
#define MSG_1038                         0x0000040EL

//
// MessageId: MSG_BYTES_FREED
//
// MessageText:
//
//  %1 bytes disk space freed.
//
#define MSG_BYTES_FREED                  0x0000040FL

//
// MessageId: MSG_BYTES_WOULD_BE_FREED
//
// MessageText:
//
//  %1 bytes disk space would be freed.
//
#define MSG_BYTES_WOULD_BE_FREED         0x00000410L

//
// MessageId: MSG_VOLUME_LABEL_AND_DATE
//
// MessageText:
//
//  Volume %1 created %2 %3
//
#define MSG_VOLUME_LABEL_AND_DATE        0x00000411L

//
// MessageId: MSG_TOTAL_ALLOCATION_UNITS
//
// MessageText:
//
//  %1 total allocation units on disk.
//
#define MSG_TOTAL_ALLOCATION_UNITS       0x00000412L

//
// MessageId: MSG_BYTES_PER_ALLOCATION_UNIT
//
// MessageText:
//
//  %1 bytes in each allocation unit.
//
#define MSG_BYTES_PER_ALLOCATION_UNIT    0x00000413L

//
// MessageId: MSG_1044
//
// MessageText:
//
//  CHKDSK not available on drive %1.
//
#define MSG_1044                         0x00000414L

//
// MessageId: MSG_1045
//
// MessageText:
//
//  Invalid parameter.
//
#define MSG_1045                         0x00000415L

//
// MessageId: MSG_PATH_NOT_FOUND
//
// MessageText:
//
//  Path not found.
//
#define MSG_PATH_NOT_FOUND               0x00000416L

//
// MessageId: MSG_FILE_NOT_FOUND
//
// MessageText:
//
//  %1 : File not found.
//
#define MSG_FILE_NOT_FOUND               0x00000417L

//
// MessageId: MSG_LOST_CHAINS
//
// MessageText:
//
//     %1 lost allocation units found in %2 chains.
//
#define MSG_LOST_CHAINS                  0x00000418L

//
// MessageId: MSG_BLANK_LINE
//
// MessageText:
//
//  
//
#define MSG_BLANK_LINE                   0x00000419L

//
// MessageId: MSG_1050
//
// MessageText:
//
//     Cannot CHDIR to root
//
#define MSG_1050                         0x0000041AL

//
// MessageId: MSG_BAD_FAT_WRITE
//
// MessageText:
//
//     Disk error writing FAT
//
#define MSG_BAD_FAT_WRITE                0x0000041BL

//
// MessageId: MSG_ONE_STRING
//
// MessageText:
//
//  %1.
//
#define MSG_ONE_STRING                   0x0000041CL

//
// MessageId: MSG_ONE_STRING_NEWLINE
//
// MessageText:
//
//  %1
//
#define MSG_ONE_STRING_NEWLINE           0x0000041EL

//
// MessageId: MSG_NO_ROOM_IN_ROOT
//
// MessageText:
//
//     Insufficient room in root directory
//     Move files from root directory and repeat CHKDSK.
//
#define MSG_NO_ROOM_IN_ROOT              0x0000041FL

//
// MessageId: MSG_1056
//
// MessageText:
//
//  %1 %2 %3.
//
#define MSG_1056                         0x00000420L

//
// MessageId: MSG_1057
//
// MessageText:
//
//  %1 %2, %3.
//
#define MSG_1057                         0x00000421L

//
// MessageId: MSG_1058
//
// MessageText:
//
//  %1%2%3%4%5.
//
#define MSG_1058                         0x00000422L

//
// MessageId: MSG_1059
//
// MessageText:
//
//  %1%2%3%4.
//
#define MSG_1059                         0x00000423L

//
// MessageId: MSG_UNITS_ON_DISK
//
// MessageText:
//
//  %1 available allocation units on disk.
//
#define MSG_UNITS_ON_DISK                0x00000424L

//
// MessageId: MSG_1061
//
// MessageText:
//
//  CHKDSK /F cannot be done in a Windows/DosShell Command Prompt
//
#define MSG_1061                         0x00000425L

//
// MessageId: MSG_CHK_NO_MEMORY
//
// MessageText:
//
//   - Insufficient Memory.
//
#define MSG_CHK_NO_MEMORY                0x00000426L

//
// MessageId: MSG_CHK_USAGE_HEADER
//
// MessageText:
//
//  Checks a disk and displays a status report.
//  
//
#define MSG_CHK_USAGE_HEADER             0x00000428L

//
// MessageId: MSG_CHK_COMMAND_LINE
//
// MessageText:
//
//  CHKDSK [drive:][[path]filename] [/F] [/V] [/R]
//  
//
#define MSG_CHK_COMMAND_LINE             0x00000429L

//
// MessageId: MSG_CHK_DRIVE
//
// MessageText:
//
//    [drive:]        Specifies the drive to check.
//
#define MSG_CHK_DRIVE                    0x0000042AL

//
// MessageId: MSG_CHK_USG_FILENAME
//
// MessageText:
//
//    filename        Specifies the file(s) to check for fragmentation (FAT only).
//
#define MSG_CHK_USG_FILENAME             0x0000042BL

//
// MessageId: MSG_CHK_F_SWITCH
//
// MessageText:
//
//    /F              Fixes errors on the disk.
//
#define MSG_CHK_F_SWITCH                 0x0000042CL

//
// MessageId: MSG_CHK_V_SWITCH
//
// MessageText:
//
//    /V              Displays the full path and name of every file on the disk.
//    /R              Locates bad sectors and recovers readable information.
//  
//
#define MSG_CHK_V_SWITCH                 0x0000042DL

//
// MessageId: MSG_WITHOUT_PARAMETERS
//
// MessageText:
//
//  Type CHKDSK without parameters to check the current disk.
//
#define MSG_WITHOUT_PARAMETERS           0x0000042EL

//
// MessageId: MSG_CHK_CANT_CDROM
//
// MessageText:
//
//  CHKDSK does not run on CD-ROM drives.
//
#define MSG_CHK_CANT_CDROM               0x0000042FL

//
// MessageId: MSG_CHK_RUNNING
//
// MessageText:
//
//  
//  CHKDSK is running on volume %1.
//
#define MSG_CHK_RUNNING                  0x00000430L

//
// MessageId: MSG_CHK_VOLUME_CLEAN
//
// MessageText:
//
//  The volume is clean.
//
#define MSG_CHK_VOLUME_CLEAN             0x00000431L

//
// MessageId: MSG_CHK_TRAILING_DIRENTS
//
// MessageText:
//
//  Removing trailing directory entries from %1
//
#define MSG_CHK_TRAILING_DIRENTS         0x00000432L

//
// MessageId: MSG_CHK_BAD_CLUSTERS_IN_FILE_SUCCESS
//
// MessageText:
//
//  CHKDSK replaced bad clusters in file %1.
//
#define MSG_CHK_BAD_CLUSTERS_IN_FILE_SUCCESS 0x00000433L

//
// MessageId: MSG_CHK_BAD_CLUSTERS_IN_FILE_FAILURE
//
// MessageText:
//
//  Insufficient disk space to replace bad clusters
//  detected in file %1.
//
#define MSG_CHK_BAD_CLUSTERS_IN_FILE_FAILURE 0x00000434L

//
// MessageId: MSG_CHK_RECOVERING_FREE_SPACE
//
// MessageText:
//
//  CHKDSK is verifying free space...
//
#define MSG_CHK_RECOVERING_FREE_SPACE    0x00000435L

//
// MessageId: MSG_CHK_DONE_RECOVERING_FREE_SPACE
//
// MessageText:
//
//  Free space verification completed.
//
#define MSG_CHK_DONE_RECOVERING_FREE_SPACE 0x00000436L

//-----------------------
//
// Windows NT Chkdsk messages.
//
//-----------------------
//
// MessageId: MSG_CHK_ON_REBOOT
//
// MessageText:
//
//  Do you want AUTOCHK to be run the next time that
//  the system restarts? [Y] %0
//
#define MSG_CHK_ON_REBOOT                0x00000438L

//
// MessageId: MSG_CHK_VOLUME_SET_DIRTY
//
// MessageText:
//
//  AUTOCHK will run the next time that the system restarts.
//
#define MSG_CHK_VOLUME_SET_DIRTY         0x00000439L

//
// MessageId: MSG_CHK_BOOT_PARTITION_REBOOT
//
// MessageText:
//
//  
//  CHKDSK has finished checking your boot partition.
//  Please wait while the system restarts.
//
#define MSG_CHK_BOOT_PARTITION_REBOOT    0x0000043AL

//
// MessageId: MSG_CHK_BAD_LONG_NAME
//
// MessageText:
//
//  Removing invalid long directory entry from %1
//
#define MSG_CHK_BAD_LONG_NAME            0x0000043BL

//
// MessageId: MSG_CHK_CHECKING_VOLUME
//
// MessageText:
//
//  Checking %1
//
#define MSG_CHK_CHECKING_VOLUME          0x0000043CL

//
// MessageId: MSG_CHK_BAD_LONG_NAME_IS
//
// MessageText:
//
//  Removing orphan long directory entry: %1
//
#define MSG_CHK_BAD_LONG_NAME_IS         0x0000043DL

//-----------------------
//
// DOS 5 Format messages.
//
//-----------------------
//
// MessageId: MSG_PERCENT_COMPLETE
//
// MessageText:
//
//  %1 percent completed.                  %r%0
//
#define MSG_PERCENT_COMPLETE             0x000007D0L

//
// MessageId: MSG_FORMAT_COMPLETE
//
// MessageText:
//
//  Format complete.                        %b
//
#define MSG_FORMAT_COMPLETE              0x000007D1L

//
// MessageId: MSG_INSERT_DISK
//
// MessageText:
//
//  Insert new disk for drive %1:
//
#define MSG_INSERT_DISK                  0x000007D2L

//
// MessageId: MSG_REINSERT_DISKETTE
//
// MessageText:
//
//  Reinsert disk for drive %1:
//
#define MSG_REINSERT_DISKETTE            0x000007D3L

//
// MessageId: MSG_BAD_IOCTL
//
// MessageText:
//
//  Error in IOCTL call.
//
#define MSG_BAD_IOCTL                    0x000007D6L

//
// MessageId: MSG_CANT_DASD
//
// MessageText:
//
//  Cannot open volume for direct access.
//
#define MSG_CANT_DASD                    0x000007D7L

//
// MessageId: MSG_CANT_WRITE_FAT
//
// MessageText:
//
//  Error writing File Allocation Table (FAT).
//
#define MSG_CANT_WRITE_FAT               0x000007D8L

//
// MessageId: MSG_CANT_WRITE_ROOT_DIR
//
// MessageText:
//
//  Error writing directory.
//
#define MSG_CANT_WRITE_ROOT_DIR          0x000007D9L

//
// MessageId: MSG_FORMAT_NO_NETWORK
//
// MessageText:
//
//  Cannot format a network drive.
//
#define MSG_FORMAT_NO_NETWORK            0x000007DCL

//
// MessageId: MSG_UNSUPPORTED_PARAMETER
//
// MessageText:
//
//  Parameters not supported.
//
#define MSG_UNSUPPORTED_PARAMETER        0x000007DDL

//
// MessageId: MSG_UNUSABLE_DISK
//
// MessageText:
//
//  Invalid media or Track 0 bad - disk unusable.
//
#define MSG_UNUSABLE_DISK                0x000007E0L

//
// MessageId: MSG_BAD_DIR_READ
//
// MessageText:
//
//  Error reading directory.
//
#define MSG_BAD_DIR_READ                 0x000007E2L

//
// MessageId: MSG_PRESS_ENTER_WHEN_READY
//
// MessageText:
//
//  and press ENTER when ready... %0
//
#define MSG_PRESS_ENTER_WHEN_READY       0x000007E3L

//
// MessageId: MSG_ENTER_CURRENT_LABEL
//
// MessageText:
//
//  Enter current volume label for drive %1: %0
//
#define MSG_ENTER_CURRENT_LABEL          0x000007E5L

//
// MessageId: MSG_INCOMPATIBLE_PARAMETERS_FOR_FIXED
//
// MessageText:
//
//  Parameters incompatible with fixed disk.
//
#define MSG_INCOMPATIBLE_PARAMETERS_FOR_FIXED 0x000007E6L

//
// MessageId: MSG_READ_PARTITION_TABLE
//
// MessageText:
//
//  Error reading partition table.
//
#define MSG_READ_PARTITION_TABLE         0x000007E7L

//
// MessageId: MSG_NOT_SUPPORTED_BY_DRIVE
//
// MessageText:
//
//  Parameters not supported by drive.
//
#define MSG_NOT_SUPPORTED_BY_DRIVE       0x000007ECL

//
// MessageId: MSG_2029
//
// MessageText:
//
//  
//
#define MSG_2029                         0x000007EDL

//
// MessageId: MSG_2030
//
// MessageText:
//
//  
//  
//
#define MSG_2030                         0x000007EEL

//
// MessageId: MSG_INSERT_DOS_DISK
//
// MessageText:
//
//  Insert Windows NT disk in drive %1:
//
#define MSG_INSERT_DOS_DISK              0x000007EFL

//
// MessageId: MSG_WARNING_FORMAT
//
// MessageText:
//
//  
//  WARNING, ALL DATA ON NON-REMOVABLE DISK
//  DRIVE %1: WILL BE LOST!
//  Proceed with Format (Y/N)? %0
//
#define MSG_WARNING_FORMAT               0x000007F0L

//
// MessageId: MSG_FORMAT_ANOTHER
//
// MessageText:
//
//  
//  Format another (Y/N)? %0
//
#define MSG_FORMAT_ANOTHER               0x000007F1L

//
// MessageId: MSG_WRITE_PARTITION_TABLE
//
// MessageText:
//
//  Error writing partition table.
//
#define MSG_WRITE_PARTITION_TABLE        0x000007F3L

//
// MessageId: MSG_INCOMPATIBLE_PARAMETERS
//
// MessageText:
//
//  Parameters not compatible.
//
#define MSG_INCOMPATIBLE_PARAMETERS      0x000007F4L

//
// MessageId: MSG_AVAILABLE_ALLOCATION_UNITS
//
// MessageText:
//
//  %1 allocation units available on disk.
//
#define MSG_AVAILABLE_ALLOCATION_UNITS   0x000007F5L

//
// MessageId: MSG_ALLOCATION_UNIT_SIZE
//
// MessageText:
//
//  
//  %1 bytes in each allocation unit.
//
#define MSG_ALLOCATION_UNIT_SIZE         0x000007F6L

//
// MessageId: MSG_PARAMETER_TWICE
//
// MessageText:
//
//  Same parameter entered twice.
//
#define MSG_PARAMETER_TWICE              0x000007F8L

//
// MessageId: MSG_NEED_BOTH_T_AND_N
//
// MessageText:
//
//  Must enter both /t and /n parameters.
//
#define MSG_NEED_BOTH_T_AND_N            0x000007F9L

//
// MessageId: MSG_2042
//
// MessageText:
//
//  Trying to recover allocation unit %1.                          %0
//
#define MSG_2042                         0x000007FAL

//
// MessageId: MSG_NO_LABEL_WITH_8
//
// MessageText:
//
//  Volume label is not supported with /8 parameter.
//
#define MSG_NO_LABEL_WITH_8              0x000007FFL

//
// MessageId: MSG_FMT_NO_MEMORY
//
// MessageText:
//
//  Insufficient memory.
//
#define MSG_FMT_NO_MEMORY                0x00000801L

//
// MessageId: MSG_QUICKFMT_ANOTHER
//
// MessageText:
//
//  
//  QuickFormat another (Y/N)? %0
//
#define MSG_QUICKFMT_ANOTHER             0x00000802L

//
// MessageId: MSG_CANT_QUICKFMT
//
// MessageText:
//
//  Invalid existing format.
//  This disk cannot be QuickFormatted.
//  Proceed with unconditional format (Y/N)? %0
//
#define MSG_CANT_QUICKFMT                0x00000804L

//
// MessageId: MSG_FORMATTING_KB
//
// MessageText:
//
//  Formatting %1K
//
#define MSG_FORMATTING_KB                0x00000805L

//
// MessageId: MSG_FORMATTING_MB
//
// MessageText:
//
//  Formatting %1M
//
#define MSG_FORMATTING_MB                0x00000806L

//
// MessageId: MSG_FORMATTING_DOT_MB
//
// MessageText:
//
//  Formatting %1.%2M
//
#define MSG_FORMATTING_DOT_MB            0x00000807L

//
// MessageId: MSG_VERIFYING_KB
//
// MessageText:
//
//  Verifying %1K
//
#define MSG_VERIFYING_KB                 0x00000809L

//
// MessageId: MSG_VERIFYING_MB
//
// MessageText:
//
//  Verifying %1M
//
#define MSG_VERIFYING_MB                 0x0000080AL

//
// MessageId: MSG_VERIFYING_DOT_MB
//
// MessageText:
//
//  Verifying %1.%2M
//
#define MSG_VERIFYING_DOT_MB             0x0000080BL

//
// MessageId: MSG_2060
//
// MessageText:
//
//  Saving UNFORMAT information.
//
#define MSG_2060                         0x0000080CL

//
// MessageId: MSG_2061
//
// MessageText:
//
//  Checking existing disk format.
//
#define MSG_2061                         0x0000080DL

//
// MessageId: MSG_QUICKFORMATTING_KB
//
// MessageText:
//
//  QuickFormatting %1K
//
#define MSG_QUICKFORMATTING_KB           0x0000080EL

//
// MessageId: MSG_QUICKFORMATTING_MB
//
// MessageText:
//
//  QuickFormatting %1M
//
#define MSG_QUICKFORMATTING_MB           0x0000080FL

//
// MessageId: MSG_QUICKFORMATTING_DOT_MB
//
// MessageText:
//
//  QuickFormatting %1.%2M
//
#define MSG_QUICKFORMATTING_DOT_MB       0x00000810L

//
// MessageId: MSG_FORMAT_INFO
//
// MessageText:
//
//  Formats a disk for use with Windows NT.
//  
//
#define MSG_FORMAT_INFO                  0x00000811L

//
// MessageId: MSG_FORMAT_COMMAND_LINE_1
//
// MessageText:
//
//  FORMAT drive: [/FS:file-system] [/V:label] [/Q] [/A:size]
//  FORMAT drive: [/V:label] [/Q] [/F:size]
//
#define MSG_FORMAT_COMMAND_LINE_1        0x00000812L

//
// MessageId: MSG_FORMAT_COMMAND_LINE_2
//
// MessageText:
//
//  FORMAT drive: [/V:label] [/Q] [/T:tracks /N:sectors]
//
#define MSG_FORMAT_COMMAND_LINE_2        0x00000813L

//
// MessageId: MSG_FORMAT_COMMAND_LINE_3
//
// MessageText:
//
//  FORMAT drive: [/V:label] [/Q] [/1] [/4]
//
#define MSG_FORMAT_COMMAND_LINE_3        0x00000814L

//
// MessageId: MSG_FORMAT_COMMAND_LINE_4
//
// MessageText:
//
//  FORMAT drive: [/Q] [/1] [/4] [/8]
//  
//    /FS:file-system Specifies the type of the file system (FAT, HPFS, or
//                    NTFS).
//
#define MSG_FORMAT_COMMAND_LINE_4        0x00000815L

//
// MessageId: MSG_FORMAT_SLASH_V
//
// MessageText:
//
//    /V:label        Specifies the volume label.
//
#define MSG_FORMAT_SLASH_V               0x00000816L

//
// MessageId: MSG_FORMAT_SLASH_Q
//
// MessageText:
//
//    /Q              Performs a quick format.
//
#define MSG_FORMAT_SLASH_Q               0x00000817L

//
// MessageId: MSG_FORMAT_SLASH_C
//
// MessageText:
//
//    /C              Enable compression on the new file system.
//
#define MSG_FORMAT_SLASH_C               0x00000818L

//
// MessageId: MSG_FORMAT_SLASH_F
//
// MessageText:
//
//    /A:size         Specifies the allocation unit size (512, 1024, 2048,
//                    or 4096).
//    /F:size         Specifies the size of the floppy disk to format (160,
//
#define MSG_FORMAT_SLASH_F               0x00000819L

//
// MessageId: MSG_FORMAT_SUPPORTED_SIZES
//
// MessageText:
//
//                    180, 320, 360, 720, 1.2, 1.44, 2.88, or 20.8).
//
#define MSG_FORMAT_SUPPORTED_SIZES       0x0000081AL

//
// MessageId: MSG_WRONG_CURRENT_LABEL
//
// MessageText:
//
//  An incorrect volume label was entered for this drive.
//
#define MSG_WRONG_CURRENT_LABEL          0x0000081BL

//
// MessageId: MSG_FORMAT_SLASH_T
//
// MessageText:
//
//    /T:tracks       Specifies the number of tracks per disk side.
//
#define MSG_FORMAT_SLASH_T               0x0000081DL

//
// MessageId: MSG_FORMAT_SLASH_N
//
// MessageText:
//
//    /N:sectors      Specifies the number of sectors per track.
//
#define MSG_FORMAT_SLASH_N               0x0000081EL

//
// MessageId: MSG_FORMAT_SLASH_1
//
// MessageText:
//
//    /1              Formats a single side of a floppy disk.
//
#define MSG_FORMAT_SLASH_1               0x0000081FL

//
// MessageId: MSG_FORMAT_SLASH_4
//
// MessageText:
//
//    /4              Formats a 5.25-inch 360K floppy disk in a
//                    high-density drive.
//
#define MSG_FORMAT_SLASH_4               0x00000820L

//
// MessageId: MSG_FORMAT_SLASH_8
//
// MessageText:
//
//    /8              Formats eight sectors per track.
//
#define MSG_FORMAT_SLASH_8               0x00000821L

//
// MessageId: MSG_HPFS_FORMAT_BAD_SECTOR_SIZE
//
// MessageText:
//
//  HPFS will only run on volumes with 512 bytes per sector.
//
#define MSG_HPFS_FORMAT_BAD_SECTOR_SIZE  0x00000822L

//
// MessageId: MSG_FORMAT_NO_CDROM
//
// MessageText:
//
//  Cannot format a CD-ROM drive.
//
#define MSG_FORMAT_NO_CDROM              0x00000823L

//
// MessageId: MSG_FORMAT_NO_RAMDISK
//
// MessageText:
//
//  Cannot format a RAM DISK drive.
//
#define MSG_FORMAT_NO_RAMDISK            0x00000824L

//
// MessageId: MSG_HPFS_FORMAT_NO_FLOPPIES
//
// MessageText:
//
//  The HPFS file system does not support removable media.
//
#define MSG_HPFS_FORMAT_NO_FLOPPIES      0x00000825L

//
// MessageId: MSG_FORMAT_PLEASE_USE_FS_SWITCH
//
// MessageText:
//
//  Please use the /FS switch to specify the file system
//  you wish to use on this volume.
//
#define MSG_FORMAT_PLEASE_USE_FS_SWITCH  0x00000826L

//
// MessageId: MSG_NTFS_FORMAT_FAILED
//
// MessageText:
//
//  Format failed.
//
#define MSG_NTFS_FORMAT_FAILED           0x00000827L

//
// MessageId: MSG_FMT_WRITE_PROTECTED_MEDIA
//
// MessageText:
//
//  Cannot format.  This media is write protected.
//
#define MSG_FMT_WRITE_PROTECTED_MEDIA    0x00000828L

//
// MessageId: MSG_FMT_INSTALL_FILE_SYSTEM
//
// MessageText:
//
//  
//  WARNING!  The %1 file system is not enabled.
//  Would you like to enable it (Y/N)? %0
//
#define MSG_FMT_INSTALL_FILE_SYSTEM      0x00000829L

//
// MessageId: MSG_FMT_FILE_SYSTEM_INSTALLED
//
// MessageText:
//
//  
//  The file system will be enabled when you restart the system.
//
#define MSG_FMT_FILE_SYSTEM_INSTALLED    0x0000082AL

//
// MessageId: MSG_FMT_CANT_INSTALL_FILE_SYSTEM
//
// MessageText:
//
//  
//  FORMAT is unable to enable the file system.
//
#define MSG_FMT_CANT_INSTALL_FILE_SYSTEM 0x0000082BL

//
// MessageId: MSG_FMT_VOLUME_TOO_SMALL
//
// MessageText:
//
//  The volume is too small for the specified file system.
//
#define MSG_FMT_VOLUME_TOO_SMALL         0x0000082CL

//
// MessageId: MSG_FMT_CREATING_FILE_SYSTEM
//
// MessageText:
//
//  Creating file system structures.
//
#define MSG_FMT_CREATING_FILE_SYSTEM     0x0000082DL

//
// MessageId: MSG_FMT_VARIABLE_CLUSTERS_NOT_SUPPORTED
//
// MessageText:
//
//  %1 FORMAT does not support user selected allocation unit sizes.
//
#define MSG_FMT_VARIABLE_CLUSTERS_NOT_SUPPORTED 0x0000082EL

//
// MessageId: MSG_DEVICE_BUSY
//
// MessageText:
//
//  The device is busy.
//
#define MSG_DEVICE_BUSY                  0x00000830L

//
// MessageId: MSG_FMT_DMF_NOT_SUPPORTED_ON_288_DRIVES
//
// MessageText:
//
//  The specified format cannot be mastered on 2.88MB drives.
//
#define MSG_FMT_DMF_NOT_SUPPORTED_ON_288_DRIVES 0x00000831L

//----------------------
//
// Common ulib messages.
//
//----------------------
//
// MessageId: MSG_CANT_LOCK_THE_DRIVE
//
// MessageText:
//
//  Cannot lock the drive.  The volume is still in use.
//
#define MSG_CANT_LOCK_THE_DRIVE          0x00000BB8L

//
// MessageId: MSG_CANT_READ_HPFS_ROOT
//
// MessageText:
//
//  HPFS partition has unreadable root.
//
#define MSG_CANT_READ_HPFS_ROOT          0x00000BB9L

//
// MessageId: MSG_CANT_READ_BOOT_SECTOR
//
// MessageText:
//
//  Cannot read boot sector.
//
#define MSG_CANT_READ_BOOT_SECTOR        0x00000BBAL

//
// MessageId: MSG_VOLUME_SERIAL_NUMBER
//
// MessageText:
//
//  Volume Serial Number is %1-%2
//
#define MSG_VOLUME_SERIAL_NUMBER         0x00000BBBL

//
// MessageId: MSG_VOLUME_LABEL_PROMPT
//
// MessageText:
//
//  Volume label (11 characters, ENTER for none)? %0
//
#define MSG_VOLUME_LABEL_PROMPT          0x00000BBCL

//
// MessageId: MSG_INVALID_LABEL_CHARACTERS
//
// MessageText:
//
//  Invalid characters in volume label
//
#define MSG_INVALID_LABEL_CHARACTERS     0x00000BBDL

//
// MessageId: MSG_CANT_READ_ANY_FAT
//
// MessageText:
//
//  There are no readable file allocation tables (FAT).
//
#define MSG_CANT_READ_ANY_FAT            0x00000BBEL

//
// MessageId: MSG_SOME_FATS_UNREADABLE
//
// MessageText:
//
//  Some file allocation tables (FAT) are unreadable.
//
#define MSG_SOME_FATS_UNREADABLE         0x00000BBFL

//
// MessageId: MSG_CANT_WRITE_BOOT_SECTOR
//
// MessageText:
//
//  Cannot write boot sector.
//
#define MSG_CANT_WRITE_BOOT_SECTOR       0x00000BC0L

//
// MessageId: MSG_SOME_FATS_UNWRITABLE
//
// MessageText:
//
//  Some file allocation tables (FAT) are unwritable.
//
#define MSG_SOME_FATS_UNWRITABLE         0x00000BC1L

//
// MessageId: MSG_INSUFFICIENT_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space.
//
#define MSG_INSUFFICIENT_DISK_SPACE      0x00000BC2L

//
// MessageId: MSG_TOTAL_KILOBYTES
//
// MessageText:
//
//  %1 kilobytes total disk space.
//
#define MSG_TOTAL_KILOBYTES              0x00000BC3L

//
// MessageId: MSG_AVAILABLE_KILOBYTES
//
// MessageText:
//
//  %1 kilobytes are available.
//
#define MSG_AVAILABLE_KILOBYTES          0x00000BC4L

//
// MessageId: MSG_NOT_FAT
//
// MessageText:
//
//  Disk not formatted or not FAT.
//
#define MSG_NOT_FAT                      0x00000BC5L

//
// MessageId: MSG_REQUIRED_PARAMETER
//
// MessageText:
//
//  Required parameter missing -
//
#define MSG_REQUIRED_PARAMETER           0x00000BC6L

//
// MessageId: MSG_FILE_SYSTEM_TYPE
//
// MessageText:
//
//  The type of the file system is %1.
//
#define MSG_FILE_SYSTEM_TYPE             0x00000BC7L

//
// MessageId: MSG_NEW_FILE_SYSTEM_TYPE
//
// MessageText:
//
//  The new file system is %1.
//
#define MSG_NEW_FILE_SYSTEM_TYPE         0x00000BC8L

//
// MessageId: MSG_FMT_AN_ERROR_OCCURRED
//
// MessageText:
//
//  An error occurred while running Format.
//
#define MSG_FMT_AN_ERROR_OCCURRED        0x00000BC9L

//
// MessageId: MSG_FS_NOT_SUPPORTED
//
// MessageText:
//
//  %1 is not available for %2 drives.
//
#define MSG_FS_NOT_SUPPORTED             0x00000BCAL

//
// MessageId: MSG_FS_NOT_DETERMINED
//
// MessageText:
//
//  Cannot determine file system of drive %1.
//
#define MSG_FS_NOT_DETERMINED            0x00000BCBL

//
// MessageId: MSG_CANT_DISMOUNT
//
// MessageText:
//
//  Cannot dismount the drive.
//
#define MSG_CANT_DISMOUNT                0x00000BCCL

//
// MessageId: MSG_NOT_FULL_PATH_NAME
//
// MessageText:
//
//  %1 is not a complete name.
//
#define MSG_NOT_FULL_PATH_NAME           0x00000BCDL

//
// MessageId: MSG_YES
//
// MessageText:
//
//  Yes
//
#define MSG_YES                          0x00000BCEL

//
// MessageId: MSG_NO
//
// MessageText:
//
//  No
//
#define MSG_NO                           0x00000BCFL

//
// MessageId: MSG_DISK_NOT_FORMATTED
//
// MessageText:
//
//  Disk is not formatted.
//
#define MSG_DISK_NOT_FORMATTED           0x00000BD0L

//
// MessageId: MSG_NONEXISTENT_DRIVE
//
// MessageText:
//
//  Specified drive does not exist.
//
#define MSG_NONEXISTENT_DRIVE            0x00000BD1L

//
// MessageId: MSG_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter - %1
//
#define MSG_INVALID_PARAMETER            0x00000BD2L

//
// MessageId: MSG_INSUFFICIENT_MEMORY
//
// MessageText:
//
//  Out of memory.
//
#define MSG_INSUFFICIENT_MEMORY          0x00000BD3L

//
// MessageId: MSG_ACCESS_DENIED
//
// MessageText:
//
//  Access denied - %1
//
#define MSG_ACCESS_DENIED                0x00000BD4L

//
// MessageId: MSG_DASD_ACCESS_DENIED
//
// MessageText:
//
//  Access denied.
//
#define MSG_DASD_ACCESS_DENIED           0x00000BD5L

//
// MessageId: MSG_CANT_LOCK_CURRENT_DRIVE
//
// MessageText:
//
//  Cannot lock current drive.
//
#define MSG_CANT_LOCK_CURRENT_DRIVE      0x00000BD6L

//
// MessageId: MSG_INVALID_LABEL
//
// MessageText:
//
//  Invalid volume label
//
#define MSG_INVALID_LABEL                0x00000BD7L

//
// MessageId: MSG_DISK_TOO_LARGE_TO_FORMAT
//
// MessageText:
//
//  The disk is too large to format for the specified file system.
//
#define MSG_DISK_TOO_LARGE_TO_FORMAT     0x00000BD8L

//
// MessageId: MSG_VOLUME_LABEL_NO_MAX
//
// MessageText:
//
//  Volume label (ENTER for none)? %0
//
#define MSG_VOLUME_LABEL_NO_MAX          0x00000BD9L

//
// MessageId: MSG_CHKDSK_ON_REBOOT_PROMPT
//
// MessageText:
//
//  Chkdsk cannot run because the volume is in use by another
//  process.  Would you like to schedule this volume to be
//  checked the next time the system restarts? (Y/N) %0
//
#define MSG_CHKDSK_ON_REBOOT_PROMPT      0x00000BDAL

//
// MessageId: MSG_CHKDSK_CANNOT_SCHEDULE
//
// MessageText:
//
//  
//  Chkdsk could not schedule this volume to be checked
//  the next time the system boots.
//
#define MSG_CHKDSK_CANNOT_SCHEDULE       0x00000BDBL

//
// MessageId: MSG_CHKDSK_SCHEDULED
//
// MessageText:
//
//  
//  This volume will be checked the next time the system restarts.
//
#define MSG_CHKDSK_SCHEDULED             0x00000BDCL

//
// MessageId: MSG_COMPRESSION_NOT_AVAILABLE
//
// MessageText:
//
//  Compression is not available for %1.
//
#define MSG_COMPRESSION_NOT_AVAILABLE    0x00000BDDL

//
// MessageId: MSG_CANNOT_ENABLE_COMPRESSION
//
// MessageText:
//
//  Cannot enable compression for the volume.
//
#define MSG_CANNOT_ENABLE_COMPRESSION    0x00000BDEL

//------------------------------
//
//     HPFS Chkdsk messages
//
//------------------------------
//
// MessageId: MSG_HPFS_CHKDSK_INSUFFICIENT_MEMORY
//
// MessageText:
//
//  There is not enough memory available to run CHKDSK.
//
#define MSG_HPFS_CHKDSK_INSUFFICIENT_MEMORY 0x00000FA1L

//
// MessageId: MSG_HPFS_CHKDSK_INSUFFICIENT_MEMORY_ORPHANS
//
// MessageText:
//
//  There is not enough memory to attempt to recover lost data.
//
#define MSG_HPFS_CHKDSK_INSUFFICIENT_MEMORY_ORPHANS 0x00000FA2L

//
// MessageId: MSG_HPFS_CHKDSK_ELEMENTARY_CORRUPTION
//
// MessageText:
//
//  The elementary file-system structures are corrupt.
//  CHKDSK cannot check this drive.
//
#define MSG_HPFS_CHKDSK_ELEMENTARY_CORRUPTION 0x00000FA3L

//
// MessageId: MSG_HPFS_CHKDSK_ERRORS_DETECTED
//
// MessageText:
//
//  CHKDSK detected minor inconsistencies on the drive.
//
#define MSG_HPFS_CHKDSK_ERRORS_DETECTED  0x00000FA4L

//
// MessageId: MSG_HPFS_CHKDSK_ERRORS_FIXED
//
// MessageText:
//
//  CHKDSK detected and fixed minor inconsistencies on the drive.
//
#define MSG_HPFS_CHKDSK_ERRORS_FIXED     0x00000FA5L

//
// MessageId: MSG_HPFS_CHKDSK_ALLOCATION_ERROR
//
// MessageText:
//
//  CHKDSK fixed an allocation error for the file %1
//
#define MSG_HPFS_CHKDSK_ALLOCATION_ERROR 0x00000FA6L

//
// MessageId: MSG_HPFS_CHKDSK_DELETE_PATH_AND_FILE
//
// MessageText:
//
//  CHKDSK deleted the corrupt file %1\%2
//
#define MSG_HPFS_CHKDSK_DELETE_PATH_AND_FILE 0x00000FA7L

//
// MessageId: MSG_HPFS_CHKDSK_PATH_AND_FILE
//
// MessageText:
//
//  %1\%2
//
#define MSG_HPFS_CHKDSK_PATH_AND_FILE    0x00000FA8L

//
// MessageId: MSG_HPFS_CHKDSK_TRUNCATED_DIRBLK
//
// MessageText:
//
//  CHKDSK truncated a corrupt directory block.
//
#define MSG_HPFS_CHKDSK_TRUNCATED_DIRBLK 0x00000FA9L

//
// MessageId: MSG_HPFS_CHKDSK_TRUNCATED_EAS
//
// MessageText:
//
//  CHKDSK truncated the corrupt Extended Attributes list for %1
//
#define MSG_HPFS_CHKDSK_TRUNCATED_EAS    0x00000FAAL

//
// MessageId: MSG_HPFS_CHKDSK_REMOVED_EA
//
// MessageText:
//
//  CHKDSK removed a corrupt Extended Attribute from %1
//
#define MSG_HPFS_CHKDSK_REMOVED_EA       0x00000FABL

//
// MessageId: MSG_HPFS_CHKDSK_SORT
//
// MessageText:
//
//  CHKDSK found and corrected an organization error
//  in the directory %1
//
#define MSG_HPFS_CHKDSK_SORT             0x00000FACL

//
// MessageId: MSG_HPFS_CHKDSK_INSUFF_MEMORY_TO_FIX
//
// MessageText:
//
//  There is not enough memory available for CHKDSK to fix the drive.
//
#define MSG_HPFS_CHKDSK_INSUFF_MEMORY_TO_FIX 0x00000FADL

//
// MessageId: MSG_HPFS_CHKDSK_UNRESOLVED_HOTFIXES
//
// MessageText:
//
//  CHKDSK was not able to resolve all hotfix references on the drive.
//
#define MSG_HPFS_CHKDSK_UNRESOLVED_HOTFIXES 0x00000FAEL

//
// MessageId: MSG_HPFS_CHKDSK_UNRESOLVED_DELETES
//
// MessageText:
//
//  CHKDSK was not able to delete all corrupted files.
//
#define MSG_HPFS_CHKDSK_UNRESOLVED_DELETES 0x00000FAFL

//
// MessageId: MSG_HPFS_CHKDSK_UNRESOLVED_SORTS
//
// MessageText:
//
//  CHKDSK was not able to sort all badly-ordered directories.
//
#define MSG_HPFS_CHKDSK_UNRESOLVED_SORTS 0x00000FB0L

//
// MessageId: MSG_HPFS_CHKDSK_CANT_WRITE_BITMAP
//
// MessageText:
//
//  CHKDSK was not able to write the bitmap.
//
#define MSG_HPFS_CHKDSK_CANT_WRITE_BITMAP 0x00000FB1L

//
// MessageId: MSG_HPFS_CHKDSK_ORPHANS_FOUND
//
// MessageText:
//
//  CHKDSK found lost data on the disk.
//
#define MSG_HPFS_CHKDSK_ORPHANS_FOUND    0x00000FB2L

//
// MessageId: MSG_HPFS_CHKDSK_ORPHANS_NO_MEM
//
// MessageText:
//
//  There is not enough memory available to CHKDSK to save lost data.
//
#define MSG_HPFS_CHKDSK_ORPHANS_NO_MEM   0x00000FB3L

//
// MessageId: MSG_HPFS_CHKDSK_ORPHANS_NO_DISK
//
// MessageText:
//
//  There is not enough free space on disk to save lost data.
//
#define MSG_HPFS_CHKDSK_ORPHANS_NO_DISK  0x00000FB4L

//
// MessageId: MSG_HPFS_CHKDSK_NO_FOUND_DIR
//
// MessageText:
//
//  CHKDSK could not create a directory to hold recovered files.
//
#define MSG_HPFS_CHKDSK_NO_FOUND_DIR     0x00000FB5L

//
// MessageId: MSG_HPFS_CHKDSK_FOUND_DIR_NAME
//
// MessageText:
//
//  CHKDSK will place recovered files in %1
//
#define MSG_HPFS_CHKDSK_FOUND_DIR_NAME   0x00000FB6L

//
// MessageId: MSG_HPFS_CHKDSK_ORPHANS_CONSISTENCY
//
// MessageText:
//
//  CHKDSK could not ensure the consistency of the recovered files.
//
#define MSG_HPFS_CHKDSK_ORPHANS_CONSISTENCY 0x00000FB7L

//
// MessageId: MSG_HPFS_CHKDSK_SEARCHING_FOR_ORPHANS
//
// MessageText:
//
//  CHKDSK is searching for lost data.
//
#define MSG_HPFS_CHKDSK_SEARCHING_FOR_ORPHANS 0x00000FB8L

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_TOTAL_SPACE
//
// MessageText:
//
//  %1 kilobytes total space.
//
#define MSG_HPFS_CHKDSK_STATISTICS_TOTAL_SPACE 0x00000FB9L

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_DIRECTORIES
//
// MessageText:
//
//  %1 kilobytes are in %2 directories.
//
#define MSG_HPFS_CHKDSK_STATISTICS_DIRECTORIES 0x00000FBAL

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_FILE_DATA
//
// MessageText:
//
//  %1 kilobytes are in %2 user files.
//
#define MSG_HPFS_CHKDSK_STATISTICS_FILE_DATA 0x00000FBBL

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_EAS
//
// MessageText:
//
//  %1 kilobytes are in extended attributes.
//
#define MSG_HPFS_CHKDSK_STATISTICS_EAS   0x00000FBCL

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_SYSTEM
//
// MessageText:
//
//  %1 kilobytes are reserved for system use.
//
#define MSG_HPFS_CHKDSK_STATISTICS_SYSTEM 0x00000FBDL

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_BAD
//
// MessageText:
//
//  %1 kilobytes are in bad blocks.
//
#define MSG_HPFS_CHKDSK_STATISTICS_BAD   0x00000FBEL

//
// MessageId: MSG_HPFS_CHKDSK_STATISTICS_FREE_SPACE
//
// MessageText:
//
//  %1 kilobytes are available for use.
//
#define MSG_HPFS_CHKDSK_STATISTICS_FREE_SPACE 0x00000FBFL

//
// MessageId: MSG_HPFS_CHKDSK_RECOVERED_DIRECTORY
//
// MessageText:
//
//  CHKDSK recovered a lost directory as %1
//
#define MSG_HPFS_CHKDSK_RECOVERED_DIRECTORY 0x00000FC0L

//
// MessageId: MSG_HPFS_CHKDSK_RECOVERED_FILE
//
// MessageText:
//
//  CHKDSK placed recovered data in the file %1
//
#define MSG_HPFS_CHKDSK_RECOVERED_FILE   0x00000FC1L

//
// MessageId: MSG_HPFS_CHKDSK_ORPHANS_CANT_SAVE
//
// MessageText:
//
//  CHKDSK was not able to save all recovered data.
//
#define MSG_HPFS_CHKDSK_ORPHANS_CANT_SAVE 0x00000FC2L

//
// MessageId: MSG_HPFS_CHKDSK_REMOVED_ACL
//
// MessageText:
//
//  CHKDSK removed a corrupt access control list from %1
//
#define MSG_HPFS_CHKDSK_REMOVED_ACL      0x00000FC3L

//
// MessageId: MSG_HPFS_CHKDSK_ALLOCATION_ERROR_NOT_FIXED
//
// MessageText:
//
//  CHKDSK detected an allocation error on the volume.
//
#define MSG_HPFS_CHKDSK_ALLOCATION_ERROR_NOT_FIXED 0x00000FC4L

//
// MessageId: MSG_HPFS_CHKDSK_ALLOCATION_ERROR_FIXED
//
// MessageText:
//
//  CHKDSK detected and fixed an allocation error on the volume.
//
#define MSG_HPFS_CHKDSK_ALLOCATION_ERROR_FIXED 0x00000FC5L

//
// MessageId: MSG_HPFS_CHKDSK_WRONG_VERSION
//
// MessageText:
//
//  This volume cannot be checked with this version of UHPFS.DLL.
//
#define MSG_HPFS_CHKDSK_WRONG_VERSION    0x00000FC6L

//
// MessageId: MSG_HPFS_CHKDSK_NO_RECOVER_MODE
//
// MessageText:
//
//  Recover mode not supported by HPFS CHKDSK.
//
#define MSG_HPFS_CHKDSK_NO_RECOVER_MODE  0x00000FC7L

//---------------------
//
// FAT ChkDsk Messages.
//
//---------------------
//
// MessageId: MSG_CHK_ERRORS_IN_FAT
//
// MessageText:
//
//  Errors in file allocation table (FAT) corrected.
//
#define MSG_CHK_ERRORS_IN_FAT            0x00001388L

//
// MessageId: MSG_CHK_EAFILE_HAS_HANDLE
//
// MessageText:
//
//  Extended attribute file has handle.  Handle removed.
//
#define MSG_CHK_EAFILE_HAS_HANDLE        0x00001389L

//
// MessageId: MSG_CHK_EMPTY_EA_FILE
//
// MessageText:
//
//  Extended attribute file contains no extended attributes.  File deleted.
//
#define MSG_CHK_EMPTY_EA_FILE            0x0000138AL

//
// MessageId: MSG_CHK_ERASING_INVALID_LABEL
//
// MessageText:
//
//  Erasing invalid label.
//
#define MSG_CHK_ERASING_INVALID_LABEL    0x0000138BL

//
// MessageId: MSG_CHK_EA_SIZE
//
// MessageText:
//
//  %1 bytes in extended attributes.
//
#define MSG_CHK_EA_SIZE                  0x0000138CL

//
// MessageId: MSG_CHK_CANT_CHECK_EA_LOG
//
// MessageText:
//
//  Unreadable extended attribute header.
//  Cannot check extended attribute log.
//
#define MSG_CHK_CANT_CHECK_EA_LOG        0x0000138DL

//
// MessageId: MSG_CHK_BAD_LOG
//
// MessageText:
//
//  Extended attribute log is unintelligible.
//  Ignore log and Continue? (Y/N) %0
//
#define MSG_CHK_BAD_LOG                  0x0000138EL

//
// MessageId: MSG_CHK_UNUSED_EA_PORTION
//
// MessageText:
//
//  Unused, unreadable, or unwritable portion of extended attribute file removed.
//
#define MSG_CHK_UNUSED_EA_PORTION        0x0000138FL

//
// MessageId: MSG_CHK_EASET_SIZE
//
// MessageText:
//
//  Total size entry for extended attribute set at cluster %1 corrected.
//
#define MSG_CHK_EASET_SIZE               0x00001390L

//
// MessageId: MSG_CHK_EASET_NEED_COUNT
//
// MessageText:
//
//  Need count entry for extended attribute set at cluster %1 corrected.
//
#define MSG_CHK_EASET_NEED_COUNT         0x00001391L

//
// MessageId: MSG_CHK_UNORDERED_EA_SETS
//
// MessageText:
//
//  Extended attribute file is unsorted.
//  Sorting extended attribute file.
//
#define MSG_CHK_UNORDERED_EA_SETS        0x00001392L

//
// MessageId: MSG_CHK_NEED_MORE_HEADER_SPACE
//
// MessageText:
//
//  Insufficient space in extended attribute file for its header.
//  Attempting to allocate more disk space.
//
#define MSG_CHK_NEED_MORE_HEADER_SPACE   0x00001393L

//
// MessageId: MSG_CHK_INSUFFICIENT_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space to correct disk error.
//  Please free up some disk space and run CHKDSK again.
//
#define MSG_CHK_INSUFFICIENT_DISK_SPACE  0x00001394L

//
// MessageId: MSG_CHK_RELOCATED_EA_HEADER
//
// MessageText:
//
//  Bad clusters in extended attribute file header relocated.
//
#define MSG_CHK_RELOCATED_EA_HEADER      0x00001395L

//
// MessageId: MSG_CHK_ERROR_IN_EA_HEADER
//
// MessageText:
//
//  Errors in extended attribute file header corrected.
//
#define MSG_CHK_ERROR_IN_EA_HEADER       0x00001396L

//
// MessageId: MSG_CHK_MORE_THAN_ONE_DOT
//
// MessageText:
//
//  More than one dot entry in directory %1.  Entry removed.
//
#define MSG_CHK_MORE_THAN_ONE_DOT        0x00001397L

//
// MessageId: MSG_CHK_DOT_IN_ROOT
//
// MessageText:
//
//  Dot entry found in root directory.  Entry removed.
//
#define MSG_CHK_DOT_IN_ROOT              0x00001398L

//
// MessageId: MSG_CHK_DOTDOT_IN_ROOT
//
// MessageText:
//
//  Dot-dot entry found in root directory.  Entry removed.
//
#define MSG_CHK_DOTDOT_IN_ROOT           0x00001399L

//
// MessageId: MSG_CHK_ERR_IN_DOT
//
// MessageText:
//
//  Dot entry in directory %1 has incorrect link.  Link corrected.
//
#define MSG_CHK_ERR_IN_DOT               0x0000139AL

//
// MessageId: MSG_CHK_ERR_IN_DOTDOT
//
// MessageText:
//
//  Dot-dot entry in directory %1 has incorrect link.  Link corrected.
//
#define MSG_CHK_ERR_IN_DOTDOT            0x0000139BL

//
// MessageId: MSG_CHK_REPEATED_ENTRY
//
// MessageText:
//
//  More than one %1 entry in directory %2.  Entry removed.
//
#define MSG_CHK_REPEATED_ENTRY           0x0000139CL

//
// MessageId: MSG_CHK_CYCLE_IN_TREE
//
// MessageText:
//
//  Directory %1 causes cycle in directory tree.
//  Directory entry removed.
//
#define MSG_CHK_CYCLE_IN_TREE            0x0000139DL

//
// MessageId: MSG_CHK_BAD_CLUSTERS_IN_DIR
//
// MessageText:
//
//  Directory %1 has bad clusters.
//  Bad clusters removed from directory.
//
#define MSG_CHK_BAD_CLUSTERS_IN_DIR      0x0000139EL

//
// MessageId: MSG_CHK_BAD_DIR
//
// MessageText:
//
//  Directory %1 is entirely unreadable.
//  Directory entry removed.
//
#define MSG_CHK_BAD_DIR                  0x0000139FL

//
// MessageId: MSG_CHK_FILENAME
//
// MessageText:
//
//  %1
//
#define MSG_CHK_FILENAME                 0x000013A0L

//
// MessageId: MSG_CHK_DIR_TRUNC
//
// MessageText:
//
//  Directory truncated.
//
#define MSG_CHK_DIR_TRUNC                0x000013A1L

//
// MessageId: MSG_CHK_CROSS_LINK_COPY
//
// MessageText:
//
//  Cross link resolved by copying.
//
#define MSG_CHK_CROSS_LINK_COPY          0x000013A2L

//
// MessageId: MSG_CHK_CROSS_LINK_TRUNC
//
// MessageText:
//
//  Insufficient disk space to copy cross-linked portion.
//  File being truncated.
//
#define MSG_CHK_CROSS_LINK_TRUNC         0x000013A3L

//
// MessageId: MSG_CHK_INVALID_NAME
//
// MessageText:
//
//  %1  Invalid name.  Directory entry removed.
//
#define MSG_CHK_INVALID_NAME             0x000013A4L

//
// MessageId: MSG_CHK_INVALID_TIME_STAMP
//
// MessageText:
//
//  %1  Invalid time stamp.
//
#define MSG_CHK_INVALID_TIME_STAMP       0x000013A5L

//
// MessageId: MSG_CHK_DIR_HAS_FILESIZE
//
// MessageText:
//
//  %1  Directory has non-zero file size.
//
#define MSG_CHK_DIR_HAS_FILESIZE         0x000013A6L

//
// MessageId: MSG_CHK_UNRECOG_EA_HANDLE
//
// MessageText:
//
//  %1  Unrecognized extended attribute handle.
//
#define MSG_CHK_UNRECOG_EA_HANDLE        0x000013A7L

//
// MessageId: MSG_CHK_SHARED_EA
//
// MessageText:
//
//  %1  Has handle extended attribute set belonging to another file.
//      Handle removed.
//
#define MSG_CHK_SHARED_EA                0x000013A8L

//
// MessageId: MSG_CHK_UNUSED_EA_SET
//
// MessageText:
//
//  Unused extended attribute set with handle %1 deleted from
//  extended attribute file.
//
#define MSG_CHK_UNUSED_EA_SET            0x000013A9L

//
// MessageId: MSG_CHK_NEW_OWNER_NAME
//
// MessageText:
//
//  Extended attribute set with handle %1 owner changed
//  from %2 to %3.
//
#define MSG_CHK_NEW_OWNER_NAME           0x000013AAL

//
// MessageId: MSG_CHK_BAD_LINKS_IN_ORPHANS
//
// MessageText:
//
//  Bad links in lost-chain at cluster %1 corrected.
//
#define MSG_CHK_BAD_LINKS_IN_ORPHANS     0x000013ABL

//
// MessageId: MSG_CHK_CROSS_LINKED_ORPHAN
//
// MessageText:
//
//  Lost-chain cross-linked at cluster %1.  Orphan truncated.
//
#define MSG_CHK_CROSS_LINKED_ORPHAN      0x000013ACL

//
// MessageId: MSG_ORPHAN_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space to recover lost data.
//
#define MSG_ORPHAN_DISK_SPACE            0x000013ADL

//
// MessageId: MSG_TOO_MANY_ORPHANS
//
// MessageText:
//
//  Insufficient disk space to recover lost data.
//
#define MSG_TOO_MANY_ORPHANS             0x000013AEL

//
// MessageId: MSG_CHK_ERROR_IN_LOG
//
// MessageText:
//
//  Error in extended attribute log.
//
#define MSG_CHK_ERROR_IN_LOG             0x000013AFL

//
// MessageId: MSG_CHK_ERRORS_IN_DIR_CORR
//
// MessageText:
//
//  %1 Errors in directory corrected.
//
#define MSG_CHK_ERRORS_IN_DIR_CORR       0x000013B0L

//--------------------
//
// Messages for label.
//
//--------------------
//
// MessageId: MSG_LBL_INFO
//
// MessageText:
//
//  Creates, changes, or deletes the volume label of a disk.
//  
//
#define MSG_LBL_INFO                     0x00001770L

//
// MessageId: MSG_LBL_USAGE
//
// MessageText:
//
//  LABEL [drive:][label]
//  
//
#define MSG_LBL_USAGE                    0x00001771L

//
// MessageId: MSG_LBL_NO_LABEL
//
// MessageText:
//
//  Volume in drive %1 has no label
//
#define MSG_LBL_NO_LABEL                 0x00001772L

//
// MessageId: MSG_LBL_THE_LABEL
//
// MessageText:
//
//  Volume in drive %1 is %2
//
#define MSG_LBL_THE_LABEL                0x00001773L

//
// MessageId: MSG_LBL_DELETE_LABEL
//
// MessageText:
//
//  
//  Delete current volume label (Y/N)? %0
//
#define MSG_LBL_DELETE_LABEL             0x00001775L

//---------------------
//
// Messages for attrib.
//
//---------------------
//
// MessageId: MSG_ATTRIB_ARCHIVE
//
// MessageText:
//
//  A
//
#define MSG_ATTRIB_ARCHIVE               0x00001B58L

//
// MessageId: MSG_ATTRIB_HIDDEN
//
// MessageText:
//
//  H
//
#define MSG_ATTRIB_HIDDEN                0x00001B59L

//
// MessageId: MSG_ATTRIB_READ_ONLY
//
// MessageText:
//
//  R
//
#define MSG_ATTRIB_READ_ONLY             0x00001B5AL

//
// MessageId: MSG_ATTRIB_SYSTEM
//
// MessageText:
//
//  R
//
#define MSG_ATTRIB_SYSTEM                0x00001B5BL

//
// MessageId: MSG_ATTRIB_FILE_NOT_FOUND
//
// MessageText:
//
//  File not found - %1
//
#define MSG_ATTRIB_FILE_NOT_FOUND        0x00001B5CL

//
// MessageId: MSG_ATTRIB_PATH_NOT_FOUND
//
// MessageText:
//
//  Path not found - %1
//
#define MSG_ATTRIB_PATH_NOT_FOUND        0x00001B5DL

//
// MessageId: MSG_ATTRIB_PARAMETER_NOT_CORRECT
//
// MessageText:
//
//  Parameter format not correct -
//
#define MSG_ATTRIB_PARAMETER_NOT_CORRECT 0x00001B5EL

//
// MessageId: MSG_ATTRIB_NOT_RESETTING_SYS_FILE
//
// MessageText:
//
//  Not resetting system file - %1
//
#define MSG_ATTRIB_NOT_RESETTING_SYS_FILE 0x00001B5FL

//
// MessageId: MSG_ATTRIB_NOT_RESETTING_HIDDEN_FILE
//
// MessageText:
//
//  Not resetting hidden file - %1
//
#define MSG_ATTRIB_NOT_RESETTING_HIDDEN_FILE 0x00001B60L

//
// MessageId: MSG_ATTRIB_DISPLAY_ATTRIBUTE
//
// MessageText:
//
//  %1  %2%3%4     %5
//
#define MSG_ATTRIB_DISPLAY_ATTRIBUTE     0x00001B61L

//
// MessageId: MSG_ATTRIB_HELP_MESSAGE
//
// MessageText:
//
//  Displays or changes file attributes.
//  
//  ATTRIB [+R | -R] [+A | -A ] [+S | -S] [+H | -H] [[drive:] [path] filename] [/S]
//  
//    +   Sets an attribute.
//    -   Clears an attribute.
//    R   Read-only file attribute.
//    A   Archive file attribute.
//    S   System file attribute.
//    H   Hidden file attribute.
//    /S  Processes files in all directories in the specified path.
//  
//
#define MSG_ATTRIB_HELP_MESSAGE          0x00001B62L

//
// MessageId: MSG_ATTRIB_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch - %1
//
#define MSG_ATTRIB_INVALID_SWITCH        0x00001B64L

//
// MessageId: MSG_ATTRIB_ACCESS_DENIED
//
// MessageText:
//
//  Access denied - %1
//
#define MSG_ATTRIB_ACCESS_DENIED         0x00001B65L

//
// MessageId: MSG_ATTRIB_UNABLE_TO_CHANGE_ATTRIBUTE
//
// MessageText:
//
//  Unable to change attribute - %1
//
#define MSG_ATTRIB_UNABLE_TO_CHANGE_ATTRIBUTE 0x00001B66L

//--------------------
//
// Messages for sort
//
//--------------------
//
// MessageId: MSG_SORT_VALUE_NOT_IN_RANGE
//
// MessageText:
//
//  SORT:  Parameter value not in allowed range
//
#define MSG_SORT_VALUE_NOT_IN_RANGE      0x00001F40L

//
// MessageId: MSG_SORT_INVALID_SWITCH
//
// MessageText:
//
//  SORT:  Invalid switch
//
#define MSG_SORT_INVALID_SWITCH          0x00001F41L

//
// MessageId: MSG_SORT_TOO_MANY_PARAMETERS
//
// MessageText:
//
//  SORT:  Too many parameters
//
#define MSG_SORT_TOO_MANY_PARAMETERS     0x00001F42L

//
// MessageId: MSG_SORT_HELP_MESSAGE
//
// MessageText:
//
//  Sorts input and writes results to the screen, a file, or another device.
//  
//  SORT [/R] [/+n] < [drive1:][path1]filename1 [> [drive2:][path2]filename2]
//  [command |] SORT [/R] [/+n] [> [drive2:][path2]filename2]
//  
//    /R                         Reverses the sort order; that is, sorts Z to A,
//                               then 9 to 0.
//    /+n                        Sorts the file according to characters in
//                               column n.
//    [drive1:][path1]filename1  Specifies a file to be sorted.
//    [drive2:][path2]filename2  Specifies a file where the sorted input is to be
//                               stored.
//    command                    Specifies a command whose output is to be sorted.
//  
//  
//
#define MSG_SORT_HELP_MESSAGE            0x00001F43L

//-------------------
//
// Diskcopy messages.
//
//-------------------
//
// MessageId: MSG_9000
//
// MessageText:
//
//  
//
#define MSG_9000                         0x00002328L

//
// MessageId: MSG_9001
//
// MessageText:
//
//  Do not specify filename(s)
//  Command Format: DISKCOPY [drive1: [drive2:]] [/1] [/V]
//
#define MSG_9001                         0x00002329L

//
// MessageId: MSG_DCOPY_INVALID_DRIVE
//
// MessageText:
//
//  
//  Invalid drive specification
//  Specified drive does not exist
//  or is non-removable
//
#define MSG_DCOPY_INVALID_DRIVE          0x0000232AL

//
// MessageId: MSG_9003
//
// MessageText:
//
//  
//  Cannot DISKCOPY to or from
//  a network drive
//
#define MSG_9003                         0x0000232BL

//
// MessageId: MSG_DCOPY_FORMATTING_WHILE_COPYING
//
// MessageText:
//
//  
//  Formatting while copying
//
#define MSG_DCOPY_FORMATTING_WHILE_COPYING 0x0000232CL

//
// MessageId: MSG_DCOPY_INSERT_SOURCE
//
// MessageText:
//
//  
//  Insert SOURCE disk in drive %1
//
#define MSG_DCOPY_INSERT_SOURCE          0x0000232DL

//
// MessageId: MSG_DCOPY_INSERT_TARGET
//
// MessageText:
//
//  
//  Insert TARGET disk in drive %1
//
#define MSG_DCOPY_INSERT_TARGET          0x0000232EL

//
// MessageId: MSG_9007
//
// MessageText:
//
//  Make sure a disk is inserted into
//  the drive and the door is closed
//
#define MSG_9007                         0x0000232FL

//
// MessageId: MSG_9008
//
// MessageText:
//
//  
//  Target disk may be unusable
//
#define MSG_9008                         0x00002330L

//
// MessageId: MSG_DCOPY_BAD_TARGET
//
// MessageText:
//
//  
//  Target disk unusable
//
#define MSG_DCOPY_BAD_TARGET             0x00002331L

//
// MessageId: MSG_DCOPY_ANOTHER
//
// MessageText:
//
//  
//  Copy another disk (Y/N)?  %0
//
#define MSG_DCOPY_ANOTHER                0x00002332L

//
// MessageId: MSG_DCOPY_COPYING
//
// MessageText:
//
//  
//  Copying %1 tracks
//  %2 sectors per track, %3 side(s)
//
#define MSG_DCOPY_COPYING                0x00002333L

//
// MessageId: MSG_DCOPY_NON_COMPAT_DISKS
//
// MessageText:
//
//  
//  Drive types or disk types
//  not compatible
//
#define MSG_DCOPY_NON_COMPAT_DISKS       0x00002334L

//
// MessageId: MSG_DCOPY_READ_ERROR
//
// MessageText:
//
//  
//  Unrecoverable read error on drive %1
//  side %2, track %3
//
#define MSG_DCOPY_READ_ERROR             0x00002335L

//
// MessageId: MSG_DCOPY_WRITE_ERROR
//
// MessageText:
//
//  
//  Unrecoverable write error on drive %1
//  side %2, track %3
//
#define MSG_DCOPY_WRITE_ERROR            0x00002336L

//
// MessageId: MSG_DCOPY_ENDED
//
// MessageText:
//
//  
//  Copy process ended
//
#define MSG_DCOPY_ENDED                  0x00002337L

//
// MessageId: MSG_DCOPY_BAD_SOURCE
//
// MessageText:
//
//  
//  SOURCE disk bad or incompatible.
//
#define MSG_DCOPY_BAD_SOURCE             0x00002338L

//
// MessageId: MSG_DCOPY_BAD_DEST
//
// MessageText:
//
//  
//  TARGET disk bad or incompatible.
//
#define MSG_DCOPY_BAD_DEST               0x00002339L

//
// MessageId: MSG_DCOPY_INFO
//
// MessageText:
//
//  Copies the contents of one floppy disk to another.
//  
//
#define MSG_DCOPY_INFO                   0x0000233CL

//
// MessageId: MSG_DCOPY_USAGE
//
// MessageText:
//
//  DISKCOPY [drive1: [drive2:]] [/V]
//  
//
#define MSG_DCOPY_USAGE                  0x0000233DL

//
// MessageId: MSG_DCOPY_SLASH_V
//
// MessageText:
//
//    /V   Verifies that the information is copied correctly.
//  
//
#define MSG_DCOPY_SLASH_V                0x0000233FL

//
// MessageId: MSG_DCOPY_INFO_2
//
// MessageText:
//
//  The two floppy disks must be the same type.
//  You may specify the same drive for drive1 and drive2.
//
#define MSG_DCOPY_INFO_2                 0x00002340L

//
// MessageId: MSG_DCOPY_INSERT_SOURCE_AND_TARGET
//
// MessageText:
//
//  
//  Insert SOURCE disk in drive %1
//  
//  Insert TARGET disk in drive %2
//
#define MSG_DCOPY_INSERT_SOURCE_AND_TARGET 0x00002341L

//
// MessageId: MSG_DCOPY_UNRECOGNIZED_FORMAT
//
// MessageText:
//
//  Unrecognized format.
//
#define MSG_DCOPY_UNRECOGNIZED_FORMAT    0x00002342L

//
// MessageId: MSG_DCOPY_NOT_ADMINISTRATOR
//
// MessageText:
//
//  You need to be an administrator to copy this disk.
//
#define MSG_DCOPY_NOT_ADMINISTRATOR      0x00002343L

//-------------------
//
// Diskcomp messages.
//
//-------------------
//
// MessageId: MSG_10000
//
// MessageText:
//
//  Do not specify filename(s)
//  Command format: DISKCOMP [drive1: [drive2:]] [/1] [/8]
//
#define MSG_10000                        0x00002710L

//
// MessageId: MSG_10001
//
// MessageText:
//
//  
//  Invalid drive specification
//  Specified drive does not exist
//  or is non-removable.
//
#define MSG_10001                        0x00002711L

//
// MessageId: MSG_DCOMP_INSERT_FIRST
//
// MessageText:
//
//  
//  Insert FIRST disk in drive %1
//
#define MSG_DCOMP_INSERT_FIRST           0x00002713L

//
// MessageId: MSG_DCOMP_INSERT_SECOND
//
// MessageText:
//
//  
//  Insert SECOND disk in drive %1
//
#define MSG_DCOMP_INSERT_SECOND          0x00002714L

//
// MessageId: MSG_DCOMP_FIRST_DISK_BAD
//
// MessageText:
//
//  
//  FIRST disk bad or incompatible
//
#define MSG_DCOMP_FIRST_DISK_BAD         0x00002715L

//
// MessageId: MSG_DCOMP_SECOND_DISK_BAD
//
// MessageText:
//
//  
//  SECOND disk bad or incompatible
//
#define MSG_DCOMP_SECOND_DISK_BAD        0x00002716L

//
// MessageId: MSG_DCOMP_ANOTHER
//
// MessageText:
//
//  
//  Compare another disk (Y/N) ? %0
//
#define MSG_DCOMP_ANOTHER                0x00002717L

//
// MessageId: MSG_DCOMP_COMPARING
//
// MessageText:
//
//  
//  Comparing %1 tracks
//  %2 sectors per track, %3 side(s)
//
#define MSG_DCOMP_COMPARING              0x00002718L

//
// MessageId: MSG_DCOMP_NOT_COMPATIBLE
//
// MessageText:
//
//  
//  Drive types or disk types not compatible
//
#define MSG_DCOMP_NOT_COMPATIBLE         0x00002719L

//
// MessageId: MSG_10010
//
// MessageText:
//
//  
//  Unrecoverable read error on drive %1
//  side %2, track %3
//
#define MSG_10010                        0x0000271AL

//
// MessageId: MSG_DCOMP_COMPARE_ERROR
//
// MessageText:
//
//  
//  Compare error on
//  side %1, track %2
//
#define MSG_DCOMP_COMPARE_ERROR          0x0000271BL

//
// MessageId: MSG_10012
//
// MessageText:
//
//  Make sure a disk is inserted into
//  the drive and the door is closed.
//
#define MSG_10012                        0x0000271CL

//
// MessageId: MSG_DCOMP_ENDED
//
// MessageText:
//
//  
//  Compare process ended.
//
#define MSG_DCOMP_ENDED                  0x0000271DL

//
// MessageId: MSG_DCOMP_OK
//
// MessageText:
//
//  
//  Compare OK
//
#define MSG_DCOMP_OK                     0x0000271EL

//
// MessageId: MSG_10015
//
// MessageText:
//
//  
//
#define MSG_10015                        0x0000271FL

//
// MessageId: MSG_DCOMP_INFO
//
// MessageText:
//
//  Compares the contents of two floppy disks.
//  
//
#define MSG_DCOMP_INFO                   0x00002720L

//
// MessageId: MSG_DCOMP_USAGE
//
// MessageText:
//
//  DISKCOMP [drive1: [drive2:]]
//  
//
#define MSG_DCOMP_USAGE                  0x00002721L

//--------------------
//
// Messages for tree
//
//--------------------
//
// MessageId: MSG_TREE_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch - /%1
//
#define MSG_TREE_INVALID_SWITCH          0x00002AF8L

//
// MessageId: MSG_TREE_INVALID_PATH
//
// MessageText:
//
//  Invalid path - %1
//
#define MSG_TREE_INVALID_PATH            0x00002AF9L

//
// MessageId: MSG_TREE_NO_SUBDIRECTORIES
//
// MessageText:
//
//  No subdirectories exist %1
//
#define MSG_TREE_NO_SUBDIRECTORIES       0x00002AFAL

//
// MessageId: MSG_TREE_DIR_LISTING_NO_VOLUME_NAME
//
// MessageText:
//
//  Directory PATH listing
//
#define MSG_TREE_DIR_LISTING_NO_VOLUME_NAME 0x00002AFBL

//
// MessageId: MSG_TREE_DIR_LISTING_WITH_VOLUME_NAME
//
// MessageText:
//
//  Directory PATH listing for volume %1
//
#define MSG_TREE_DIR_LISTING_WITH_VOLUME_NAME 0x00002AFCL

//
// MessageId: MSG_TREE_32_BIT_SERIAL_NUMBER
//
// MessageText:
//
//  Volume serial number is %1-%2
//
#define MSG_TREE_32_BIT_SERIAL_NUMBER    0x00002AFDL

//
// MessageId: MSG_TREE_64_BIT_SERIAL_NUMBER
//
// MessageText:
//
//  Volume serial number is %1 %2:%3
//
#define MSG_TREE_64_BIT_SERIAL_NUMBER    0x00002AFEL

//
// MessageId: MSG_TREE_HELP_MESSAGE
//
// MessageText:
//
//  Graphically displays the directory structure of a drive or path.
//  
//  TREE [drive:][path] [/F] [/A]
//  
//     /F   Display the names of the files in each directory.
//     /A   Use ASCII instead of extended characters.
//  
//
#define MSG_TREE_HELP_MESSAGE            0x00002AFFL

//
// MessageId: MSG_TREE_SINGLE_BOTTOM_LEFT_CORNER
//
// MessageText:
//
//  Ç
//
#define MSG_TREE_SINGLE_BOTTOM_LEFT_CORNER 0x00002B00L

//
// MessageId: MSG_TREE_SINGLE_BOTTOM_HORIZONTAL
//
// MessageText:
//
//  â
//
#define MSG_TREE_SINGLE_BOTTOM_HORIZONTAL 0x00002B01L

//
// MessageId: MSG_TREE_SINGLE_LEFT_T
//
// MessageText:
//
//  ä
//
#define MSG_TREE_SINGLE_LEFT_T           0x00002B02L

//
// MessageId: MSG_TREE_PARAMETER_NOT_CORRECT
//
// MessageText:
//
//  Parameter format not correct - %1
//
#define MSG_TREE_PARAMETER_NOT_CORRECT   0x00002B03L

//
// MessageId: MSG_TREE_TOO_MANY_PARAMETERS
//
// MessageText:
//
//  Too many parameters - %1
//
#define MSG_TREE_TOO_MANY_PARAMETERS     0x00002B04L

//
// MessageId: MSG_TREE_INVALID_DRIVE
//
// MessageText:
//
//  Invalid drive specification
//
#define MSG_TREE_INVALID_DRIVE           0x00002B05L

//-------------------
//
// Find messages.
//
//-------------------
//
// MessageId: MSG_FIND
//
// MessageText:
//
//  FIND:  %0
//
#define MSG_FIND                         0x00002EE0L

//
// MessageId: MSG_FIND_INCORRECT_VERSION
//
// MessageText:
//
//  FIND: Incorrect Windows NT version
//
#define MSG_FIND_INCORRECT_VERSION       0x00002EE1L

//
// MessageId: MSG_FIND_INVALID_SWITCH
//
// MessageText:
//
//  FIND: Invalid switch
//
#define MSG_FIND_INVALID_SWITCH          0x00002EE2L

//
// MessageId: MSG_FIND_INVALID_FORMAT
//
// MessageText:
//
//  FIND: Parameter format not correct
//
#define MSG_FIND_INVALID_FORMAT          0x00002EE3L

//
// MessageId: MSG_FIND_USAGE
//
// MessageText:
//
//  Searches for a text string in a file or files.
//  
//  FIND [/V] [/C] [/N] [/I] "string" [[drive:][path]filename[ ...]]
//  
//    /V        Displays all lines NOT containing the specified string.
//    /C        Displays only the count of lines containing the string.
//    /N        Displays line numbers with the displayed lines.
//    /I        Ignores the case of characters when searching for the string.
//    "string"  Specifies the text string to find.
//    [drive:][path]filename
//              Specifies a file or files to search.
//  
//  If a path is not specified, FIND searches the text typed at the prompt
//  or piped from another command.
//
#define MSG_FIND_USAGE                   0x00002EE4L

//
// MessageId: MSG_FIND_MISSING_PARM
//
// MessageText:
//
//  FIND: Required parameter missing
//
#define MSG_FIND_MISSING_PARM            0x00002EE5L

//
// MessageId: MSG_FIND_FILE_NOT_FOUND
//
// MessageText:
//
//  File not found - %1
//
#define MSG_FIND_FILE_NOT_FOUND          0x00002EE6L

//
// MessageId: MSG_FIND_COUNT
//
// MessageText:
//
//  %1
//
#define MSG_FIND_COUNT                   0x00002EE7L

//
// MessageId: MSG_FIND_COUNT_BANNER
//
// MessageText:
//
//  
//  ---------- %1: %2
//
#define MSG_FIND_COUNT_BANNER            0x00002EE8L

//
// MessageId: MSG_FIND_BANNER
//
// MessageText:
//
//  
//  ---------- %1
//
#define MSG_FIND_BANNER                  0x00002EE9L

//
// MessageId: MSG_FIND_LINEONLY
//
// MessageText:
//
//  %1
//
#define MSG_FIND_LINEONLY                0x00002EEAL

//
// MessageId: MSG_FIND_LINE_AND_NUMBER
//
// MessageText:
//
//  [%1]%2
//
#define MSG_FIND_LINE_AND_NUMBER         0x00002EEBL

//-----------------
//
// FC Messages
//
//-----------------
//
// MessageId: MSG_FC_HELP_MESSAGE
//
// MessageText:
//
//  Compares two files or sets of files and displays the differences between
//  them
//  
//  
//  FC [/A] [/C] [/L] [/LBn] [/N] [/T] [/U] [/W] [/nnnn] [drive1:][path1]filename1
//            [drive2:][path2]filename2
//  FC /B [drive1:][path1]filename1 [drive2:][path2]filename2
//  
//     /A     Displays only first and last lines for each set of differences.
//     /B     Performs a binary comparison.
//     /C     Disregards the case of letters.
//     /L     Compares files as ASCII text.
//     /LBn   Sets the maximum consecutive mismatches to the specified number of
//            lines.
//     /N     Displays the line numbers on an ASCII comparison.
//     /T     Does not expand tabs to spaces.
//     /U     Compare files as UNICODE text files.
//     /W     Compresses white space (tabs and spaces) for comparison.
//     /nnnn  Specifies the number of consecutive lines that must match after a
//            mismatch.
//  
//
#define MSG_FC_HELP_MESSAGE              0x000032C8L

//
// MessageId: MSG_FC_INCOMPATIBLE_SWITCHES
//
// MessageText:
//
//  FC: Incompatible Switches
//  
//
#define MSG_FC_INCOMPATIBLE_SWITCHES     0x000032C9L

//
// MessageId: MSG_FC_INVALID_SWITCH
//
// MessageText:
//
//  FC: Invalid Switch
//  
//
#define MSG_FC_INVALID_SWITCH            0x000032CAL

//
// MessageId: MSG_FC_INSUFFICIENT_FILES
//
// MessageText:
//
//  FC: Insufficient number of file specifications
//  
//
#define MSG_FC_INSUFFICIENT_FILES        0x000032CBL

//
// MessageId: MSG_13004
//
// MessageText:
//
//  Comparing files %1 and %2
//
#define MSG_13004                        0x000032CCL

//
// MessageId: MSG_FC_UNABLE_TO_OPEN
//
// MessageText:
//
//  FC: cannot open %1 - No such file or directory
//  
//
#define MSG_FC_UNABLE_TO_OPEN            0x000032CDL

//
// MessageId: MSG_FC_CANT_EXPAND_TO_MATCH
//
// MessageText:
//
//  %1      %2
//  Could not expand second filename so as to match first
//  
//
#define MSG_FC_CANT_EXPAND_TO_MATCH      0x000032CEL

//
// MessageId: MSG_FC_NO_DIFFERENCES
//
// MessageText:
//
//  FC: no differences encountered
//  
//
#define MSG_FC_NO_DIFFERENCES            0x000032CFL

//
// MessageId: MSG_FC_COMPARING_FILES
//
// MessageText:
//
//  Comparing files %1 and %2
//
#define MSG_FC_COMPARING_FILES           0x000032D0L

//
// MessageId: MSG_FC_FILES_NOT_FOUND
//
// MessageText:
//
//  File(s) not found : %1
//  
//
#define MSG_FC_FILES_NOT_FOUND           0x000032D1L

//
// MessageId: MSG_FC_DATA
//
// MessageText:
//
//  %1
//
#define MSG_FC_DATA                      0x000032D2L

//
// MessageId: MSG_FC_NUMBERED_DATA
//
// MessageText:
//
//  %1:  %2
//
#define MSG_FC_NUMBERED_DATA             0x000032D3L

//
// MessageId: MSG_FC_OUTPUT_FILENAME
//
// MessageText:
//
//  ***** %1
//
#define MSG_FC_OUTPUT_FILENAME           0x000032D4L

//
// MessageId: MSG_FC_DUMP_END
//
// MessageText:
//
//  *****
//  
//
#define MSG_FC_DUMP_END                  0x000032D5L

//
// MessageId: MSG_FC_FILES_DIFFERENT_LENGTH
//
// MessageText:
//
//  FC: %1 longer than %2
//  
//  
//
#define MSG_FC_FILES_DIFFERENT_LENGTH    0x000032D6L

//
// MessageId: MSG_FC_RESYNC_FAILED
//
// MessageText:
//
//  Resync Failed.  Files are too different
//
#define MSG_FC_RESYNC_FAILED             0x000032D7L

//
// MessageId: MSG_FC_CANT_CREATE_STREAM
//
// MessageText:
//
//  FC: Unable to open %1.  File unavailable for read access
//  
//
#define MSG_FC_CANT_CREATE_STREAM        0x000032D8L

//
// MessageId: MSG_FC_INCORRECT_VERSION
//
// MessageText:
//
//  FC: Incorrect Windows NT Version
//  
//
#define MSG_FC_INCORRECT_VERSION         0x000032D9L

//
// MessageId: MSG_FC_ABBREVIATE_SYMBOL
//
// MessageText:
//
//  ...
//
#define MSG_FC_ABBREVIATE_SYMBOL         0x000032DAL

//
// MessageId: MSG_FC_ABBREVIATE_SYMBOL_SHIFTED
//
// MessageText:
//
//    ...
//
#define MSG_FC_ABBREVIATE_SYMBOL_SHIFTED 0x000032DBL

//
// MessageId: MSG_FC_HEX_OUT
//
// MessageText:
//
//  %1: %2 %3
//
#define MSG_FC_HEX_OUT                   0x000032DCL

//
// MessageId: MSG_FC_OUT_OF_MEMORY
//
// MessageText:
//
//  FC: Out of memory
//
#define MSG_FC_OUT_OF_MEMORY             0x000032DDL

//-----------------
//
// Comp Messages
//
//-----------------
//
// MessageId: MSG_COMP_HELP_MESSAGE
//
// MessageText:
//
//  Compares the contents of two files or sets of files.
//  
//  COMP [data1] [data2] [/D] [/A] [/L] [/N=number] [/C]
//  
//    data1     Specifies location and name(s) of first file(s) to compare.
//    data2     Specifies location and name(s) of second files to compare.
//    /D        Displays differences in decimal format. This is the default
//              setting.
//    /A        Displays differences in ASCII characters.
//    /L        Displays line numbers for differences.
//    /N=number Compares only the first specified number of lines in each file.
//    /C        Disregards case of ASCII letters when comparing files.
//  
//  To compare sets of files, use wildcards in data1 and data2 parameters.
//
#define MSG_COMP_HELP_MESSAGE            0x000036B0L

//
// MessageId: MSG_COMP_FILES_OK
//
// MessageText:
//
//  Files compare OK
//  
//
#define MSG_COMP_FILES_OK                0x000036B1L

//
// MessageId: MSG_COMP_NO_MEMORY
//
// MessageText:
//
//  No memory available.
//  
//
#define MSG_COMP_NO_MEMORY               0x000036B2L

//
// MessageId: MSG_COMP_UNABLE_TO_OPEN
//
// MessageText:
//
//  Can't find/open file: %1
//  
//
#define MSG_COMP_UNABLE_TO_OPEN          0x000036B3L

//
// MessageId: MSG_COMP_UNABLE_TO_READ
//
// MessageText:
//
//  Can't read file: %1
//  
//
#define MSG_COMP_UNABLE_TO_READ          0x000036B4L

//
// MessageId: MSG_COMP_BAD_COMMAND_LINE
//
// MessageText:
//
//  Bad command line syntax
//  
//
#define MSG_COMP_BAD_COMMAND_LINE        0x000036B5L

//
// MessageId: MSG_COMP_BAD_NUMERIC_ARG
//
// MessageText:
//
//  Bad numeric argument :
//  %1
//  
//
#define MSG_COMP_BAD_NUMERIC_ARG         0x000036B6L

//
// MessageId: MSG_COMP_COMPARE_ERROR
//
// MessageText:
//
//  Compare error at %1 %2
//  file1 = %3
//  file2 = %4
//
#define MSG_COMP_COMPARE_ERROR           0x000036B7L

//
// MessageId: MSG_COMP_QUERY_FILE1
//
// MessageText:
//
//  Name of first file to compare: %0
//
#define MSG_COMP_QUERY_FILE1             0x000036B8L

//
// MessageId: MSG_COMP_QUERY_FILE2
//
// MessageText:
//
//  Name of second file to compare: %0
//
#define MSG_COMP_QUERY_FILE2             0x000036B9L

//
// MessageId: MSG_COMP_OPTION
//
// MessageText:
//
//  Option : %0
//
#define MSG_COMP_OPTION                  0x000036BAL

//
// MessageId: MSG_COMP_COMPARE_FILES
//
// MessageText:
//
//  Comparing %1 and %2...
//
#define MSG_COMP_COMPARE_FILES           0x000036BBL

//
// MessageId: MSG_COMP_DIFFERENT_SIZES
//
// MessageText:
//
//  Files are different sizes.
//  
//
#define MSG_COMP_DIFFERENT_SIZES         0x000036BCL

//
// MessageId: MSG_COMP_NUMERIC_FORMAT
//
// MessageText:
//
//  Format for /n switch is /n=XXXX
//
#define MSG_COMP_NUMERIC_FORMAT          0x000036BDL

//
// MessageId: MSG_COMP_MORE
//
// MessageText:
//
//  Compare more files (Y/N) ? %0
//
#define MSG_COMP_MORE                    0x000036BEL

//
// MessageId: MSG_COMP_UNABLE_TO_EXPAND
//
// MessageText:
//
//  %1      %2
//  Could not expand second filename so as to match first
//  
//
#define MSG_COMP_UNABLE_TO_EXPAND        0x000036BFL

//
// MessageId: MSG_COMP_TOO_MANY_ERRORS
//
// MessageText:
//
//  10 Mismatches - ending compare
//  
//
#define MSG_COMP_TOO_MANY_ERRORS         0x000036C0L

//
// MessageId: MSG_COMP_INCORRECT_VERSION
//
// MessageText:
//
//  Incorrect Windows NT version
//  
//
#define MSG_COMP_INCORRECT_VERSION       0x000036C1L

//
// MessageId: MSG_COMP_UNEXPECTED_END
//
// MessageText:
//
//  Unexpected end of file
//  
//
#define MSG_COMP_UNEXPECTED_END          0x000036C2L

//
// MessageId: MSG_COMP_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch - %1
//  
//
#define MSG_COMP_INVALID_SWITCH          0x000036C3L

//
// MessageId: MSG_COMP_FILE1_TOO_SHORT
//
// MessageText:
//
//  
//  File1 only has %1 lines
//  
//
#define MSG_COMP_FILE1_TOO_SHORT         0x000036C4L

//
// MessageId: MSG_COMP_FILE2_TOO_SHORT
//
// MessageText:
//
//  
//  File2 only has %1 lines
//  
//
#define MSG_COMP_FILE2_TOO_SHORT         0x000036C5L

//
// MessageId: MSG_COMP_WILDCARD_STRING
//
// MessageText:
//
//  *.*%0
//
#define MSG_COMP_WILDCARD_STRING         0x000036C6L

//---------------------------
//
// FAT/HPFS Recover messages.
//
//---------------------------
//
// MessageId: MSG_RECOV_FILE_NOT_FOUND
//
// MessageText:
//
//  
//  File not found
//
#define MSG_RECOV_FILE_NOT_FOUND         0x00003A98L

//
// MessageId: MSG_15001
//
// MessageText:
//
//  
//  Cannot RECOVER an ASSIGNed or SUBSTed drive
//
#define MSG_15001                        0x00003A99L

//
// MessageId: MSG_INVALID_DRIVE
//
// MessageText:
//
//  
//  Invalid drive or file name
//
#define MSG_INVALID_DRIVE                0x00003A9AL

//
// MessageId: MSG_RECOV_CANT_NETWORK
//
// MessageText:
//
//  
//  Cannot RECOVER a network drive
//
#define MSG_RECOV_CANT_NETWORK           0x00003A9CL

//
// MessageId: MSG_15005
//
// MessageText:
//
//  
//  %1 file(s) recovered.
//
#define MSG_15005                        0x00003A9DL

//
// MessageId: MSG_RECOV_BYTES_RECOVERED
//
// MessageText:
//
//  
//  %1 of %2 bytes recovered.
//
#define MSG_RECOV_BYTES_RECOVERED        0x00003A9EL

//
// MessageId: MSG_RECOV_BEGIN
//
// MessageText:
//
//  
//  Press ENTER to begin recovery of the file on drive %1
//  
//
#define MSG_RECOV_BEGIN                  0x00003A9FL

//
// MessageId: MSG_RECOV_CANT_READ_FAT
//
// MessageText:
//
//  
//  Cannot read the file allocation table (FAT).
//
#define MSG_RECOV_CANT_READ_FAT          0x00003AA0L

//
// MessageId: MSG_RECOV_CANT_WRITE_FAT
//
// MessageText:
//
//  
//  Cannot write the file allocation table (FAT).
//
#define MSG_RECOV_CANT_WRITE_FAT         0x00003AA1L

//
// MessageId: MSG_15010
//
// MessageText:
//
//  
//
#define MSG_15010                        0x00003AA2L

//
// MessageId: MSG_RECOV_INFO
//
// MessageText:
//
//  Recovers readable information from a bad or defective disk.
//  
//
#define MSG_RECOV_INFO                   0x00003AA3L

//
// MessageId: MSG_RECOV_USAGE
//
// MessageText:
//
//  RECOVER [drive:][path]filename
//
#define MSG_RECOV_USAGE                  0x00003AA4L

//
// MessageId: MSG_15013
//
// MessageText:
//
//  RECOVER drive:
//  
//
#define MSG_15013                        0x00003AA5L

//
// MessageId: MSG_RECOV_INFO2
//
// MessageText:
//
//  Consult the online Command Reference in Windows NT Help
//  before using the RECOVER command.
//
#define MSG_RECOV_INFO2                  0x00003AA6L

//
// MessageId: MSG_RECOV_WRITE_ERROR
//
// MessageText:
//
//  Write error.
//
#define MSG_RECOV_WRITE_ERROR            0x00003AA9L

//
// MessageId: MSG_RECOV_INTERNAL_ERROR
//
// MessageText:
//
//  Internal consistency error.
//
#define MSG_RECOV_INTERNAL_ERROR         0x00003AAAL

//
// MessageId: MSG_RECOV_READ_ERROR
//
// MessageText:
//
//  Read error.
//
#define MSG_RECOV_READ_ERROR             0x00003AABL

//
// MessageId: MSG_RECOV_NOT_SUPPORTED
//
// MessageText:
//
//  RECOVER on an entire volume is no longer supported.
//  To get equivalent functionality use CHKDSK.
//
#define MSG_RECOV_NOT_SUPPORTED          0x00003AACL

//----------------------------------
//
//  HPFS-specific recover messages
//
//----------------------------------
//
// MessageId: MSG_HPFS_RECOVER_DIRECTORY
//
// MessageText:
//
//  HPFS Recover does not support recovering directories.
//
#define MSG_HPFS_RECOVER_DIRECTORY       0x00003B61L

//----------------------------------
//
//  NTFS-specific recover messages
//
//----------------------------------
//
// MessageId: MSG_NTFS_RECOV_SYSTEM_FILE
//
// MessageText:
//
//  NTFS RECOVER cannot be used to recover system files; use CHKDSK instead.
//
#define MSG_NTFS_RECOV_SYSTEM_FILE       0x00003C29L

//
// MessageId: MSG_NTFS_RECOV_FAILED
//
// MessageText:
//
//  NTFS RECOVER failed.
//
#define MSG_NTFS_RECOV_FAILED            0x00003C2AL

//
// MessageId: MSG_NTFS_RECOV_CORRUPT_VOLUME
//
// MessageText:
//
//  NTFS RECOVER has detected that the volume is corrupt.  Run CHKDSK /f
//  to fix it.
//
#define MSG_NTFS_RECOV_CORRUPT_VOLUME    0x00003AC3L

//
// MessageId: MSG_NTFS_RECOV_CANT_WRITE_ELEMENTARY
//
// MessageText:
//
//  NTFS Recover could not write elementary disk structures.  The volume
//  may be corrupt; run CHKDSK /f to fix it.
//
#define MSG_NTFS_RECOV_CANT_WRITE_ELEMENTARY 0x00003AC4L

//
// MessageId: MSG_NTFS_RECOV_WRONG_VERSION
//
// MessageText:
//
//  Files on this volume cannot be recovered with this version of UNTFS.DLL.
//
#define MSG_NTFS_RECOV_WRONG_VERSION     0x00003AC5L

//--------------------
//
// Messages for Print
//
//--------------------
//
// MessageId: MSG_PRINT_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch - %1
//
#define MSG_PRINT_INVALID_SWITCH         0x00003E80L

//
// MessageId: MSG_PRINT_NOT_IMPLEMENTED
//
// MessageText:
//
//  Switch %1 is not implemented
//
#define MSG_PRINT_NOT_IMPLEMENTED        0x00003E81L

//
// MessageId: MSG_PRINT_NO_FILE
//
// MessageText:
//
//  No file to print
//
#define MSG_PRINT_NO_FILE                0x00003E82L

//
// MessageId: MSG_PRINT_UNABLE_INIT_DEVICE
//
// MessageText:
//
//  Unable to initialize device %1
//
#define MSG_PRINT_UNABLE_INIT_DEVICE     0x00003E83L

//
// MessageId: MSG_PRINT_FILE_NOT_FOUND
//
// MessageText:
//
//  Can't find file %1
//
#define MSG_PRINT_FILE_NOT_FOUND         0x00003E84L

//
// MessageId: MSG_PRINT_PRINTING
//
// MessageText:
//
//  %1 is currently being printed
//
#define MSG_PRINT_PRINTING               0x00003E85L

//
// MessageId: MSG_PRINT_HELP_MESSAGE
//
// MessageText:
//
//  Prints a text file.
//  
//  PRINT [/D:device] [[drive:][path]filename[...]]
//  
//     /D:device   Specifies a print device.
//  
//
#define MSG_PRINT_HELP_MESSAGE           0x00003E86L

//---------------
//
// Help Messages
//
//---------------
//
// MessageId: MSG_HELP_HELP_MESSAGE
//
// MessageText:
//
//  Provides help information for Windows NT commands.
//  
//  HELP [command]
//  
//      command - displays help information on that command.
//  
//
#define MSG_HELP_HELP_MESSAGE            0x00004268L

//
// MessageId: MSG_HELP_HELP_FILE_NOT_FOUND
//
// MessageText:
//
//  Help file could not be found.
//  
//
#define MSG_HELP_HELP_FILE_NOT_FOUND     0x00004269L

//
// MessageId: MSG_HELP_HELP_FILE_ERROR
//
// MessageText:
//
//  Error reading help file.
//  
//
#define MSG_HELP_HELP_FILE_ERROR         0x0000426AL

//
// MessageId: MSG_HELP_GENERAL_HELP
//
// MessageText:
//
//  
//  
//  For more information on a specific command, type HELP command-name.
//
#define MSG_HELP_GENERAL_HELP            0x0000426BL

//
// MessageId: MSG_HELP_HELP_UNAVAILABLE
//
// MessageText:
//
//  This command is not supported by the help utility.  Try "%1 /?".
//
#define MSG_HELP_HELP_UNAVAILABLE        0x0000426CL

//
// MessageId: MSG_HELP_HELP_COMMENT
//
// MessageText:
//
//  @ %0
//
#define MSG_HELP_HELP_COMMENT            0x0000426DL

//
// MessageId: MSG_HELP_EXECUTE_WITH_CMD
//
// MessageText:
//
//  cmd /c %1 /? %0
//
#define MSG_HELP_EXECUTE_WITH_CMD        0x0000426EL

//
// MessageId: MSG_HELP_EXECUTE_WITHOUT_CMD
//
// MessageText:
//
//  %1 /? %0
//
#define MSG_HELP_EXECUTE_WITHOUT_CMD     0x0000426FL

//
// MessageId: MSG_HELP_HELP_FILE_NAME
//
// MessageText:
//
//  DosHelp.hlp%0
//
#define MSG_HELP_HELP_FILE_NAME          0x00004270L

//
// MessageId: MSG_HELP_HELP_FILE_DATA
//
// MessageText:
//
//  %1
//
#define MSG_HELP_HELP_FILE_DATA          0x00004271L

//
// MessageId: MSG_HELP_INCORRECT_VERSION
//
// MessageText:
//
//  Incorrect Windows NT version
//  
//
#define MSG_HELP_INCORRECT_VERSION       0x00004272L

//
// MessageId: MSG_HELP_MORE
//
// MessageText:
//
//  --- MORE ---%0
//
#define MSG_HELP_MORE                    0x00004273L

//---------------
//
// MORE messages.
//
//---------------
//
// MessageId: MORE_ENVIRONMENT_VARIABLE_NAME
//
// MessageText:
//
//  MORE%0
//
#define MORE_ENVIRONMENT_VARIABLE_NAME   0x00004E21L

//
// MessageId: MORE_PATTERN_SWITCH_EXTENDED
//
// MessageText:
//
//  /E%0
//
#define MORE_PATTERN_SWITCH_EXTENDED     0x00004E22L

//
// MessageId: MORE_PATTERN_SWITCH_CLEARSCREEN
//
// MessageText:
//
//  /C%0
//
#define MORE_PATTERN_SWITCH_CLEARSCREEN  0x00004E23L

//
// MessageId: MORE_PATTERN_SWITCH_EXPANDFORMFEED
//
// MessageText:
//
//  /P%0
//
#define MORE_PATTERN_SWITCH_EXPANDFORMFEED 0x00004E24L

//
// MessageId: MORE_PATTERN_SWITCH_SQUEEZEBLANKS
//
// MessageText:
//
//  /S%0
//
#define MORE_PATTERN_SWITCH_SQUEEZEBLANKS 0x00004E25L

//
// MessageId: MORE_PATTERN_SWITCH_HELP1
//
// MessageText:
//
//  /?%0
//
#define MORE_PATTERN_SWITCH_HELP1        0x00004E26L

//
// MessageId: MORE_PATTERN_SWITCH_HELP2
//
// MessageText:
//
//  /H%0
//
#define MORE_PATTERN_SWITCH_HELP2        0x00004E27L

//
// MessageId: MORE_PATTENR_ARG_STARTATLINE
//
// MessageText:
//
//  +*%0
//
#define MORE_PATTENR_ARG_STARTATLINE     0x00004E28L

//
// MessageId: MORE_LEXEMIZER_MULTIPLESWITCH
//
// MessageText:
//
//  /ECPSH?%0
//
#define MORE_LEXEMIZER_MULTIPLESWITCH    0x00004E2AL

//
// MessageId: MORE_LEXEMIZER_SWITCHES
//
// MessageText:
//
//  /-%0
//
#define MORE_LEXEMIZER_SWITCHES          0x00004E2BL

//
// MessageId: MORE_PROMPT
//
// MessageText:
//
//  -- More %1%2%3 -- %4%0
//
#define MORE_PROMPT                      0x00004E34L

//
// MessageId: MORE_PERCENT
//
// MessageText:
//
//  (%1%%)%0
//
#define MORE_PERCENT                     0x00004E35L

//
// MessageId: MORE_LINE
//
// MessageText:
//
//  [Line: %1]%0
//
#define MORE_LINE                        0x00004E36L

//
// MessageId: MORE_HELP
//
// MessageText:
//
//  [Options: psfq=<space><ret>]%0
//
#define MORE_HELP                        0x00004E37L

//
// MessageId: MORE_LINEPROMPT
//
// MessageText:
//
//  Lines: %0
//
#define MORE_LINEPROMPT                  0x00004E38L

//
// MessageId: MORE_OPTION_DISPLAYLINES
//
// MessageText:
//
//  P%0
//
#define MORE_OPTION_DISPLAYLINES         0x00004E3EL

//
// MessageId: MORE_OPTION_SKIPLINES
//
// MessageText:
//
//  S%0
//
#define MORE_OPTION_SKIPLINES            0x00004E3FL

//
// MessageId: MORE_OPTION_SHOWLINENUMBER
//
// MessageText:
//
//  =%0
//
#define MORE_OPTION_SHOWLINENUMBER       0x00004E40L

//
// MessageId: MORE_OPTION_QUIT
//
// MessageText:
//
//  Q%0
//
#define MORE_OPTION_QUIT                 0x00004E41L

//
// MessageId: MORE_OPTION_HELP1
//
// MessageText:
//
//  ?%0
//
#define MORE_OPTION_HELP1                0x00004E42L

//
// MessageId: MORE_OPTION_HELP2
//
// MessageText:
//
//  H%0
//
#define MORE_OPTION_HELP2                0x00004E43L

//
// MessageId: MORE_OPTION_NEXTFILE
//
// MessageText:
//
//  F%0
//
#define MORE_OPTION_NEXTFILE             0x00004E44L

//
// MessageId: MORE_MESSAGE_USAGE
//
// MessageText:
//
//  Displays output one screen at a time.
//  
//  MORE [/E [/C] [/P] [/S] [/Tn] [+n]] < [drive:][path]filename
//  command-name | MORE [/E [/C] [/P] [/S] [/Tn] [+n]]
//  MORE /E [/C] [/P] [/S] [/Tn] [+n] [files]
//  
//      [drive:][path]filename  Specifies a file to display one
//                              screen at a time.
//  
//      command-name            Specifies a command whose output
//                              will be displayed.
//  
//      /E      Enable extended features
//      /C      Clear screen before displaying page
//      /P      Expand FormFeed characters
//      /S      Squeeze multiple blank lines into a single line
//      /Tn     Expand tabs to n spaces (default 8)
//  
//              Switches can be present in the MORE environment
//              variable.
//  
//      +n      Start displaying the first file at line n
//  
//      files   List of files to be displayed. Files in the list
//              are separated by blanks.
//  
//      If extended features are enabled, the following commands
//      are accepted at the -- More -- prompt:
//  
//      P n     Display next n lines
//      S n     Skip next n lines
//      F       Display next file
//      Q       Quit
//      =       Show line number
//      ?       Show help line
//      <space> Display next page
//      <ret>   Display next line
//
#define MORE_MESSAGE_USAGE               0x00004E48L

//
// MessageId: MORE_ERROR_GENERAL
//
// MessageText:
//
//  Internal error.
//
#define MORE_ERROR_GENERAL               0x00004E52L

//
// MessageId: MORE_ERROR_TOO_MANY_ARGUMENTS
//
// MessageText:
//
//  Too many arguments in command line.
//
#define MORE_ERROR_TOO_MANY_ARGUMENTS    0x00004E53L

//
// MessageId: MORE_ERROR_NO_MEMORY
//
// MessageText:
//
//  Not enough memory.
//
#define MORE_ERROR_NO_MEMORY             0x00004E54L

//
// MessageId: MORE_ERROR_CANNOT_ACCESS
//
// MessageText:
//
//  Cannot access file %1
//
#define MORE_ERROR_CANNOT_ACCESS         0x00004E55L

//------------------
//
// REPLACE messages.
//
//------------------
//
// MessageId: REPLACE_PATTERN_SWITCH_ADD
//
// MessageText:
//
//  /A%0
//
#define REPLACE_PATTERN_SWITCH_ADD       0x00005209L

//
// MessageId: REPLACE_PATTERN_SWITCH_PROMPT
//
// MessageText:
//
//  /P%0
//
#define REPLACE_PATTERN_SWITCH_PROMPT    0x0000520AL

//
// MessageId: REPLACE_PATTERN_SWITCH_READONLY
//
// MessageText:
//
//  /R%0
//
#define REPLACE_PATTERN_SWITCH_READONLY  0x0000520BL

//
// MessageId: REPLACE_PATTERN_SWITCH_SUBDIR
//
// MessageText:
//
//  /S%0
//
#define REPLACE_PATTERN_SWITCH_SUBDIR    0x0000520CL

//
// MessageId: REPLACE_PATTERN_SWITCH_COMPARETIME
//
// MessageText:
//
//  /U%0
//
#define REPLACE_PATTERN_SWITCH_COMPARETIME 0x0000520DL

//
// MessageId: REPLACE_PATTERN_SWITCH_WAIT
//
// MessageText:
//
//  /W%0
//
#define REPLACE_PATTERN_SWITCH_WAIT      0x0000520EL

//
// MessageId: REPLACE_PATTERN_SWITCH_HELP
//
// MessageText:
//
//  /?%0
//
#define REPLACE_PATTERN_SWITCH_HELP      0x0000520FL

//
// MessageId: REPLACE_LEXEMIZER_SWITCHES
//
// MessageText:
//
//  /-%0
//
#define REPLACE_LEXEMIZER_SWITCHES       0x00005212L

//
// MessageId: REPLACE_LEXEMIZER_MULTIPLESWITCH
//
// MessageText:
//
//  /APRSUW?%0
//
#define REPLACE_LEXEMIZER_MULTIPLESWITCH 0x00005213L

//
// MessageId: REPLACE_MESSAGE_REPLACING
//
// MessageText:
//
//  Replacing %1
//
#define REPLACE_MESSAGE_REPLACING        0x0000521CL

//
// MessageId: REPLACE_MESSAGE_ADDING
//
// MessageText:
//
//  Adding %1
//
#define REPLACE_MESSAGE_ADDING           0x0000521DL

//
// MessageId: REPLACE_MESSAGE_FILES_REPLACED
//
// MessageText:
//
//  %1 file(s) replaced
//
#define REPLACE_MESSAGE_FILES_REPLACED   0x0000521EL

//
// MessageId: REPLACE_MESSAGE_FILES_ADDED
//
// MessageText:
//
//  %1 file(s) added
//
#define REPLACE_MESSAGE_FILES_ADDED      0x0000521FL

//
// MessageId: REPLACE_MESSAGE_NO_FILES_REPLACED
//
// MessageText:
//
//  No files replaced
//
#define REPLACE_MESSAGE_NO_FILES_REPLACED 0x00005220L

//
// MessageId: REPLACE_MESSAGE_NO_FILES_ADDED
//
// MessageText:
//
//  No files added
//
#define REPLACE_MESSAGE_NO_FILES_ADDED   0x00005221L

//
// MessageId: REPLACE_MESSAGE_PRESS_ANY_KEY
//
// MessageText:
//
//  Press any key to continue . . .
//
#define REPLACE_MESSAGE_PRESS_ANY_KEY    0x00005222L

//
// MessageId: REPLACE_MESSAGE_REPLACE_YES_NO
//
// MessageText:
//
//  Replace %1? (Y/N) %0
//
#define REPLACE_MESSAGE_REPLACE_YES_NO   0x00005223L

//
// MessageId: REPLACE_MESSAGE_ADD_YES_NO
//
// MessageText:
//
//  Add %1? (Y/N) %0
//
#define REPLACE_MESSAGE_ADD_YES_NO       0x00005224L

//
// MessageId: REPLACE_MESSAGE_USAGE
//
// MessageText:
//
//  Replaces files.
//  
//  REPLACE [drive1:][path1]filename [drive2:][path2] [/A] [/P] [/R] [/W]
//  REPLACE [drive1:][path1]filename [drive2:][path2] [/P] [/R] [/S] [/W] [/U]
//  
//    [drive1:][path1]filename Specifies the source file or files.
//    [drive2:][path2]         Specifies the directory where files are to be
//                             replaced.
//    /A                       Adds new files to destination directory. Cannot
//                             use with /S or /U switches.
//    /P                       Prompts for confirmation before replacing a file or
//                             adding a source file.
//    /R                       Replaces read-only files as well as unprotected
//                             files.
//    /S                       Replaces files in all subdirectories of the
//                             destination directory. Cannot use with the /A
//                             switch.
//    /W                       Waits for you to insert a disk before beginning.
//    /U                       Replaces (updates) only files that are older than
//                             source files. Cannot use with the /A switch.
//
#define REPLACE_MESSAGE_USAGE            0x00005225L

//
// MessageId: REPLACE_ERROR_INCORRECT_OS_VERSION
//
// MessageText:
//
//  Incorrect Windows NT version
//
#define REPLACE_ERROR_INCORRECT_OS_VERSION 0x0000523AL

//
// MessageId: REPLACE_ERROR_SOURCE_PATH_REQUIRED
//
// MessageText:
//
//  Source path required
//
#define REPLACE_ERROR_SOURCE_PATH_REQUIRED 0x0000523BL

//
// MessageId: REPLACE_ERROR_SELF_REPLACE
//
// MessageText:
//
//  File cannot be copied onto itself
//
#define REPLACE_ERROR_SELF_REPLACE       0x0000523CL

//
// MessageId: REPLACE_ERROR_NO_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space
//
#define REPLACE_ERROR_NO_DISK_SPACE      0x0000523DL

//
// MessageId: REPLACE_ERROR_NO_FILES_FOUND
//
// MessageText:
//
//  No files found - %1
//
#define REPLACE_ERROR_NO_FILES_FOUND     0x0000523EL

//
// MessageId: REPLACE_ERROR_EXTENDED
//
// MessageText:
//
//  Extended Error %1
//
#define REPLACE_ERROR_EXTENDED           0x0000523FL

//
// MessageId: REPLACE_ERROR_PARSE
//
// MessageText:
//
//  Parse Error %1
//
#define REPLACE_ERROR_PARSE              0x00005240L

//
// MessageId: REPLACE_ERROR_NO_MEMORY
//
// MessageText:
//
//  Out of memory
//
#define REPLACE_ERROR_NO_MEMORY          0x00005241L

//
// MessageId: REPLACE_ERROR_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch - %1
//
#define REPLACE_ERROR_INVALID_SWITCH     0x00005242L

//
// MessageId: REPLACE_ERROR_INVALID_PARAMETER_COMBINATION
//
// MessageText:
//
//  Invalid parameter combination
//
#define REPLACE_ERROR_INVALID_PARAMETER_COMBINATION 0x00005243L

//
// MessageId: REPLACE_ERROR_PATH_NOT_FOUND
//
// MessageText:
//
//  Path not found - %1
//
#define REPLACE_ERROR_PATH_NOT_FOUND     0x00005244L

//
// MessageId: REPLACE_ERROR_ACCESS_DENIED
//
// MessageText:
//
//  Access denied - %1
//
#define REPLACE_ERROR_ACCESS_DENIED      0x00005245L

//----------------
//
// XCOPY messages.
//
//----------------
//
// MessageId: XCOPY_PATTERN_SWITCH_ARCHIVE
//
// MessageText:
//
//  /A%0
//
#define XCOPY_PATTERN_SWITCH_ARCHIVE     0x000055F1L

//
// MessageId: XCOPY_PATTERN_SWITCH_DATE
//
// MessageText:
//
//  /D:*%0
//
#define XCOPY_PATTERN_SWITCH_DATE        0x000055F2L

//
// MessageId: XCOPY_PATTERN_SWITCH_EMPTY
//
// MessageText:
//
//  /E%0
//
#define XCOPY_PATTERN_SWITCH_EMPTY       0x000055F3L

//
// MessageId: XCOPY_PATTERN_SWITCH_MODIFY
//
// MessageText:
//
//  /M%0
//
#define XCOPY_PATTERN_SWITCH_MODIFY      0x000055F4L

//
// MessageId: XCOPY_PATTERN_SWITCH_PROMPT
//
// MessageText:
//
//  /P%0
//
#define XCOPY_PATTERN_SWITCH_PROMPT      0x000055F5L

//
// MessageId: XCOPY_PATTERN_SWITCH_SUBDIR
//
// MessageText:
//
//  /S%0
//
#define XCOPY_PATTERN_SWITCH_SUBDIR      0x000055F6L

//
// MessageId: XCOPY_PATTERN_SWITCH_VERIFY
//
// MessageText:
//
//  /V%0
//
#define XCOPY_PATTERN_SWITCH_VERIFY      0x000055F7L

//
// MessageId: XCOPY_PATTERN_SWITCH_WAIT
//
// MessageText:
//
//  /W%0
//
#define XCOPY_PATTERN_SWITCH_WAIT        0x000055F8L

//
// MessageId: XCOPY_PATTERN_SWITCH_HELP
//
// MessageText:
//
//  /?%0
//
#define XCOPY_PATTERN_SWITCH_HELP        0x000055F9L

//
// MessageId: XCOPY_LEXEMIZER_SWITCHES
//
// MessageText:
//
//  /-%0
//
#define XCOPY_LEXEMIZER_SWITCHES         0x00005604L

//
// MessageId: XCOPY_LEXEMIZER_MULTIPLESWITCH
//
// MessageText:
//
//  /AEMPSVW?%0
//
#define XCOPY_LEXEMIZER_MULTIPLESWITCH   0x00005605L

//
// MessageId: XCOPY_ERROR_NO_MEMORY
//
// MessageText:
//
//  Insufficient memory
//
#define XCOPY_ERROR_NO_MEMORY            0x0000560FL

//
// MessageId: XCOPY_ERROR_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter - %1
//
#define XCOPY_ERROR_INVALID_PARAMETER    0x00005610L

//
// MessageId: XCOPY_ERROR_INVALID_PATH
//
// MessageText:
//
//  Invalid path
//
#define XCOPY_ERROR_INVALID_PATH         0x00005612L

//
// MessageId: XCOPY_ERROR_CYCLE
//
// MessageText:
//
//  Cannot perform a cyclic copy
//
#define XCOPY_ERROR_CYCLE                0x00005613L

//
// MessageId: XCOPY_ERROR_INVALID_DATE
//
// MessageText:
//
//  Invalid date
//
#define XCOPY_ERROR_INVALID_DATE         0x00005614L

//
// MessageId: XCOPY_ERROR_CREATE_DIRECTORY
//
// MessageText:
//
//  Unable to create directory
//
#define XCOPY_ERROR_CREATE_DIRECTORY     0x00005615L

//
// MessageId: XCOPY_ERROR_INVALID_DRIVE
//
// MessageText:
//
//  Invalid drive specification
//
#define XCOPY_ERROR_INVALID_DRIVE        0x00005616L

//
// MessageId: XCOPY_ERROR_RESERVED_DEVICE
//
// MessageText:
//
//  Cannot XCOPY from a reserved device
//
#define XCOPY_ERROR_RESERVED_DEVICE      0x00005617L

//
// MessageId: XCOPY_ERROR_ACCESS_DENIED
//
// MessageText:
//
//  Access denied
//
#define XCOPY_ERROR_ACCESS_DENIED        0x00005618L

//
// MessageId: XCOPY_ERROR_TOO_MANY_OPEN_FILES
//
// MessageText:
//
//  Too many open files
//
#define XCOPY_ERROR_TOO_MANY_OPEN_FILES  0x00005619L

//
// MessageId: XCOPY_ERROR_GENERAL
//
// MessageText:
//
//  General failure
//
#define XCOPY_ERROR_GENERAL              0x0000561AL

//
// MessageId: XCOPY_ERROR_SHARING_VIOLATION
//
// MessageText:
//
//  Sharing violation
//
#define XCOPY_ERROR_SHARING_VIOLATION    0x0000561BL

//
// MessageId: XCOPY_ERROR_LOCK_VIOLATION
//
// MessageText:
//
//  Lock violation
//
#define XCOPY_ERROR_LOCK_VIOLATION       0x0000561CL

//
// MessageId: XCOPY_ERROR_PATH_NOT_FOUND
//
// MessageText:
//
//  Path not found
//
#define XCOPY_ERROR_PATH_NOT_FOUND       0x0000561DL

//
// MessageId: XCOPY_ERROR_DISK_FULL
//
// MessageText:
//
//  Insufficient disk space
//
#define XCOPY_ERROR_DISK_FULL            0x0000561EL

//
// MessageId: XCOPY_ERROR_SELF_COPY
//
// MessageText:
//
//  File cannot be copied onto itself
//
#define XCOPY_ERROR_SELF_COPY            0x0000561FL

//
// MessageId: XCOPY_ERROR_INVALID_NUMBER_PARAMETERS
//
// MessageText:
//
//  Invalid number of parameters
//
#define XCOPY_ERROR_INVALID_NUMBER_PARAMETERS 0x00005620L

//
// MessageId: XCOPY_ERROR_CREATE_DIRECTORY1
//
// MessageText:
//
//  Unable to create directory - %1
//
#define XCOPY_ERROR_CREATE_DIRECTORY1    0x00005621L

//
// MessageId: XCOPY_ERROR_FILE_NOT_FOUND
//
// MessageText:
//
//  File not found - %1
//
#define XCOPY_ERROR_FILE_NOT_FOUND       0x00005622L

//
// MessageId: XCOPY_ERROR_CANNOT_MAKE
//
// MessageText:
//
//  File creation error - %1
//
#define XCOPY_ERROR_CANNOT_MAKE          0x00005623L

//
// MessageId: XCOPY_ERROR_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch
//
#define XCOPY_ERROR_INVALID_SWITCH       0x00005624L

//
// MessageId: XCOPY_ERROR_INVALID_PATH_PARTIAL_COPY
//
// MessageText:
//
//  Invalid Path, not all directories/files copied
//
#define XCOPY_ERROR_INVALID_PATH_PARTIAL_COPY 0x00005625L

//
// MessageId: XCOPY_ERROR_EXTENDED
//
// MessageText:
//
//  Extended Error %1
//
#define XCOPY_ERROR_EXTENDED             0x00005626L

//
// MessageId: XCOPY_ERROR_PARSE
//
// MessageText:
//
//  Parse Error
//
#define XCOPY_ERROR_PARSE                0x00005627L

//
// MessageId: XCOPY_ERROR_WRITE_PROTECT
//
// MessageText:
//
//  Write protect error accessing drive.
//
#define XCOPY_ERROR_WRITE_PROTECT        0x00005628L

//
// MessageId: XCOPY_ERROR_INVALID_SWITCH_SWITCH
//
// MessageText:
//
//  Invalid switch - %1
//
#define XCOPY_ERROR_INVALID_SWITCH_SWITCH 0x00005629L

//
// MessageId: XCOPY_MESSAGE_USAGE
//
// MessageText:
//
//  Copies files and directory trees.
//  
//  XCOPY source [destination] [/A | /M] [/D[:date]] [/P] [/S [/E]] [/V] [/W]
//                             [/C] [/I] [/Q] [/F] [/L] [/H] [/R] [/T] [/U]
//                             [/K] [/N]
//  
//    source       Specifies the file(s) to copy.
//    destination  Specifies the location and/or name of new files.
//    /A           Copies files with the archive attribute set,
//                 doesn't change the attribute.
//    /M           Copies files with the archive attribute set,
//                 turns off the archive attribute.
//    /D:m-d-y     Copies files changed on or after the specified date.
//                 If no date is given, copies only those files whose
//                 source time is newer than the destination time.
//    /P           Prompts you before creating each destination file.
//    /S           Copies directories and subdirectories except empty ones.
//    /E           Copies directories and subdirectories, including empty ones.
//                 Same as /S /E. May be used to modify /T.
//    /V           Verifies each new file.
//    /W           Prompts you to press a key before copying.
//    /C           Continues copying even if errors occur.
//    /I           If destination does not exist and copying more than one file,
//                 assumes that destination must be a directory.
//    /Q           Does not display file names while copying.
//    /F           Displays full source and destination file names while copying.
//    /L           Displays files that would be copied.
//    /H           Copies hidden and system files also.
//    /R           Overwrites read-only files.
//    /T           Creates directory structure, but does not copy files. Does not
//                 include empty directories or subdirectories. /T /E includes
//                 empty directories and subdirectories.
//    /U           Updates the files that already exist in destination.
//    /K           Copies attributes. Normal Xcopy will reset read-only attributes.
//    /N           Copy using the generated short names.
//
#define XCOPY_MESSAGE_USAGE              0x0000562CL

//
// MessageId: XCOPY_MESSAGE_WAIT
//
// MessageText:
//
//  Press any key when ready to begin copying file(s)%0
//
#define XCOPY_MESSAGE_WAIT               0x0000562DL

//
// MessageId: XCOPY_MESSAGE_CONFIRM
//
// MessageText:
//
//  %1 (Y/N)? %0
//
#define XCOPY_MESSAGE_CONFIRM            0x0000562EL

//
// MessageId: XCOPY_MESSAGE_FILE_OR_DIRECTORY
//
// MessageText:
//
//  Does %1 specify a file name
//  or directory name on the target
//  (F = file, D = directory)? %0
//
#define XCOPY_MESSAGE_FILE_OR_DIRECTORY  0x0000562FL

//
// MessageId: XCOPY_MESSAGE_FILES_COPIED
//
// MessageText:
//
//  %1 File(s) copied
//
#define XCOPY_MESSAGE_FILES_COPIED       0x00005630L

//
// MessageId: XCOPY_MESSAGE_FILENAME
//
// MessageText:
//
//  %1
//
#define XCOPY_MESSAGE_FILENAME           0x00005631L

//
// MessageId: XCOPY_MESSAGE_VERBOSE_COPY
//
// MessageText:
//
//  %1 -> %2
//
#define XCOPY_MESSAGE_VERBOSE_COPY       0x00005632L

//
// MessageId: XCOPY_MESSAGE_CHANGE_DISK
//
// MessageText:
//
//  
//  Insufficient disk space on current disk.
//  Insert another disk and type <Return> to continue... %0
//
#define XCOPY_MESSAGE_CHANGE_DISK        0x00005633L

//
// MessageId: XCOPY_RESPONSE_FILE
//
// MessageText:
//
//  F%0
//
#define XCOPY_RESPONSE_FILE              0x00005636L

//
// MessageId: XCOPY_RESPONSE_DIRECTORY
//
// MessageText:
//
//  D%0
//
#define XCOPY_RESPONSE_DIRECTORY         0x00005637L

//
// MessageId: XCOPY_RESPONSE_YES
//
// MessageText:
//
//  Y%0
//
#define XCOPY_RESPONSE_YES               0x00005638L

//
// MessageId: XCOPY_RESPONSE_NO
//
// MessageText:
//
//  N%0
//
#define XCOPY_RESPONSE_NO                0x00005639L

//
// MessageId: XCOPY_MESSAGE_FILES
//
// MessageText:
//
//  %1 File(s)
//
#define XCOPY_MESSAGE_FILES              0x0000563AL

//
// MessageId: XCOPY_ERROR_VERIFY_FAILED
//
// MessageText:
//
//  File verification failed.
//
#define XCOPY_ERROR_VERIFY_FAILED        0x0000563BL

//---------------
//
// MODE messages.
//
//---------------
//
// MessageId: MODE_MESSAGE_REROUTED
//
// MessageText:
//
//  LPT%1: rerouted to COM%2:
//
#define MODE_MESSAGE_REROUTED            0x00005A0AL

//
// MessageId: MODE_MESSAGE_ACTIVE_CODEPAGE
//
// MessageText:
//
//  Active code page for device %1 is %2
//
#define MODE_MESSAGE_ACTIVE_CODEPAGE     0x00005A0BL

//
// MessageId: MODE_MESSAGE_HELP
//
// MessageText:
//
//  Configures system devices.
//  
//  Serial port:       MODE COMm[:] [BAUD=b] [PARITY=p] [DATA=d] [STOP=s]
//                                  [to=on|off] [xon=on|off] [odsr=on|off]
//                                  [octs=on|off] [dtr=on|off|hs]
//                                  [rts=on|off|hs|tg] [idsr=on|off]
//  
//  Device Status:     MODE [device] [/STATUS]
//  
//  Redirect printing: MODE LPTn[:]=COMm[:]
//  
//  Select code page:  MODE CON[:] CP SELECT=yyy
//  
//  Code page status:  MODE CON[:] CP [/STATUS]
//  
//  Display mode:      MODE CON[:] [COLS=c] [LINES=n]
//  
//  Typematic rate:    MODE CON[:] [RATE=r DELAY=d]
//
#define MODE_MESSAGE_HELP                0x00005A0CL

//
// MessageId: MODE_MESSAGE_STATUS
//
// MessageText:
//
//  Status for device *:%0
//
#define MODE_MESSAGE_STATUS              0x00005A0DL

//
// MessageId: MODE_MESSAGE_STATUS_BAUD
//
// MessageText:
//
//      Baud:            %1
//
#define MODE_MESSAGE_STATUS_BAUD         0x00005A0FL

//
// MessageId: MODE_MESSAGE_STATUS_PARITY
//
// MessageText:
//
//      Parity:          %1
//
#define MODE_MESSAGE_STATUS_PARITY       0x00005A10L

//
// MessageId: MODE_MESSAGE_STATUS_DATA
//
// MessageText:
//
//      Data Bits:       %1
//
#define MODE_MESSAGE_STATUS_DATA         0x00005A11L

//
// MessageId: MODE_MESSAGE_STATUS_STOP
//
// MessageText:
//
//      Stop Bits:       %1
//
#define MODE_MESSAGE_STATUS_STOP         0x00005A12L

//
// MessageId: MODE_MESSAGE_STATUS_TIMEOUT
//
// MessageText:
//
//      Timeout:         %1
//
#define MODE_MESSAGE_STATUS_TIMEOUT      0x00005A13L

//
// MessageId: MODE_MESSAGE_STATUS_XON
//
// MessageText:
//
//      XON/XOFF:        %1
//
#define MODE_MESSAGE_STATUS_XON          0x00005A14L

//
// MessageId: MODE_MESSAGE_STATUS_OCTS
//
// MessageText:
//
//      CTS handshaking: %1
//
#define MODE_MESSAGE_STATUS_OCTS         0x00005A15L

//
// MessageId: MODE_MESSAGE_STATUS_ODSR
//
// MessageText:
//
//      DSR handshaking: %1
//
#define MODE_MESSAGE_STATUS_ODSR         0x00005A16L

//
// MessageId: MODE_MESSAGE_STATUS_IDSR
//
// MessageText:
//
//      DSR sensitivity: %1
//
#define MODE_MESSAGE_STATUS_IDSR         0x00005A17L

//
// MessageId: MODE_MESSAGE_STATUS_DTR
//
// MessageText:
//
//      DTR circuit:     %1
//
#define MODE_MESSAGE_STATUS_DTR          0x00005A18L

//
// MessageId: MODE_MESSAGE_STATUS_RTS
//
// MessageText:
//
//      RTS circuit:     %1
//
#define MODE_MESSAGE_STATUS_RTS          0x00005A19L

//
// MessageId: MODE_MESSAGE_STATUS_LINES
//
// MessageText:
//
//      Lines:          %1
//
#define MODE_MESSAGE_STATUS_LINES        0x00005A1EL

//
// MessageId: MODE_MESSAGE_STATUS_COLS
//
// MessageText:
//
//      Columns:        %1
//
#define MODE_MESSAGE_STATUS_COLS         0x00005A1FL

//
// MessageId: MODE_MESSAGE_STATUS_CODEPAGE
//
// MessageText:
//
//      Code page:      %1
//
#define MODE_MESSAGE_STATUS_CODEPAGE     0x00005A20L

//
// MessageId: MODE_MESSAGE_STATUS_REROUTED
//
// MessageText:
//
//      Printer output is being rerouted to serial port %1
//
#define MODE_MESSAGE_STATUS_REROUTED     0x00005A21L

//
// MessageId: MODE_MESSAGE_STATUS_NOT_REROUTED
//
// MessageText:
//
//      Printer output is not being rerouted.
//
#define MODE_MESSAGE_STATUS_NOT_REROUTED 0x00005A22L

//
// MessageId: MODE_MESSAGE_STATUS_RATE
//
// MessageText:
//
//      Keyboard rate:  %1
//
#define MODE_MESSAGE_STATUS_RATE         0x00005A23L

//
// MessageId: MODE_MESSAGE_STATUS_DELAY
//
// MessageText:
//
//      Keyboard delay: %1
//
#define MODE_MESSAGE_STATUS_DELAY        0x00005A24L

//
// MessageId: MODE_MESSAGE_LPT_USE_CONTROL_PANEL
//
// MessageText:
//
//  To change printer settings use the Printers option in Control Panel
//
#define MODE_MESSAGE_LPT_USE_CONTROL_PANEL 0x00005A27L

//
// MessageId: MODE_ERROR_INCORRECT_OS_VERSION
//
// MessageText:
//
//  Incorrect operating system version
//
#define MODE_ERROR_INCORRECT_OS_VERSION  0x00005A28L

//
// MessageId: MODE_ERROR_INVALID_DEVICE_NAME
//
// MessageText:
//
//  Illegal device name - %1
//
#define MODE_ERROR_INVALID_DEVICE_NAME   0x00005A29L

//
// MessageId: MODE_ERROR_INVALID_BAUD_RATE
//
// MessageText:
//
//  Invalid baud rate specified
//
#define MODE_ERROR_INVALID_BAUD_RATE     0x00005A2AL

//
// MessageId: MODE_ERROR_NOT_REROUTED
//
// MessageText:
//
//  %1: not rerouted
//
#define MODE_ERROR_NOT_REROUTED          0x00005A2BL

//
// MessageId: MODE_ERROR_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter - %1
//
#define MODE_ERROR_INVALID_PARAMETER     0x00005A2CL

//
// MessageId: MODE_ERROR_INVALID_NUMBER_OF_PARAMETERS
//
// MessageText:
//
//  Invalid number of parameters
//
#define MODE_ERROR_INVALID_NUMBER_OF_PARAMETERS 0x00005A2DL

//
// MessageId: MODE_ERROR_CANNOT_ACCESS_DEVICE
//
// MessageText:
//
//  Failure to access device: %1
//
#define MODE_ERROR_CANNOT_ACCESS_DEVICE  0x00005A2EL

//
// MessageId: MODE_ERROR_CODEPAGE_OPERATION_NOT_SUPPORTED
//
// MessageText:
//
//  Code page operation not supported on this device
//
#define MODE_ERROR_CODEPAGE_OPERATION_NOT_SUPPORTED 0x00005A2FL

//
// MessageId: MODE_ERROR_CODEPAGE_NOT_SUPPORTED
//
// MessageText:
//
//  Current keyboard does not support this code page
//
#define MODE_ERROR_CODEPAGE_NOT_SUPPORTED 0x00005A30L

//
// MessageId: MODE_ERROR_NO_MEMORY
//
// MessageText:
//
//  Out of memory
//
#define MODE_ERROR_NO_MEMORY             0x00005A31L

//
// MessageId: MODE_ERROR_PARSE
//
// MessageText:
//
//  Parse Error
//
#define MODE_ERROR_PARSE                 0x00005A32L

//
// MessageId: MODE_ERROR_EXTENDED
//
// MessageText:
//
//  Extended error %1
//
#define MODE_ERROR_EXTENDED              0x00005A33L

//
// MessageId: MODE_ERROR_SERIAL_OPTIONS_NOT_SUPPORTED
//
// MessageText:
//
//  The specified options are not supported by this serial device
//
#define MODE_ERROR_SERIAL_OPTIONS_NOT_SUPPORTED 0x00005A34L

//
// MessageId: MODE_ERROR_INVALID_SCREEN_SIZE
//
// MessageText:
//
//  The screen cannot be set to the number of lines and columns specified.
//
#define MODE_ERROR_INVALID_SCREEN_SIZE   0x00005A35L

//
// MessageId: MODE_ERROR_LPT_CANNOT_SET
//
// MessageText:
//
//  The device cannot be set to the specified number of lines and/or columns.
//
#define MODE_ERROR_LPT_CANNOT_SET        0x00005A36L

//
// MessageId: MODE_ERROR_LPT_CANNOT_ENDREROUTE
//
// MessageText:
//
//  Cannot stop printer rerouting at this time.
//
#define MODE_ERROR_LPT_CANNOT_ENDREROUTE 0x00005A37L

//
// MessageId: MODE_ERROR_LPT_CANNOT_REROUTE
//
// MessageText:
//
//  Cannot reroute printer output to serial device %1.
//
#define MODE_ERROR_LPT_CANNOT_REROUTE    0x00005A38L

//
// MessageId: MODE_ERROR_INVALID_RATE
//
// MessageText:
//
//  Invalid keyboard rate
//
#define MODE_ERROR_INVALID_RATE          0x00005A39L

//
// MessageId: MODE_ERROR_INVALID_DELAY
//
// MessageText:
//
//  Invalid keyboard delay
//
#define MODE_ERROR_INVALID_DELAY         0x00005A3AL

//
// MessageId: MODE_ERROR_FULL_SCREEN
//
// MessageText:
//
//  The number of lines and columns cannot be changed in a full screen.
//
#define MODE_ERROR_FULL_SCREEN           0x00005A3BL

//
// MessageId: MODE_ERROR_INVALID_CODEPAGE
//
// MessageText:
//
//  The code page specified is not valid.
//
#define MODE_ERROR_INVALID_CODEPAGE      0x00005A3CL

//
// MessageId: MODE_ERROR_NOT_SUPPORTED
//
// MessageText:
//
//  The specified option is not supported.
//
#define MODE_ERROR_NOT_SUPPORTED         0x00005A3DL

//
// MessageId: MODE_MESSAGE_USED_DEFAULT_PARITY
//
// MessageText:
//
//  Default to even parity.
//
#define MODE_MESSAGE_USED_DEFAULT_PARITY 0x00005A46L

//
// MessageId: MODE_MESSAGE_USED_DEFAULT_DATA
//
// MessageText:
//
//  Default to %1 data bits.
//
#define MODE_MESSAGE_USED_DEFAULT_DATA   0x00005A47L

//
// MessageId: MODE_MESSAGE_USED_DEFAULT_STOP
//
// MessageText:
//
//  Default to %1 stop bits.
//
#define MODE_MESSAGE_USED_DEFAULT_STOP   0x00005A48L

//
// MessageId: MODE_MESSAGE_COM_NO_CHANGE
//
// MessageText:
//
//  No serial port setting changed.
//
#define MODE_MESSAGE_COM_NO_CHANGE       0x00005A49L

//
// MessageId: MODE_MESSAGE_NOT_NEEDED
//
// MessageText:
//
//  This operation is not necessary under Windows NT.
//
#define MODE_MESSAGE_NOT_NEEDED          0x00005A4AL

//
// MessageId: MODE_ERROR_DEVICE_UNAVAILABLE
//
// MessageText:
//
//  Device %1 is not currently available.
//
#define MODE_ERROR_DEVICE_UNAVAILABLE    0x00005A4BL

//---------------
//
// NTFS messages.
//
//---------------
//
// MessageId: MSG_NTFS_UNREADABLE_BOOT_SECTOR
//
// MessageText:
//
//  The first NTFS boot sector is unreadable.
//  Reading second NTFS boot sector instead.
//
#define MSG_NTFS_UNREADABLE_BOOT_SECTOR  0x00005DC0L

//
// MessageId: MSG_NTFS_ALL_BOOT_SECTORS_UNREADABLE
//
// MessageText:
//
//  All NTFS boot sectors are unreadable.  Cannot continue.
//
#define MSG_NTFS_ALL_BOOT_SECTORS_UNREADABLE 0x00005DC1L

//
// MessageId: MSG_NTFS_SECOND_BOOT_SECTOR_UNWRITEABLE
//
// MessageText:
//
//  The second NTFS boot sector is unwriteable.
//
#define MSG_NTFS_SECOND_BOOT_SECTOR_UNWRITEABLE 0x00005DC2L

//
// MessageId: MSG_NTFS_FIRST_BOOT_SECTOR_UNWRITEABLE
//
// MessageText:
//
//  The first NTFS boot sector is unwriteable.
//
#define MSG_NTFS_FIRST_BOOT_SECTOR_UNWRITEABLE 0x00005DC3L

//
// MessageId: MSG_NTFS_ALL_BOOT_SECTORS_UNWRITEABLE
//
// MessageText:
//
//  All NTFS boot sectors are unwriteable.  Cannot continue.
//
#define MSG_NTFS_ALL_BOOT_SECTORS_UNWRITEABLE 0x00005DC4L

//
// MessageId: MSG_NTFS_FORMAT_NO_FLOPPIES
//
// MessageText:
//
//  The NTFS file system does not function on floppy disks.
//
#define MSG_NTFS_FORMAT_NO_FLOPPIES      0x00005DC5L

//----------------------
//
// NTFS CHKDSK messages.
//
//----------------------
//
// MessageId: MSG_CHK_NTFS_BAD_FRS
//
// MessageText:
//
//  Deleting corrupt file record segment %1.
//
#define MSG_CHK_NTFS_BAD_FRS             0x00006590L

//
// MessageId: MSG_CHK_NTFS_BAD_ATTR
//
// MessageText:
//
//  Deleting corrupt attribute record (%1, %2)
//  from file record segment %3.
//
#define MSG_CHK_NTFS_BAD_ATTR            0x00006591L

//
// MessageId: MSG_CHK_NTFS_FRS_TRUNC_RECORDS
//
// MessageText:
//
//  Truncating badly linked attribute records
//  from file record segment %1.
//
#define MSG_CHK_NTFS_FRS_TRUNC_RECORDS   0x00006592L

//
// MessageId: MSG_CHK_NTFS_UNSORTED_FRS
//
// MessageText:
//
//  Sorting attribute records for file record segment %1.
//
#define MSG_CHK_NTFS_UNSORTED_FRS        0x00006593L

//
// MessageId: MSG_CHK_NTFS_DUPLICATE_ATTRIBUTES
//
// MessageText:
//
//  Deleting duplicate attribute records (%1, %2)
//  from file record segment %3.
//
#define MSG_CHK_NTFS_DUPLICATE_ATTRIBUTES 0x00006594L

//
// MessageId: MSG_CHK_NTFS_BAD_ATTR_LIST
//
// MessageText:
//
//  Deleted corrupt attribute list for file %1.
//
#define MSG_CHK_NTFS_BAD_ATTR_LIST       0x00006595L

//
// MessageId: MSG_CHK_NTFS_CANT_READ_ATTR_LIST
//
// MessageText:
//
//  Deleted unreadable attribute list for file %1.
//
#define MSG_CHK_NTFS_CANT_READ_ATTR_LIST 0x00006596L

//
// MessageId: MSG_CHK_NTFS_BAD_ATTR_LIST_ENTRY
//
// MessageText:
//
//  Deleted corrupt attribute list entry
//  with type code %1 in file %2.
//
#define MSG_CHK_NTFS_BAD_ATTR_LIST_ENTRY 0x00006597L

//
// MessageId: MSG_CHK_NTFS_ATTR_LIST_TRUNC
//
// MessageText:
//
//  Truncating corrupt attribute list for file %1.
//
#define MSG_CHK_NTFS_ATTR_LIST_TRUNC     0x00006598L

//
// MessageId: MSG_CHK_NTFS_UNSORTED_ATTR_LIST
//
// MessageText:
//
//  Sorting attribute list for file %1.
//
#define MSG_CHK_NTFS_UNSORTED_ATTR_LIST  0x00006599L

//
// MessageId: MSG_CHK_NTFS_UNREADABLE_MFT
//
// MessageText:
//
//  Unreadable master file table.  CHKDSK aborted.
//
#define MSG_CHK_NTFS_UNREADABLE_MFT      0x0000659AL

//
// MessageId: MSG_CHK_NTFS_BAD_MFT
//
// MessageText:
//
//  Corrupt master file table.  CHKDSK aborted.
//
#define MSG_CHK_NTFS_BAD_MFT             0x0000659BL

//
// MessageId: MSG_CHK_NTFS_BAD_ATTR_DEF_TABLE
//
// MessageText:
//
//  Corrupt Attribute Definition Table.
//  CHKDSK is assuming the default.
//
#define MSG_CHK_NTFS_BAD_ATTR_DEF_TABLE  0x0000659CL

//
// MessageId: MSG_NTFS_CHK_NOT_NTFS
//
// MessageText:
//
//  This is not an NTFS volume.
//
#define MSG_NTFS_CHK_NOT_NTFS            0x0000659DL

//
// MessageId: MSG_CHK_NTFS_UNREADABLE_FRS
//
// MessageText:
//
//  File record segment %1 is unreadable.
//
#define MSG_CHK_NTFS_UNREADABLE_FRS      0x0000659EL

//
// MessageId: MSG_CHK_NTFS_ORPHAN_FRS
//
// MessageText:
//
//  Deleting orphan file record segment %1.
//
#define MSG_CHK_NTFS_ORPHAN_FRS          0x0000659FL

//
// MessageId: MSG_CHK_NTFS_CANT_HOTFIX_SYSTEM_FILES
//
// MessageText:
//
//  Insufficient disk space to hotfix unreadable system file %1.
//  CHKDSK Aborted.
//
#define MSG_CHK_NTFS_CANT_HOTFIX_SYSTEM_FILES 0x000065A0L

//
// MessageId: MSG_CHK_NTFS_CANT_HOTFIX
//
// MessageText:
//
//  Insufficient disk space to hotfix unreadable user file %1.
//
#define MSG_CHK_NTFS_CANT_HOTFIX         0x000065A1L

//
// MessageId: MSG_CHK_NTFS_BAD_FIRST_FREE
//
// MessageText:
//
//  First free byte offset corrected in file record segment %1.
//
#define MSG_CHK_NTFS_BAD_FIRST_FREE      0x000065A2L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_MFT_MIRROR
//
// MessageText:
//
//  Correcting errors in the Master File Table (MFT) mirror.
//
#define MSG_CHK_NTFS_CORRECTING_MFT_MIRROR 0x000065A3L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_MFT_MIRROR
//
// MessageText:
//
//  Insufficient disk space to repair master file table (MFT) mirror.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_MFT_MIRROR 0x000065A4L

//
// MessageId: MSG_CHK_NTFS_CANT_ADD_BAD_CLUSTERS
//
// MessageText:
//
//  Insufficient disk space to record bad clusters.
//
#define MSG_CHK_NTFS_CANT_ADD_BAD_CLUSTERS 0x000065A5L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_MFT_DATA
//
// MessageText:
//
//  Correcting errors in the master file table's (MFT) DATA attribute.
//
#define MSG_CHK_NTFS_CORRECTING_MFT_DATA 0x000065A6L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_MFT
//
// MessageText:
//
//  Insufficient disk space to fix master file table (MFT).  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_MFT        0x000065A7L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_MFT_BITMAP
//
// MessageText:
//
//  Correcting errors in the master file table's (MFT) BITMAP attribute.
//
#define MSG_CHK_NTFS_CORRECTING_MFT_BITMAP 0x000065A8L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_VOLUME_BITMAP
//
// MessageText:
//
//  Insufficient disk space to fix volume bitmap.  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_VOLUME_BITMAP 0x000065A9L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_VOLUME_BITMAP
//
// MessageText:
//
//  Correcting errors in the Volume Bitmap.
//
#define MSG_CHK_NTFS_CORRECTING_VOLUME_BITMAP 0x000065AAL

//
// MessageId: MSG_CHK_NTFS_CORRECTING_ATTR_DEF
//
// MessageText:
//
//  Correcting errors in the Attribute Definition Table.
//
#define MSG_CHK_NTFS_CORRECTING_ATTR_DEF 0x000065ABL

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_ATTR_DEF
//
// MessageText:
//
//  Insufficient disk space to fix the attribute definition table.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_ATTR_DEF   0x000065ACL

//
// MessageId: MSG_CHK_NTFS_CORRECTING_BAD_FILE
//
// MessageText:
//
//  Correcting errors in the Bad Clusters File.
//
#define MSG_CHK_NTFS_CORRECTING_BAD_FILE 0x000065ADL

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_BAD_FILE
//
// MessageText:
//
//  Insufficient disk space to fix the bad clusters file.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_BAD_FILE   0x000065AEL

//
// MessageId: MSG_CHK_NTFS_CORRECTING_BOOT_FILE
//
// MessageText:
//
//  Correcting errors in the Boot File.
//
#define MSG_CHK_NTFS_CORRECTING_BOOT_FILE 0x000065AFL

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_BOOT_FILE
//
// MessageText:
//
//  Insufficient disk space to fix the boot file.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_BOOT_FILE  0x000065B0L

//
// MessageId: MSG_CHK_NTFS_ADDING_BAD_CLUSTERS
//
// MessageText:
//
//  Adding %1 bad clusters to the Bad Clusters File.
//
#define MSG_CHK_NTFS_ADDING_BAD_CLUSTERS 0x000065B1L

//
// MessageId: MSG_CHK_NTFS_TOTAL_DISK_SPACE
//
// MessageText:
//
//  
//  %1 kilobytes total disk space.
//
#define MSG_CHK_NTFS_TOTAL_DISK_SPACE    0x000065B2L

//
// MessageId: MSG_CHK_NTFS_USER_FILES
//
// MessageText:
//
//  %1 kilobytes in %2 user files.
//
#define MSG_CHK_NTFS_USER_FILES          0x000065B3L

//
// MessageId: MSG_CHK_NTFS_INDICES_REPORT
//
// MessageText:
//
//  %1 kilobytes in %2 indexes.
//
#define MSG_CHK_NTFS_INDICES_REPORT      0x000065B4L

//
// MessageId: MSG_CHK_NTFS_BAD_SECTORS_REPORT
//
// MessageText:
//
//  %1 kilobytes in bad sectors.
//
#define MSG_CHK_NTFS_BAD_SECTORS_REPORT  0x000065B5L

//
// MessageId: MSG_CHK_NTFS_SYSTEM_SPACE
//
// MessageText:
//
//  %1 kilobytes in use by the system.
//
#define MSG_CHK_NTFS_SYSTEM_SPACE        0x000065B6L

//
// MessageId: MSG_CHK_NTFS_AVAILABLE_SPACE
//
// MessageText:
//
//  %1 kilobytes available on disk.
//  
//
#define MSG_CHK_NTFS_AVAILABLE_SPACE     0x000065B7L

//
// MessageId: MSG_CHK_NTFS_ERROR_IN_INDEX
//
// MessageText:
//
//  Correcting error in index %2 for file %1.
//
#define MSG_CHK_NTFS_ERROR_IN_INDEX      0x000065B8L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_INDEX
//
// MessageText:
//
//  Insufficient disk space to correct errors
//  in index %2 of file %1.
//
#define MSG_CHK_NTFS_CANT_FIX_INDEX      0x000065B9L

//
// MessageId: MSG_CHK_NTFS_BAD_INDEX
//
// MessageText:
//
//  Removing corrupt index %2 in file %1.
//
#define MSG_CHK_NTFS_BAD_INDEX           0x000065BAL

//
// MessageId: MSG_CHK_NTFS_DELETING_DIRECTORY_ENTRIES
//
// MessageText:
//
//  Deleting directory entries in %1
//
#define MSG_CHK_NTFS_DELETING_DIRECTORY_ENTRIES 0x000065BBL

//
// MessageId: MSG_CHK_NTFS_CANT_DELETE_ALL_DIRECTORY_ENTRIES
//
// MessageText:
//
//  CHKDSK cannot delete all corrupt directory entries.
//
#define MSG_CHK_NTFS_CANT_DELETE_ALL_DIRECTORY_ENTRIES 0x000065BCL

//
// MessageId: MSG_CHK_NTFS_RECOVERING_ORPHANS
//
// MessageText:
//
//  CHKDSK is recovering lost files.
//
#define MSG_CHK_NTFS_RECOVERING_ORPHANS  0x000065BDL

//
// MessageId: MSG_CHK_NTFS_CANT_CREATE_ORPHANS
//
// MessageText:
//
//  Insufficient disk space for CHKDSK to recover lost files.
//
#define MSG_CHK_NTFS_CANT_CREATE_ORPHANS 0x000065BEL

//
// MessageId: MSG_CHK_NTFS_CORRECTING_ERROR_IN_DIRECTORY
//
// MessageText:
//
//  Correcting error in directory %1
//
#define MSG_CHK_NTFS_CORRECTING_ERROR_IN_DIRECTORY 0x000065BFL

//
// MessageId: MSG_CHK_NTFS_BADLY_ORDERED_INDEX
//
// MessageText:
//
//  Sorting index %2 in file %1.
//
#define MSG_CHK_NTFS_BADLY_ORDERED_INDEX 0x000065C0L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_EA
//
// MessageText:
//
//  Correcting extended attribute information in file %1.
//
#define MSG_CHK_NTFS_CORRECTING_EA       0x000065C1L

//
// MessageId: MSG_CHK_NTFS_DELETING_CORRUPT_EA_SET
//
// MessageText:
//
//  Deleting corrupt extended attribute set in file %1.
//
#define MSG_CHK_NTFS_DELETING_CORRUPT_EA_SET 0x000065C2L

//
// MessageId: MSG_CHK_NTFS_INACCURATE_DUPLICATED_INFORMATION
//
// MessageText:
//
//  Incorrect duplicate information in file %1.
//
#define MSG_CHK_NTFS_INACCURATE_DUPLICATED_INFORMATION 0x000065C3L

//
// MessageId: MSG_CHK_NTFS_CREATING_ROOT_DIRECTORY
//
// MessageText:
//
//  CHKDSK is creating new root directory.
//
#define MSG_CHK_NTFS_CREATING_ROOT_DIRECTORY 0x000065C4L

//
// MessageId: MSG_CHK_NTFS_CANT_CREATE_ROOT_DIRECTORY
//
// MessageText:
//
//  Insufficient disk space to create new root directory.
//
#define MSG_CHK_NTFS_CANT_CREATE_ROOT_DIRECTORY 0x000065C5L

//
// MessageId: MSG_CHK_NTFS_RECOVERING_ORPHAN
//
// MessageText:
//
//  Recovering orphaned file %1 into directory file %2.
//
#define MSG_CHK_NTFS_RECOVERING_ORPHAN   0x000065C6L

//
// MessageId: MSG_CHK_NTFS_CANT_RECOVER_ORPHAN
//
// MessageText:
//
//  Insufficient disk space to recover lost data.
//
#define MSG_CHK_NTFS_CANT_RECOVER_ORPHAN 0x000065C7L

//
// MessageId: MSG_CHK_NTFS_TOO_MANY_ORPHANS
//
// MessageText:
//
//  Too much lost data to recover it all.
//
#define MSG_CHK_NTFS_TOO_MANY_ORPHANS    0x000065C8L

//
// MessageId: MSG_CHK_NTFS_USING_MFT_MIRROR
//
// MessageText:
//
//  Fixing critical master file table (MFT) files with MFT mirror.
//
#define MSG_CHK_NTFS_USING_MFT_MIRROR    0x000065C9L

//
// MessageId: MSG_CHK_NTFS_MINOR_CHANGES_TO_FRS
//
// MessageText:
//
//  Correcting a minor error in file %1.
//
#define MSG_CHK_NTFS_MINOR_CHANGES_TO_FRS 0x000065CAL

//
// MessageId: MSG_CHK_NTFS_BAD_UPCASE_TABLE
//
// MessageText:
//
//  Corrupt uppercase Table.
//  Using current system uppercase Table.
//
#define MSG_CHK_NTFS_BAD_UPCASE_TABLE    0x000065CBL

//
// MessageId: MSG_CHK_NTFS_CANT_GET_UPCASE_TABLE
//
// MessageText:
//
//  Cannot retrieve current system uppercase table.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_GET_UPCASE_TABLE 0x000065CCL

//
// MessageId: MSG_CHK_NTFS_MINOR_MFT_BITMAP_ERROR
//
// MessageText:
//
//  CHKDSK discovered free space marked as allocated in the
//  master file table (MFT) bitmap.
//
#define MSG_CHK_NTFS_MINOR_MFT_BITMAP_ERROR 0x000065CDL

//
// MessageId: MSG_CHK_NTFS_MINOR_VOLUME_BITMAP_ERROR
//
// MessageText:
//
//  CHKDSK discovered free space marked as allocated in the volume bitmap.
//
#define MSG_CHK_NTFS_MINOR_VOLUME_BITMAP_ERROR 0x000065CEL

//
// MessageId: MSG_CHK_NTFS_CORRECTING_UPCASE_FILE
//
// MessageText:
//
//  Correcting errors in the uppercase file.
//
#define MSG_CHK_NTFS_CORRECTING_UPCASE_FILE 0x000065CFL

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_UPCASE_FILE
//
// MessageText:
//
//  Insufficient disk space to fix the uppercase file.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_UPCASE_FILE 0x000065D0L

//
// MessageId: MSG_CHK_NTFS_DELETING_INDEX_ENTRY
//
// MessageText:
//
//  Deleting index entry %3 in index %2 of file %1.
//
#define MSG_CHK_NTFS_DELETING_INDEX_ENTRY 0x000065D1L

//
// MessageId: MSG_CHK_NTFS_SLASH_V_NOT_SUPPORTED
//
// MessageText:
//
//  Verbose output not supported by NTFS CHKDSK.
//
#define MSG_CHK_NTFS_SLASH_V_NOT_SUPPORTED 0x000065D2L

//
// MessageId: MSG_CHK_NTFS_READ_ONLY_MODE
//
// MessageText:
//
//  Warning!  F parameter not specified
//  Running CHKDSK in read-only mode.
//
#define MSG_CHK_NTFS_READ_ONLY_MODE      0x000065D3L

//
// MessageId: MSG_CHK_NTFS_ERRORS_FOUND
//
// MessageText:
//
//  
//  Errors found.  CHKDSK cannot continue in read-only mode.
//
#define MSG_CHK_NTFS_ERRORS_FOUND        0x000065D4L

//
// MessageId: MSG_CHK_NTFS_CYCLES_IN_DIR_TREE
//
// MessageText:
//
//  Correcting cycles in directory tree.
//
#define MSG_CHK_NTFS_CYCLES_IN_DIR_TREE  0x000065D5L

//
// MessageId: MSG_CHK_NTFS_MINOR_FILE_NAME_ERRORS
//
// MessageText:
//
//  Correcting minor file name errors in file %1.
//
#define MSG_CHK_NTFS_MINOR_FILE_NAME_ERRORS 0x000065D6L

//
// MessageId: MSG_CHK_NTFS_MISSING_DATA_ATTRIBUTE
//
// MessageText:
//
//  Inserting data attribute into file %1.
//
#define MSG_CHK_NTFS_MISSING_DATA_ATTRIBUTE 0x000065D7L

//
// MessageId: MSG_CHK_NTFS_CANT_PUT_DATA_ATTRIBUTE
//
// MessageText:
//
//  Insufficient disk space to insert missing data attribute.
//
#define MSG_CHK_NTFS_CANT_PUT_DATA_ATTRIBUTE 0x000065D8L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_LOG_FILE
//
// MessageText:
//
//  Correcting errors in the Log File.
//
#define MSG_CHK_NTFS_CORRECTING_LOG_FILE 0x000065D9L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_LOG_FILE
//
// MessageText:
//
//  Insufficient disk space to fix the log file.
//  CHKDSK aborted.
//
#define MSG_CHK_NTFS_CANT_FIX_LOG_FILE   0x000065DAL

//
// MessageId: MSG_CHK_NTFS_CHECKING_FILES
//
// MessageText:
//
//  
//  CHKDSK is verifying files...
//
#define MSG_CHK_NTFS_CHECKING_FILES      0x000065DBL

//
// MessageId: MSG_CHK_NTFS_CHECKING_INDICES
//
// MessageText:
//
//  CHKDSK is verifying indexes...
//
#define MSG_CHK_NTFS_CHECKING_INDICES    0x000065DCL

//
// MessageId: MSG_CHK_NTFS_INDEX_VERIFICATION_COMPLETED
//
// MessageText:
//
//  Index verification completed.
//
#define MSG_CHK_NTFS_INDEX_VERIFICATION_COMPLETED 0x000065DDL

//
// MessageId: MSG_CHK_NTFS_FILE_VERIFICATION_COMPLETED
//
// MessageText:
//
//  File verification completed.
//
#define MSG_CHK_NTFS_FILE_VERIFICATION_COMPLETED 0x000065DEL

//
// MessageId: MSG_CHK_NTFS_CHECKING_SECURITY
//
// MessageText:
//
//  CHKDSK is verifying security descriptors...
//
#define MSG_CHK_NTFS_CHECKING_SECURITY   0x000065DFL

//
// MessageId: MSG_CHK_NTFS_SECURITY_VERIFICATION_COMPLETED
//
// MessageText:
//
//  Security descriptor verification completed.
//
#define MSG_CHK_NTFS_SECURITY_VERIFICATION_COMPLETED 0x000065E0L

//
// MessageId: MSG_CHK_NTFS_INVALID_SECURITY_DESCRIPTOR
//
// MessageText:
//
//  Replacing missing or invalid security descriptor for file %1.
//
#define MSG_CHK_NTFS_INVALID_SECURITY_DESCRIPTOR 0x000065E1L

//
// MessageId: MSG_CHK_NTFS_CANT_FIX_SECURITY
//
// MessageText:
//
//  Insufficient disk space for security descriptor for file %1.
//
#define MSG_CHK_NTFS_CANT_FIX_SECURITY   0x000065E2L

//
// MessageId: MSG_CHK_NTFS_WRONG_VERSION
//
// MessageText:
//
//  This volume cannot be checked with this version of UNTFS.DLL.
//
#define MSG_CHK_NTFS_WRONG_VERSION       0x000065E3L

//
// MessageId: MSG_CHK_NTFS_DELETING_GENERIC_INDEX_ENTRY
//
// MessageText:
//
//  Deleting an index entry from index %2 of file %1.
//
#define MSG_CHK_NTFS_DELETING_GENERIC_INDEX_ENTRY 0x000065E4L

//
// MessageId: MSG_CHK_NTFS_CORRECTING_CROSS_LINK
//
// MessageText:
//
//  Correcting cross-link for file %1.
//
#define MSG_CHK_NTFS_CORRECTING_CROSS_LINK 0x000065E5L

//
// MessageId: MSG_CHK_NTFS_VERIFYING_FILE_DATA
//
// MessageText:
//
//  CHKDSK is verifying file data...
//
#define MSG_CHK_NTFS_VERIFYING_FILE_DATA 0x000065E6L

//
// MessageId: MSG_CHK_NTFS_VERIFYING_FILE_DATA_COMPLETED
//
// MessageText:
//
//  File data verification completed.
//
#define MSG_CHK_NTFS_VERIFYING_FILE_DATA_COMPLETED 0x000065E7L

//
// MessageId: MSG_CHK_NTFS_TOO_MANY_FILE_NAMES
//
// MessageText:
//
//  Index entries referencing file %1 will not be be validated
//  because this file contains too many file names.
//
#define MSG_CHK_NTFS_TOO_MANY_FILE_NAMES 0x000065E8L

//
// MessageId: MSG_CHK_NTFS_RESETTING_LSNS
//
// MessageText:
//
//  CHKDSK is resetting recovery information...
//
#define MSG_CHK_NTFS_RESETTING_LSNS      0x000065E9L

//
// MessageId: MSG_CHK_NTFS_RESETTING_LOG_FILE
//
// MessageText:
//
//  CHKDSK is resetting the log file.
//
#define MSG_CHK_NTFS_RESETTING_LOG_FILE  0x000065EAL

//
// MessageId: MSG_CHK_NTFS_RESIZING_LOG_FILE
//
// MessageText:
//
//  CHKDSK is adjusting the size of the log file.
//
#define MSG_CHK_NTFS_RESIZING_LOG_FILE   0x000065EBL

//
// MessageId: MSG_CHK_NTFS_RESIZING_LOG_FILE_FAILED
//
// MessageText:
//
//  CHKDSK was unable to adjust the size of the log file.
//
#define MSG_CHK_NTFS_RESIZING_LOG_FILE_FAILED 0x000065ECL

//
// MessageId: MSG_CHK_NTFS_ADJUSTING_INSTANCE_TAGS
//
// MessageText:
//
//  Adjusting instance tags to prevent rollover on file %1.
//
#define MSG_CHK_NTFS_ADJUSTING_INSTANCE_TAGS 0x000065EDL

//---------------
//
// Common messages.
//
//---------------
//
// MessageId: MSG_UTILS_HELP
//
// MessageText:
//
//  There is no help for this utility.
//
#define MSG_UTILS_HELP                   0x00007530L

//
// MessageId: MSG_UTILS_ERROR_FATAL
//
// MessageText:
//
//  Critical error encountered.
//
#define MSG_UTILS_ERROR_FATAL            0x00007531L

//
// MessageId: MSG_UTILS_ERROR_INVALID_VERSION
//
// MessageText:
//
//  Incorrect Windows NT version
//
#define MSG_UTILS_ERROR_INVALID_VERSION  0x00007532L

//----------------------
//
// Convert messages.
//
//----------------------
//
// MessageId: MSG_CONV_USAGE
//
// MessageText:
//
//  Converts FAT or HPFS volumes to NTFS.
//  
//  CONVERT drive: /FS:NTFS [/V] [/NAMETABLE:file-name]
//  
//    drive       Specifies the drive to convert to NTFS.  Note that
//                you cannot convert the current drive.
//    /FS:NTFS    Specifies to convert the volume to NTFS.
//    /V          Specifies that Convert should be run in verbose mode.
//    file-name   Specifies that Convert should construct a name-translation
//                table and store it in the specified file in the root
//                directory of the volume to be converted.
//
#define MSG_CONV_USAGE                   0x00007594L

//
// MessageId: MSG_CONV_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid Parameter - %1
//
#define MSG_CONV_INVALID_PARAMETER       0x00007595L

//
// MessageId: MSG_CONV_NO_FILESYSTEM_SPECIFIED
//
// MessageText:
//
//  Must specify a file system
//
#define MSG_CONV_NO_FILESYSTEM_SPECIFIED 0x00007596L

//
// MessageId: MSG_CONV_INVALID_DRIVE
//
// MessageText:
//
//  Invalid drive - %1
//
#define MSG_CONV_INVALID_DRIVE           0x00007597L

//
// MessageId: MSG_CONV_CANT_NETWORK
//
// MessageText:
//
//  Cannot CONVERT a network drive.
//
#define MSG_CONV_CANT_NETWORK            0x00007598L

//
// MessageId: MSG_CONV_INVALID_FILESYSTEM
//
// MessageText:
//
//  %1 is not a valid file system
//
#define MSG_CONV_INVALID_FILESYSTEM      0x00007599L

//
// MessageId: MSG_CONV_CONVERSION_NOT_AVAILABLE
//
// MessageText:
//
//  Cannot convert %1 volumes to %2.
//
#define MSG_CONV_CONVERSION_NOT_AVAILABLE 0x0000759AL

//
// MessageId: MSG_CONV_WILL_CONVERT_ON_REBOOT
//
// MessageText:
//
//  The conversion will take place automatically the next time the
//  system restarts.
//
#define MSG_CONV_WILL_CONVERT_ON_REBOOT  0x0000759BL

//
// MessageId: MSG_CONV_CANNOT_FIND_SYSTEM_DIR
//
// MessageText:
//
//  Cannot determine location of system directory.
//
#define MSG_CONV_CANNOT_FIND_SYSTEM_DIR  0x0000759CL

//
// MessageId: MSG_CONV_CANNOT_FIND_FILE
//
// MessageText:
//
//  Could not find file %1
//  Make sure that the required file exists and try again.
//
#define MSG_CONV_CANNOT_FIND_FILE        0x0000759DL

//
// MessageId: MSG_CONV_CANNOT_SCHEDULE
//
// MessageText:
//
//  Could not schedule an automatic conversion of the drive.
//
#define MSG_CONV_CANNOT_SCHEDULE         0x0000759EL

//
// MessageId: MSG_CONV_ALREADY_SCHEDULED
//
// MessageText:
//
//  The %1 drive is already scheduled for an automatic
//  conversion.
//
#define MSG_CONV_ALREADY_SCHEDULED       0x0000759FL

//
// MessageId: MSG_CONV_CONVERTING
//
// MessageText:
//
//  Converting drive %1 to %2
//
#define MSG_CONV_CONVERTING              0x000075A0L

//
// MessageId: MSG_CONV_ALREADY_CONVERTED
//
// MessageText:
//
//  Drive %1 is already %2.
//
#define MSG_CONV_ALREADY_CONVERTED       0x000075A1L

//
// MessageId: MSG_CONV_CANNOT_AUTOCHK
//
// MessageText:
//
//  Could not check volume %1 for errors.
//  The conversion to %2 did not take place.
//
#define MSG_CONV_CANNOT_AUTOCHK          0x000075A2L

//
// MessageId: MSG_CONV_CHECKING_SPACE
//
// MessageText:
//
//  Determining disk space required for filesystem conversion
//
#define MSG_CONV_CHECKING_SPACE          0x000075A8L

//
// MessageId: MSG_CONV_KBYTES_TOTAL
//
// MessageText:
//
//  Total disk space:              %1 kilobytes.
//
#define MSG_CONV_KBYTES_TOTAL            0x000075A9L

//
// MessageId: MSG_CONV_KBYTES_FREE
//
// MessageText:
//
//  Free space on volume:          %1 kilobytes.
//
#define MSG_CONV_KBYTES_FREE             0x000075AAL

//
// MessageId: MSG_CONV_KBYTES_NEEDED
//
// MessageText:
//
//  Space required for conversion: %1 kilobytes.
//
#define MSG_CONV_KBYTES_NEEDED           0x000075ABL

//
// MessageId: MSG_CONV_CONVERTING_FS
//
// MessageText:
//
//  Converting file system
//
#define MSG_CONV_CONVERTING_FS           0x000075ACL

//
// MessageId: MSG_CONV_PERCENT_COMPLETE
//
// MessageText:
//
//  %1 percent completed.                  %r%0
//
#define MSG_CONV_PERCENT_COMPLETE        0x000075ADL

//
// MessageId: MSG_CONV_CONVERSION_COMPLETE
//
// MessageText:
//
//  Conversion complete
//
#define MSG_CONV_CONVERSION_COMPLETE     0x000075AEL

//
// MessageId: MSG_CONV_CONVERSION_FAILED
//
// MessageText:
//
//  The conversion failed.
//  %1 was not converted to %2
//
#define MSG_CONV_CONVERSION_FAILED       0x000075AFL

//
// MessageId: MSG_CONV_CANNOT_READ
//
// MessageText:
//
//  Error during disk read
//
#define MSG_CONV_CANNOT_READ             0x000075C6L

//
// MessageId: MSG_CONV_CANNOT_WRITE
//
// MessageText:
//
//  Error during disk write
//
#define MSG_CONV_CANNOT_WRITE            0x000075C7L

//
// MessageId: MSG_CONV_NO_MEMORY
//
// MessageText:
//
//  Insufficient Memory
//
#define MSG_CONV_NO_MEMORY               0x000075C8L

//
// MessageId: MSG_CONV_NO_DISK_SPACE
//
// MessageText:
//
//  Insufficient disk space for conversion
//
#define MSG_CONV_NO_DISK_SPACE           0x000075C9L

//
// MessageId: MSG_CONV_CANNOT_RELOCATE
//
// MessageText:
//
//  Cannot relocate existing file system structures
//
#define MSG_CONV_CANNOT_RELOCATE         0x000075CAL

//
// MessageId: MSG_CONV_CANNOT_CREATE_ELEMENTARY
//
// MessageText:
//
//  Cannot create the elementary file system structures.
//
#define MSG_CONV_CANNOT_CREATE_ELEMENTARY 0x000075CBL

//
// MessageId: MSG_CONV_ERROR_READING_DIRECTORY
//
// MessageText:
//
//  Error reading directory %1
//
#define MSG_CONV_ERROR_READING_DIRECTORY 0x000075CCL

//
// MessageId: MSG_CONV_CANNOT_CONVERT_DIRECTORY
//
// MessageText:
//
//  Error converting directory %1
//
#define MSG_CONV_CANNOT_CONVERT_DIRECTORY 0x000075CDL

//
// MessageId: MSG_CONV_CANNOT_CONVERT_FILE
//
// MessageText:
//
//  Error converting file %1
//
#define MSG_CONV_CANNOT_CONVERT_FILE     0x000075CEL

//
// MessageId: MSG_CONV_CANNOT_CONVERT_DATA
//
// MessageText:
//
//  Error converting file data
//
#define MSG_CONV_CANNOT_CONVERT_DATA     0x000075CFL

//
// MessageId: MSG_CONV_CANNOT_CONVERT_EA
//
// MessageText:
//
//  Cannot convert an extended attribute
//
#define MSG_CONV_CANNOT_CONVERT_EA       0x000075D0L

//
// MessageId: MSG_CONV_NO_EA_FILE
//
// MessageText:
//
//  A file contains extended attributes,
//  but the extended attribute file was not found.
//
#define MSG_CONV_NO_EA_FILE              0x000075D1L

//
// MessageId: MSG_CONV_CANNOT_MAKE_INDEX
//
// MessageText:
//
//  Cannot locate or create an NTFS index.
//
#define MSG_CONV_CANNOT_MAKE_INDEX       0x000075D2L

//
// MessageId: MSG_CONV_CANNOT_CONVERT_VOLUME
//
// MessageText:
//
//  This volume cannot be converted to %1.
//  Possible causes are:
//      1.- Bad sectors in required areas of the volume.
//      2.- %2 structures in areas required by %1.
//
#define MSG_CONV_CANNOT_CONVERT_VOLUME   0x000075D3L

//
// MessageId: MSG_CONVERT_ON_REBOOT_PROMPT
//
// MessageText:
//
//  Convert cannot gain exclusive access to the %1 drive,
//  so it cannot convert it now.  Would you like to
//  schedule it to be converted the next time the
//  system restarts (Y/N)? %0
//
#define MSG_CONVERT_ON_REBOOT_PROMPT     0x000075D4L

//
// MessageId: MSG_CONVERT_FILE_SYSTEM_NOT_ENABLED
//
// MessageText:
//
//  The %1 file system is not enabled.  The volume
//  will not be converted.
//
#define MSG_CONVERT_FILE_SYSTEM_NOT_ENABLED 0x000075D5L

//
// MessageId: MSG_CONVERT_UNSUPPORTED_SECTOR_SIZE
//
// MessageText:
//
//  Unsupported sector size.  Cannot convert volume to %1.
//
#define MSG_CONVERT_UNSUPPORTED_SECTOR_SIZE 0x000075D6L

//
// MessageId: MSG_CONVERT_REBOOT
//
// MessageText:
//
//  
//  The file system has been converted.
//  Please wait while the system restarts.
//
#define MSG_CONVERT_REBOOT               0x000075D7L

//
// MessageId: MSG_CONV_ARC_SYSTEM_PARTITION
//
// MessageText:
//
//  The specified drive is the system partition on an ARC-compliant
//  system; its file system cannot be converted
//
#define MSG_CONV_ARC_SYSTEM_PARTITION    0x000075D8L

//
// MessageId: MSG_CONV_GEOMETRY_MISMATCH
//
// MessageText:
//
//  The disk geometry recorded in the volume's Bios Parameter
//  Block differs from the geometry reported by the driver.
//  This volume cannot be converted to %1.
//
#define MSG_CONV_GEOMETRY_MISMATCH       0x000075D9L

//
// MessageId: MSG_CONV_NAME_TABLE_NOT_SUPPORTED
//
// MessageText:
//
//  Name table translation is not available for conversion to %1.
//
#define MSG_CONV_NAME_TABLE_NOT_SUPPORTED 0x000075DAL

//--------------------------------
//
// HPFS-specific Convert methods
//
//--------------------------------
//
// MessageId: MSG_CONV_HPFS_NOT_HPFS
//
// MessageText:
//
//  This volume is not a valid HPFS volume; it cannot be converted.
//
#define MSG_CONV_HPFS_NOT_HPFS           0x000075E5L

//
// MessageId: MSG_CONV_HPFS_DIRTY_VOLUME
//
// MessageText:
//
//  The specified volume is dirty; it cannot be converted.  Run
//  CHKDSK /f to correct this problem.
//
#define MSG_CONV_HPFS_DIRTY_VOLUME       0x000075E6L

//
// MessageId: MSG_CONV_HPFS_HOTFIXES_PRESENT
//
// MessageText:
//
//  The specified volume has hotfixes; it cannot be converted.
//  Run CHKDSK /f to resolve these references.
//
#define MSG_CONV_HPFS_HOTFIXES_PRESENT   0x000075E7L

//
// MessageId: MSG_CONV_HPFS_CORRUPT_VOLUME
//
// MessageText:
//
//  The file system structures on the specified volume are
//  corrupt; the volume cannot be converted.  Run CHKDSK /f
//  to correct this problem.
//
#define MSG_CONV_HPFS_CORRUPT_VOLUME     0x000075E8L

//
// MessageId: MSG_CONV_VOLUME_TOO_FRAGMENTED
//
// MessageText:
//
//  The volume is too fragmented to be converted to NTFS.
//
#define MSG_CONV_VOLUME_TOO_FRAGMENTED   0x000075E9L

//
// MessageId: MSG_CONV_INCONVERTIBLE_NAME
//
// MessageText:
//
//  Convert encountered a name which could not be converted to Unicode
//  in the directory %1.
//
#define MSG_CONV_INCONVERTIBLE_NAME      0x000075EAL

//
// MessageId: MSG_CONV_CONSTRUCTING_NAME_TABLE
//
// MessageText:
//
//  Constructing name translation table.
//
#define MSG_CONV_CONSTRUCTING_NAME_TABLE 0x000075EBL

//
// MessageId: MSG_CONV_CANT_WRITE_NAME_TABLE
//
// MessageText:
//
//  Convert cannot write the name translation table to disk.
//
#define MSG_CONV_CANT_WRITE_NAME_TABLE   0x000075ECL

//
// MessageId: MSG_CONV_CANT_READ_NAME_TABLE
//
// MessageText:
//
//  Convert cannot read the name translation table from %1.
//
#define MSG_CONV_CANT_READ_NAME_TABLE    0x000075EDL

//
// MessageId: MSG_CONV_USE_NAMETABLE
//
// MessageText:
//
//  Rerun Convert with the NAMETABLE option.
//
#define MSG_CONV_USE_NAMETABLE           0x000075EEL

//
// MessageId: MSG_CONV_DUPLICATE_NAME
//
// MessageText:
//
//  Convert encountered duplicate names in the
//  directory %1.
//
#define MSG_CONV_DUPLICATE_NAME          0x000075EFL

//
// MessageId: MSG_CONV_INCONVERTIBLE_NAME_IN_ROOT
//
// MessageText:
//
//  Convert encountered a name in the root directory which could not
//  be converted to Unicode.
//
#define MSG_CONV_INCONVERTIBLE_NAME_IN_ROOT 0x000075F0L

//----------------------
//
// DC messages.
//
//----------------------
//
// MessageId: MSG_DISKCOPY_USAGE
//
// MessageText:
//
//  Usage: DC Src Dst [/v] [/h]
//
#define MSG_DISKCOPY_USAGE               0x000075F8L

//
// MessageId: MSG_DISKCOPY_NO_MEMORY
//
// MessageText:
//
//  Out of memory
//
#define MSG_DISKCOPY_NO_MEMORY           0x000075F9L

//
// MessageId: MSG_DISKCOPY_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter - %1
//
#define MSG_DISKCOPY_INVALID_PARAMETER   0x000075FAL

//----------------------
//
// KEYB messages.
//
//----------------------
//
// MessageId: MSG_KEYB_EXTENDED_ERROR
//
// MessageText:
//
//  Extended Error %1
//
#define MSG_KEYB_EXTENDED_ERROR          0x0000765CL

//
// MessageId: MSG_KEYB_TOO_MANY_PARAMETERS
//
// MessageText:
//
//  Too many parameters
//
#define MSG_KEYB_TOO_MANY_PARAMETERS     0x0000765DL

//
// MessageId: MSG_KEYB_MISSING_PARAMETER
//
// MessageText:
//
//  Required parameter missing
//
#define MSG_KEYB_MISSING_PARAMETER       0x0000765EL

//
// MessageId: MSG_KEYB_INVALID_SWITCH
//
// MessageText:
//
//  Invalid switch
//
#define MSG_KEYB_INVALID_SWITCH          0x0000765FL

//
// MessageId: MSG_KEYB_VALUE_OUT_OF_RANGE
//
// MessageText:
//
//  Parameter value not in allowed range
//
#define MSG_KEYB_VALUE_OUT_OF_RANGE      0x00007661L

//
// MessageId: MSG_KEYB_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter
//
#define MSG_KEYB_INVALID_PARAMETER       0x00007663L

//
// MessageId: MSG_KEYB_PARSE_ERROR
//
// MessageText:
//
//  Parse Error %1
//
#define MSG_KEYB_PARSE_ERROR             0x00007664L

//
// MessageId: MSG_KEYB_INCORRECT_VERSION
//
// MessageText:
//
//  Incorrect Windows NT version
//
#define MSG_KEYB_INCORRECT_VERSION       0x00007665L

//
// MessageId: MSG_KEYB_KEYBOARD_CODE
//
// MessageText:
//
//  Current keyboard code: %1
//
#define MSG_KEYB_KEYBOARD_CODE           0x00007666L

//
// MessageId: MSG_KEYB_KEYBOARD_LAYOUT
//
// MessageText:
//
//  There is no two-letter keyboard code for the current
//  keyboard layout.
//  
//  Current keyboard Layout: Language %1  Sublanguage %2
//
#define MSG_KEYB_KEYBOARD_LAYOUT         0x00007667L

//
// MessageId: MSG_KEYB_KEYBOARD_ID
//
// MessageText:
//
//  Current keyboard ID: %1
//
#define MSG_KEYB_KEYBOARD_ID             0x00007668L

//
// MessageId: MSG_KEYB_CODE_PAGE
//
// MessageText:
//
//  code page: %1
//
#define MSG_KEYB_CODE_PAGE               0x00007669L

//
// MessageId: MSG_KEYB_CON_CODE_PAGE
//
// MessageText:
//
//  Current CON code page: %1
//
#define MSG_KEYB_CON_CODE_PAGE           0x0000766AL

//
// MessageId: MSG_KEYB_INVALID_CODE
//
// MessageText:
//
//  Invalid keyboard code specified
//
#define MSG_KEYB_INVALID_CODE            0x0000766BL

//
// MessageId: MSG_KEYB_INVALID_ID
//
// MessageText:
//
//  Invalid keyboard ID specified
//
#define MSG_KEYB_INVALID_ID              0x0000766CL

//
// MessageId: MSG_KEYB_INVALID_CODE_PAGE
//
// MessageText:
//
//  Invalid code page specified
//
#define MSG_KEYB_INVALID_CODE_PAGE       0x0000766DL

//
// MessageId: MSG_KEYB_BAD_REGISTRY
//
// MessageText:
//
//  Keyboard Layout information missing from Registry
//
#define MSG_KEYB_BAD_REGISTRY            0x0000766EL

//
// MessageId: MSG_KEYB_USAGE
//
// MessageText:
//
//  Configures a keyboard for a specific language.
//  
//  KEYB [xx[,[yyy][,[drive:][path]filename]]] [/E] [/ID:nnn]
//  
//    xx                      Specifies a two-letter keyboard code.
//    yyy                     Specifies a console code page.
//    [drive:][path]filename  Ignored
//    /E                      Ignored
//    /ID:nnn                 Ignored
//  
//
#define MSG_KEYB_USAGE                   0x00007677L

//----------------------
//
// CHCP messages.
//
//----------------------
//
// MessageId: MSG_CHCP_INVALID_PARAMETER
//
// MessageText:
//
//  Parameter format not correct - %1
//
#define MSG_CHCP_INVALID_PARAMETER       0x0000768EL

//
// MessageId: MSG_CHCP_ACTIVE_CODEPAGE
//
// MessageText:
//
//  Active code page: %1
//
#define MSG_CHCP_ACTIVE_CODEPAGE         0x00007692L

//
// MessageId: MSG_CHCP_INVALID_CODEPAGE
//
// MessageText:
//
//  Invalid code page
//
#define MSG_CHCP_INVALID_CODEPAGE        0x00007693L

//
// MessageId: MSG_CHCP_USAGE
//
// MessageText:
//
//  Displays or sets the active code page number.
//  
//  CHCP [nnn]
//  
//    nnn   Specifies a code page number.
//  
//  Type CHCP without a parameter to display the active code page number.
//
#define MSG_CHCP_USAGE                   0x00007694L

//
// MessageId: MSG_CHCP_INTERNAL_ERROR
//
// MessageText:
//
//  Internal error.
//
#define MSG_CHCP_INTERNAL_ERROR          0x00007695L

//----------------------
//
// ACLCONV messages
//
//----------------------
//
// MessageId: MSG_ACLCONV_USAGE
//
// MessageText:
//
//  Converts OS/2 LANMAN SERVER access control lists.
//  
//  ACLCONV /DATA:datafile /LOG:logfile [/NEWDRIVE:n:] [/DOMAIN:domain] [/CODEPAGE:n]
//  ACLCONV /LOG:logfile /LIST /CODEPAGE:n
//  
//    /DATA:datafile  Specifies an OS/2 Lanman BACKACC data file.
//    /LOG:logfile    Specifies the ACLCONV log file.
//    /LIST           List the contents of the specified log file.
//    /NEWDRIVE:n:    Restore permissions onto drive n: instead of
//                    original drive.
//    /DOMAIN:domain  Search only the specified domain for account names.
//    /CODEPAGE:n     Specifies the Code Page associated with the
//                    BACKACC data file.
//  
//
#define MSG_ACLCONV_USAGE                0x000076C0L

//
// MessageId: MSG_ACLCONV_CANT_OPEN_FILE
//
// MessageText:
//
//  Cannot open %1.
//  
//
#define MSG_ACLCONV_CANT_OPEN_FILE       0x000076C1L

//
// MessageId: MSG_ACLCONV_DATAFILE_BAD_FORMAT
//
// MessageText:
//
//  Cannot determine LAN Manager 2.x Backacc utility revision of %1.
//  
//
#define MSG_ACLCONV_DATAFILE_BAD_FORMAT  0x000076C2L

//
// MessageId: MSG_ACLCONV_DATAFILE_ERROR
//
// MessageText:
//
//  Error encountered reading data file.
//  
//
#define MSG_ACLCONV_DATAFILE_ERROR       0x000076C3L

//
// MessageId: MSG_ACLCONV_LOGFILE_ERROR
//
// MessageText:
//
//  Error encountered writing log file.
//  
//
#define MSG_ACLCONV_LOGFILE_ERROR        0x000076C4L

//
// MessageId: MSG_ACLCONV_CONVERSION_ERROR
//
// MessageText:
//
//  Conversion ceased due to error.
//  
//
#define MSG_ACLCONV_CONVERSION_ERROR     0x000076C5L

//
// MessageId: MSG_ACLCONV_INVALID_LOG_FILE
//
// MessageText:
//
//  Invalid log file format.
//  
//
#define MSG_ACLCONV_INVALID_LOG_FILE     0x000076C6L

//
// MessageId: MSG_ACLCONV_USERNAME
//
// MessageText:
//
//          %1:%0
//
#define MSG_ACLCONV_USERNAME             0x000076C7L

//
// MessageId: MSG_ACLCONV_READ_PERM
//
// MessageText:
//
//  R%0
//
#define MSG_ACLCONV_READ_PERM            0x000076C8L

//
// MessageId: MSG_ACLCONV_WRITE_PERM
//
// MessageText:
//
//  W%0
//
#define MSG_ACLCONV_WRITE_PERM           0x000076C9L

//
// MessageId: MSG_ACLCONV_CREATE_PERM
//
// MessageText:
//
//  C%0
//
#define MSG_ACLCONV_CREATE_PERM          0x000076CAL

//
// MessageId: MSG_ACLCONV_EXECUTE_PERM
//
// MessageText:
//
//  X%0
//
#define MSG_ACLCONV_EXECUTE_PERM         0x000076CBL

//
// MessageId: MSG_ACLCONV_DELETE_PERM
//
// MessageText:
//
//  D%0
//
#define MSG_ACLCONV_DELETE_PERM          0x000076CCL

//
// MessageId: MSG_ACLCONV_ATTR_PERM
//
// MessageText:
//
//  A%0
//
#define MSG_ACLCONV_ATTR_PERM            0x000076CDL

//
// MessageId: MSG_ACLCONV_PERM_PERM
//
// MessageText:
//
//  P%0
//
#define MSG_ACLCONV_PERM_PERM            0x000076CEL

//
// MessageId: MSG_ACLCONV_NONE_PERM
//
// MessageText:
//
//  (none)%0
//
#define MSG_ACLCONV_NONE_PERM            0x000076CFL

//
// MessageId: MSG_ACLCONV_FILE_NOT_FOUND
//
// MessageText:
//
//   -- File not found.
//
#define MSG_ACLCONV_FILE_NOT_FOUND       0x000076D0L

//
// MessageId: MSG_ACLCONV_ACE_DROPPED
//
// MessageText:
//
//   -- superfluous access control entry dropped.
//
#define MSG_ACLCONV_ACE_DROPPED          0x000076D1L

//
// MessageId: MSG_ACLCONV_SID_NOT_FOUND
//
// MessageText:
//
//   -- User or group ID not found.
//
#define MSG_ACLCONV_SID_NOT_FOUND        0x000076D2L

//
// MessageId: MSG_ACLCONV_ERROR_IN_CONVERSION
//
// MessageText:
//
//   -- Error in conversion.
//
#define MSG_ACLCONV_ERROR_IN_CONVERSION  0x000076D3L

//
// MessageId: MSG_ACLCONV_ACE_CONVERTED
//
// MessageText:
//
//   -- Conversion successful.
//
#define MSG_ACLCONV_ACE_CONVERTED        0x000076D4L

//
// MessageId: MSG_ACLCONV_RESOURCE_NAME
//
// MessageText:
//
//  %1
//
#define MSG_ACLCONV_RESOURCE_NAME        0x000076D5L

//
// MessageId: MSG_ACLCONV_CONVERT_COMPLETE
//
// MessageText:
//
//  Conversion complete.
//
#define MSG_ACLCONV_CONVERT_COMPLETE     0x000076D6L

//
// MessageId: MSG_ACLCONV_LOGFILE_READ_ERROR
//
// MessageText:
//
//  Error encountered reading log file.
//
#define MSG_ACLCONV_LOGFILE_READ_ERROR   0x000076D7L

//
// MessageId: MSG_ACLCONV_INVALID_DRIVE
//
// MessageText:
//
//  ACLCONV cannot restore permissions onto drive %1
//
#define MSG_ACLCONV_INVALID_DRIVE        0x000076D8L

//
// MessageId: MSG_ACLCONV_CANT_DETERMINE_FILESYSTEM
//
// MessageText:
//
//  ACLCONV cannot determine the file system on target volume.
//
#define MSG_ACLCONV_CANT_DETERMINE_FILESYSTEM 0x000076D9L

//
// MessageId: MSG_ACLCONV_TARGET_NOT_NTFS
//
// MessageText:
//
//  The target drive is not formatted for NTFS; ACLCONV can only
//  restore security information to NTFS volumes.
//
#define MSG_ACLCONV_TARGET_NOT_NTFS      0x000076DAL

//
// MessageId: MSG_ACLCONV_BAD_CODEPAGE
//
// MessageText:
//
//  The specified codepage is not valid.
//
#define MSG_ACLCONV_BAD_CODEPAGE         0x000076DBL

//----------------
//
// DOSKEY messages
//
//----------------
//
// MessageId: MSG_DOSKEY_INVALID_MACRO_DEFINITION
//
// MessageText:
//
//  Invalid macro definition.
//
#define MSG_DOSKEY_INVALID_MACRO_DEFINITION 0x00007727L

//
// MessageId: MSG_DOSKEY_HELP
//
// MessageText:
//
//  Edits command lines, recalls Windows NT commands, and creates macros.
//  
//  DOSKEY [/REINSTALL] [/LISTSIZE=size] [/MACROS[:ALL | :exename]]
//    [/HISTORY] [/INSERT | /OVERSTRIKE] [/EXENAME=exename] [/MACROFILE=filename]
//    [macroname=[text]]
//  
//    /REINSTALL          Installs a new copy of Doskey.
//    /LISTSIZE=size      Sets size of command history buffer.
//    /MACROS             Displays all Doskey macros.
//    /MACROS:ALL         Displays all Doskey macros for all executables which have
//                        Doskey macros.
//    /MACROS:exename     Displays all Doskey macros for the given executable.
//    /HISTORY            Displays all commands stored in memory.
//    /INSERT             Specifies that new text you type is inserted in old text.
//    /OVERSTRIKE         Specifies that new text overwrites old text.
//    /EXENAME=exename    Specifies the executable.
//    /MACROFILE=filename Specifies a file of macros to install.
//    macroname           Specifies a name for a macro you create.
//    text                Specifies commands you want to record.
//  
//  UP and DOWN ARROWS recall commands; ESC clears command line; F7 displays
//  command history; ALT+F7 clears command history; F8 searches command
//  history; F9 selects a command by number; ALT+F10 clears macro definitions.
//  
//  The following are some special codes in Doskey macro definitions:
//  $T     Command separator.  Allows multiple commands in a macro.
//  $1-$9  Batch parameters.  Equivalent to %%1-%%9 in batch programs.
//  $*     Symbol replaced by everything following macro name on command line.
//
#define MSG_DOSKEY_HELP                  0x00007728L

//
// MessageId: MSG_DOSKEY_CANT_DO_BUFSIZE
//
// MessageText:
//
//  To specify the size of the command history buffer under Window NT,
//  use the /listsize switch which sets the number of commands to remember.
//
#define MSG_DOSKEY_CANT_DO_BUFSIZE       0x00007729L

//
// MessageId: MSG_DOSKEY_CANT_SIZE_LIST
//
// MessageText:
//
//  Insufficient memory to grow DOSKEY list.
//
#define MSG_DOSKEY_CANT_SIZE_LIST        0x0000772AL

//----------------
//
// SUBST messages
//
//----------------
//
// MessageId: MSG_SUBST_INFO
//
// MessageText:
//
//  Associates a path with a drive letter.
//  
//
#define MSG_SUBST_INFO                   0x0000772BL

//
// MessageId: MSG_SUBST_ALREADY_SUBSTED
//
// MessageText:
//
//  Drive already SUBSTed
//
#define MSG_SUBST_ALREADY_SUBSTED        0x0000772CL

//
// MessageId: MSG_SUBST_USAGE
//
// MessageText:
//
//  SUBST [drive1: [drive2:]path]
//  SUBST drive1: /D
//  
//    drive1:        Specifies a virtual drive to which you want to assign a path.
//    [drive2:]path  Specifies a physical drive and path you want to assign to
//                   a virtual drive.
//    /D             Deletes a substituted (virtual) drive.
//  
//  Type SUBST with no parameters to display a list of current virtual drives.
//
#define MSG_SUBST_USAGE                  0x0000772DL

//
// MessageId: MSG_SUBST_SUBSTED_DRIVE
//
// MessageText:
//
//  %1: => %2
//
#define MSG_SUBST_SUBSTED_DRIVE          0x0000772EL

//
// MessageId: MSG_SUBST_INVALID_PARAMETER
//
// MessageText:
//
//  Invalid parameter - %1
//
#define MSG_SUBST_INVALID_PARAMETER      0x0000772FL

//
// MessageId: MSG_SUBST_TOO_MANY_PARAMETERS
//
// MessageText:
//
//  Incorrect number of parameters - %1
//
#define MSG_SUBST_TOO_MANY_PARAMETERS    0x00007730L

//
// MessageId: MSG_SUBST_PATH_NOT_FOUND
//
// MessageText:
//
//  Path not found - %1
//
#define MSG_SUBST_PATH_NOT_FOUND         0x00007731L

//
// MessageId: MSG_SUBST_ACCESS_DENIED
//
// MessageText:
//
//  Access denied - %1
//
#define MSG_SUBST_ACCESS_DENIED          0x00007732L

//+---------------------------------------------------------------------------
//
// OFS Utility Messages.
//
// Messages in the range 40000-44000 are reserved for use by the OFS utilities.
// These utilities also use some of the generic utilities error messages.
//
//----------------------------------------------------------------------------
//
// The following is used by OFS utils to pass a character string through to the
// console without any processing whatever.
//
//
// MessageId: MSG_PASSTHROUGH
//
// MessageText:
//
//  %1%0
//
#define MSG_PASSTHROUGH                  0x00009C40L

//
// Normal output messages used by OFS Format and/or ChkDsk.
//
//
// MessageId: OFSUMSG_VOLLABEL_PROMPT
//
// MessageText:
//
//  Volume label (32 characters maximum, ENTER for none)? %0
//
#define OFSUMSG_VOLLABEL_PROMPT          0x00009C41L

//
// MessageId: OFSUMSG_FORMAT_FAILED
//
// MessageText:
//
//  
//  OFS volume formatting was not completed.
//
#define OFSUMSG_FORMAT_FAILED            0x00009C42L

//
// MessageId: OFSUMSG_CHKDSK_FAILED
//
// MessageText:
//
//  
//  OFS volume checking could not be completed.
//
#define OFSUMSG_CHKDSK_FAILED            0x00009C43L

//
// MessageId: OFSUMSG_VERIFYMODECHK_INCOMPLETE
//
// MessageText:
//
//  
//  Complete OFS volume checking could not be done in verify mode.
//  Checking in fix mode is recommended.
//
#define OFSUMSG_VERIFYMODECHK_INCOMPLETE 0x00009C44L

//
// MessageId: OFSUMSG_USERFILESKB
//
// MessageText:
//
//  %1 kilobytes in %2 user files.
//
#define OFSUMSG_USERFILESKB              0x00009C45L

//
// MessageId: OFSUMSG_INDEXESKB
//
// MessageText:
//
//  %1 kilobytes in %2 indexes.
//
#define OFSUMSG_INDEXESKB                0x00009C46L

//
// MessageId: OFSUMSG_OTHERUSERSTRMKB
//
// MessageText:
//
//  %1 kilobytes in %2 other user streams.
//
#define OFSUMSG_OTHERUSERSTRMKB          0x00009C47L

//
// MessageId: OFSUMSG_BADSECTORSKB
//
// MessageText:
//
//  %1 kilobytes in bad sectors.
//
#define OFSUMSG_BADSECTORSKB             0x00009C48L

//
// MessageId: OFSUMSG_SYSTEMSPACEKB
//
// MessageText:
//
//  %1 kilobytes in use by the system.
//
#define OFSUMSG_SYSTEMSPACEKB            0x00009C49L

//
// Ondisk structure name inserts used by OFS Format and/or ChkDsk.
//
//
// MessageId: OFSUINSERT_NODEBKTARRAYSTRM
//
// MessageText:
//
//  node bucket array stream%0
//
#define OFSUINSERT_NODEBKTARRAYSTRM      0x00009C73L

//
// MessageId: OFSUINSERT_ALLOCMAPSTRM
//
// MessageText:
//
//  allocation map stream%0
//
#define OFSUINSERT_ALLOCMAPSTRM          0x00009C74L

//
// MessageId: OFSUINSERT_BADCLUSTERSTRM
//
// MessageText:
//
//  bad cluster list stream%0
//
#define OFSUINSERT_BADCLUSTERSTRM        0x00009C75L

//
// MessageId: OFSUINSERT_VOLINFOSTRM
//
// MessageText:
//
//  volume information stream%0
//
#define OFSUINSERT_VOLINFOSTRM           0x00009C76L

//
// MessageId: OFSUINSERT_VOLCHKPOINTSTRM
//
// MessageText:
//
//  volume checkpoint stream%0
//
#define OFSUINSERT_VOLCHKPOINTSTRM       0x00009C77L

//
// MessageId: OFSUINSERT_WORKIDMAPARRAYSTRM
//
// MessageText:
//
//  work id mapping array stream%0
//
#define OFSUINSERT_WORKIDMAPARRAYSTRM    0x00009C78L

//
// MessageId: OFSUINSERT_RECOVERYLOGSTRM
//
// MessageText:
//
//  recovery log stream%0
//
#define OFSUINSERT_RECOVERYLOGSTRM       0x00009C79L

//
// MessageId: OFSUINSERT_UPCASETBLSTRM
//
// MessageText:
//
//  upcase table stream%0
//
#define OFSUINSERT_UPCASETBLSTRM         0x00009C7AL

//
// MessageId: OFSUINSERT_FIXUP1STRM
//
// MessageText:
//
//  first fixup stream%0
//
#define OFSUINSERT_FIXUP1STRM            0x00009C7BL

//
// MessageId: OFSUINSERT_FIXUP2STRM
//
// MessageText:
//
//  second fixup stream%0
//
#define OFSUINSERT_FIXUP2STRM            0x00009C7CL

//
// MessageId: OFSUINSERT_INDIRECTSALVAGESTRM
//
// MessageText:
//
//  indirect salvage stream%0
//
#define OFSUINSERT_INDIRECTSALVAGESTRM   0x00009C7DL

//
// MessageId: OFSUINSERT_DELTASALVAGESTRM
//
// MessageText:
//
//  delta salvage stream%0
//
#define OFSUINSERT_DELTASALVAGESTRM      0x00009C7EL

//
// MessageId: OFSUINSERT_COWSALVAGESTRM
//
// MessageText:
//
//  copy on write salvage stream%0
//
#define OFSUINSERT_COWSALVAGESTRM        0x00009C7FL

//
// MessageId: OFSUINSERT_CINDEXSTRM
//
// MessageText:
//
//  content index stream%0
//
#define OFSUINSERT_CINDEXSTRM            0x00009C80L

//
// MessageId: OFSUINSERT_SECURITYSTRM
//
// MessageText:
//
//  security data stream%0
//
#define OFSUINSERT_SECURITYSTRM          0x00009C81L

//
// MessageId: OFSUINSERT_DATASTRM
//
// MessageText:
//
//  data stream%0
//
#define OFSUINSERT_DATASTRM              0x00009C82L

//
// MessageId: OFSUINSERT_INDXSTRM
//
// MessageText:
//
//  index stream%0
//
#define OFSUINSERT_INDXSTRM              0x00009C83L

//
// MessageId: OFSUINSERT_NXTINDXSTRM
//
// MessageText:
//
//  next index stream%0
//
#define OFSUINSERT_NXTINDXSTRM           0x00009C84L

//
// MessageId: OFSUINSERT_VIEWFOLDERDEF
//
// MessageText:
//
//  view folder definition stream%0
//
#define OFSUINSERT_VIEWFOLDERDEF         0x00009C85L

//
// MessageId: OFSUINSERT_INDXROOTSTRM
//
// MessageText:
//
//  index root stream%0
//
#define OFSUINSERT_INDXROOTSTRM          0x00009C86L

//
// MessageId: OFSUINSERT_STRMWITHID
//
// MessageText:
//
//  stream with id%0
//
#define OFSUINSERT_STRMWITHID            0x00009C87L

//
// MessageId: OFSUINSERT_OBJECT
//
// MessageText:
//
//  object%0
//
#define OFSUINSERT_OBJECT                0x00009C88L

//
// MessageId: OFSUINSERT_OBJECTWITHID
//
// MessageText:
//
//  object with id%0
//
#define OFSUINSERT_OBJECTWITHID          0x00009C89L

//
// MessageId: OFSUINSERT_VOLCATONODE
//
// MessageText:
//
//  volume catalog object%0
//
#define OFSUINSERT_VOLCATONODE           0x00009C8AL

//
// MessageId: OFSUINSERT_NAMESPACEROOTINDX
//
// MessageText:
//
//  namespace root index object%0
//
#define OFSUINSERT_NAMESPACEROOTINDX     0x00009C8BL

//
// MessageId: OFSUINSERT_OBJIDTOWIDINDX
//
// MessageText:
//
//  object id to work id index object%0
//
#define OFSUINSERT_OBJIDTOWIDINDX        0x00009C8CL

//
// MessageId: OFSUINSERT_SUBTYPETOSTRMIDINDX
//
// MessageText:
//
//  subtype to stream id index object%0
//
#define OFSUINSERT_SUBTYPETOSTRMIDINDX   0x00009C8DL

//
// MessageId: OFSUINSERT_STRMIDTOSUBTYPEINDX
//
// MessageText:
//
//  stream id to subtype index object%0
//
#define OFSUINSERT_STRMIDTOSUBTYPEINDX   0x00009C8EL

//
// MessageId: OFSUINSERT_CONTENTINDXLSTINDX
//
// MessageText:
//
//  content index list index object%0
//
#define OFSUINSERT_CONTENTINDXLSTINDX    0x00009C8FL

//
// MessageId: OFSUINSERT_COWREFINDX
//
// MessageText:
//
//  copy-on-write reference index object%0
//
#define OFSUINSERT_COWREFINDX            0x00009C90L

//
// MessageId: OFSUINSERT_OBJDELLOGINDX
//
// MessageText:
//
//  object deletion log index object%0
//
#define OFSUINSERT_OBJDELLOGINDX         0x00009C91L

//
// MessageId: OFSUINSERT_SECURITYINDX
//
// MessageText:
//
//  security index object%0
//
#define OFSUINSERT_SECURITYINDX          0x00009C92L

//
// Generic error messages used by OFS Format and/or ChkDsk.
//
//
// MessageId: OFSUMSG_NOMEM
//
// MessageText:
//
//  Insufficient memory.
//
#define OFSUMSG_NOMEM                    0x00009CD7L

//
// MessageId: OFSUMSG_INTERNALERROR
//
// MessageText:
//
//  Internal error.
//
#define OFSUMSG_INTERNALERROR            0x00009CD8L

//
// MessageId: OFSUMSG_CANT_LOCK_DRIVE
//
// MessageText:
//
//  The drive cannot be locked for a single user.
//
#define OFSUMSG_CANT_LOCK_DRIVE          0x00009CD9L

//
// MessageId: OFSUMSG_DRIVETOOLARGE
//
// MessageText:
//
//  The disk is too large for the specified file system.
//
#define OFSUMSG_DRIVETOOLARGE            0x00009CDAL

//
// MessageId: OFSUMSG_DISK_SECTORSIZEBAD
//
// MessageText:
//
//  The disk has an invalid sector size for OFS.
//
#define OFSUMSG_DISK_SECTORSIZEBAD       0x00009CDBL

//
// MessageId: OFSUMSG_NYIERROR
//
// MessageText:
//
//  Critical code not yet implemented! Program could not complete execution.
//
#define OFSUMSG_NYIERROR                 0x00009CDCL

//
// MessageId: OFSUMSG_DISKIOERROR
//
// MessageText:
//
//  A disk I/O error occurred unexpectedly.
//
#define OFSUMSG_DISKIOERROR              0x00009CDDL

//
// MessageId: OFSUMSG_READSECTOR_FAILED
//
// MessageText:
//
//  Error %1 while reading sectors.
//
#define OFSUMSG_READSECTOR_FAILED        0x00009CDEL

//
// MessageId: OFSUMSG_WRITESECTOR_FAILED
//
// MessageText:
//
//  Error %1 while writing sectors.
//
#define OFSUMSG_WRITESECTOR_FAILED       0x00009CDFL

//
// MessageId: OFSUMSG_FLUSHWRITES_FAILED
//
// MessageText:
//
//  Error %1 while flushing data.
//
#define OFSUMSG_FLUSHWRITES_FAILED       0x00009CE0L

//
// Ondisk structure-specific error messages used by OFS Format and/or ChkDsk.
//
//
// MessageId: OFSUMSG_BOOTBLKREPL_BAD
//
// MessageText:
//
//  The boot block replica is bad or not an OFS boot block replica.
//
#define OFSUMSG_BOOTBLKREPL_BAD          0x00009D09L

//
// MessageId: OFSUMSG_BOOTBLKREPL_FIXED
//
// MessageText:
//
//  The boot block replica has been fixed.
//
#define OFSUMSG_BOOTBLKREPL_FIXED        0x00009D0AL

//
// MessageId: OFSUMSG_BOOTBLKREPL_UNREADABLE
//
// MessageText:
//
//  The boot block replica could not be read.
//
#define OFSUMSG_BOOTBLKREPL_UNREADABLE   0x00009D0BL

//
// MessageId: OFSUMSG_BOOTBLKREPL_UNWRITABLE
//
// MessageText:
//
//  The boot block replica could not be written.
//
#define OFSUMSG_BOOTBLKREPL_UNWRITABLE   0x00009D0CL

//
// MessageId: OFSUMSG_BOOTBLK_BAD
//
// MessageText:
//
//  The boot block is bad or not an OFS boot block.
//
#define OFSUMSG_BOOTBLK_BAD              0x00009D0DL

//
// MessageId: OFSUMSG_BOOTBLK_FIXED
//
// MessageText:
//
//  The boot block has been fixed.
//
#define OFSUMSG_BOOTBLK_FIXED            0x00009D0EL

//
// MessageId: OFSUMSG_BOOTBLK_UNREADABLE
//
// MessageText:
//
//  The boot block could not be read.
//
#define OFSUMSG_BOOTBLK_UNREADABLE       0x00009D0FL

//
// MessageId: OFSUMSG_BOOTBLK_UNWRITABLE
//
// MessageText:
//
//  The boot block could not be written.
//
#define OFSUMSG_BOOTBLK_UNWRITABLE       0x00009D10L

//
// MessageId: OFSUMSG_CAT_CRITDATABAD
//
// MessageText:
//
//  Volume catalog critical data is bad.
//
#define OFSUMSG_CAT_CRITDATABAD          0x00009D11L

//
// MessageId: OFSUMSG_CAT_CRITDATAFIXED
//
// MessageText:
//
//  Volume catalog critical data has been fixed.
//
#define OFSUMSG_CAT_CRITDATAFIXED        0x00009D12L

//
// MessageId: OFSUMSG_CAT_CRITDATAMOVEDFIXED
//
// MessageText:
//
//  Volume catalog critical data has been moved.
//
#define OFSUMSG_CAT_CRITDATAMOVEDFIXED   0x00009D13L

//
// MessageId: OFSUMSG_CAT_CRITDATAPARTRECON
//
// MessageText:
//
//  Volume catalog critical data has been partly reconstructed.
//
#define OFSUMSG_CAT_CRITDATAPARTRECON    0x00009D14L

//
// MessageId: OFSUMSG_CAT_CRITDATARECON
//
// MessageText:
//
//  Volume catalog critical data has been reconstructed.
//
#define OFSUMSG_CAT_CRITDATARECON        0x00009D15L

//
// MessageId: OFSUMSG_CAT_CRITDATAREPLBAD
//
// MessageText:
//
//  The volume catalog critical data replica is bad.
//
#define OFSUMSG_CAT_CRITDATAREPLBAD      0x00009D16L

//
// MessageId: OFSUMSG_CAT_CRITDATAREPLFIXED
//
// MessageText:
//
//  The volume catalog critical data replica has been fixed.
//
#define OFSUMSG_CAT_CRITDATAREPLFIXED    0x00009D17L

//
// MessageId: OFSUMSG_CAT_CRITDATAREPLMOVEDFIXED
//
// MessageText:
//
//  Volume catalog critical data replica has been moved.
//
#define OFSUMSG_CAT_CRITDATAREPLMOVEDFIXED 0x00009D18L

//
// MessageId: OFSUMSG_CAT_CRITDATAREPLUNREADABLE
//
// MessageText:
//
//  The volume catalog critical data replica could not be read.
//
#define OFSUMSG_CAT_CRITDATAREPLUNREADABLE 0x00009D19L

//
// MessageId: OFSUMSG_CAT_CRITDATAREPLUNWRITABLE
//
// MessageText:
//
//  The volume catalog critical data replica could not be written.
//
#define OFSUMSG_CAT_CRITDATAREPLUNWRITABLE 0x00009D1AL

//
// MessageId: OFSUMSG_CAT_CRITDATAUNREADABLE
//
// MessageText:
//
//  Volume catalog critical data could not be read.
//
#define OFSUMSG_CAT_CRITDATAUNREADABLE   0x00009D1BL

//
// MessageId: OFSUMSG_CAT_CRITDATAUNWRITABLE
//
// MessageText:
//
//  Volume catalog critical data could not be written.
//
#define OFSUMSG_CAT_CRITDATAUNWRITABLE   0x00009D1CL

//
// MessageId: OFSUMSG_CAT_MDATABAD
//
// MessageText:
//
//  File system errors found in the volume catalog.
//
#define OFSUMSG_CAT_MDATABAD             0x00009D1DL

//
// MessageId: OFSUMSG_CAT_MDATAFIXED
//
// MessageText:
//
//  File system errors fixed in the volume catalog.
//
#define OFSUMSG_CAT_MDATAFIXED           0x00009D1EL

//
// MessageId: OFSUMSG_CAT_OBJBADDELETED
//
// MessageText:
//
//  File system errors fixed in the volume catalog with loss of an object.
//
#define OFSUMSG_CAT_OBJBADDELETED        0x00009D1FL

//
// MessageId: OFSUMSG_CAT_OBJSMAYBELOST
//
// MessageText:
//
//  File system errors fixed in the volume catalog with possible loss of objects.
//
#define OFSUMSG_CAT_OBJSMAYBELOST        0x00009D20L

//
// MessageId: OFSUMSG_CAT_SPACEAVAIL
//
// MessageText:
//
//  Space in the volume catalog is allocated for
//  a logically deleted onode or stream.
//
#define OFSUMSG_CAT_SPACEAVAIL           0x00009D21L

//
// MessageId: OFSUMSG_CAT_SPACERECOV
//
// MessageText:
//
//  Space recovered in the volume catalog from
//  a logically deleted onode or stream.
//
#define OFSUMSG_CAT_SPACERECOV           0x00009D22L

//
// MessageId: OFSUMSG_CLUS_LOSTSUMMARY
//
// MessageText:
//
//  %1 lost allocation units were found in %2 runs.
//
#define OFSUMSG_CLUS_LOSTSUMMARY         0x00009D23L

//
// MessageId: OFSUMSG_CLUS_BADCLUSLSTXL
//
// MessageText:
//
//  The cluster at address %1 occurs in the bad cluster list
//  and is crosslinked.
//
#define OFSUMSG_CLUS_BADCLUSLSTXL        0x00009D24L

//
// MessageId: OFSUMSG_CLUS_BOOTBLKXL
//
// MessageText:
//
//  Clusters in the boot block or boot block replica are crosslinked.
//
#define OFSUMSG_CLUS_BOOTBLKXL           0x00009D25L

//
// MessageId: OFSUMSG_CLUS_STRMXL
//
// MessageText:
//
//  The %1 %2 has %3 crosslinked clusters
//  in the %4 cluster extent at address %5.
//
#define OFSUMSG_CLUS_STRMXL              0x00009D26L

//
// MessageId: OFSUMSG_CLUS_XLFIXED
//
// MessageText:
//
//  The crosslink has been fixed.
//
#define OFSUMSG_CLUS_XLFIXED             0x00009D27L

//
// MessageId: OFSUMSG_DIRINFO_BAD
//
// MessageText:
//
//  Directory information errors found in the %1.
//
#define OFSUMSG_DIRINFO_BAD              0x00009D28L

//
// MessageId: OFSUMSG_DIRINFO_CREATED
//
// MessageText:
//
//  Directory information created for the %1.
//
#define OFSUMSG_DIRINFO_CREATED          0x00009D29L

//
// MessageId: OFSUMSG_DIRINFO_DELETED
//
// MessageText:
//
//  Directory information deleted in the %1.
//
#define OFSUMSG_DIRINFO_DELETED          0x00009D2AL

//
// MessageId: OFSUMSG_DIRINFO_DUP
//
// MessageText:
//
//  Duplicate directory entry found for the %1.
//
#define OFSUMSG_DIRINFO_DUP              0x00009D2BL

//
// MessageId: OFSUMSG_DIRINFO_DUPDELETED
//
// MessageText:
//
//  Duplicate directory entry deleted for the %1.
//
#define OFSUMSG_DIRINFO_DUPDELETED       0x00009D2CL

//
// MessageId: OFSUMSG_DIRINFO_FIXED
//
// MessageText:
//
//  Directory information errors fixed for the %1.
//
#define OFSUMSG_DIRINFO_FIXED            0x00009D2DL

//
// MessageId: OFSUMSG_DIRINFO_MISSING
//
// MessageText:
//
//  Directory information not found for the %1.
//
#define OFSUMSG_DIRINFO_MISSING          0x00009D2EL

//
// MessageId: OFSUMSG_FREECLUSINFO_BAD
//
// MessageText:
//
//  Volume free cluster information is in error.
//
#define OFSUMSG_FREECLUSINFO_BAD         0x00009D2FL

//
// MessageId: OFSUMSG_FREECLUSINFO_FIXED
//
// MessageText:
//
//  Volume free cluster information has been fixed.
//
#define OFSUMSG_FREECLUSINFO_FIXED       0x00009D30L

//
// MessageId: OFSUMSG_INDXKEY_DUP
//
// MessageText:
//
//  Duplicate keys found in the %1 index.
//
#define OFSUMSG_INDXKEY_DUP              0x00009D31L

//
// MessageId: OFSUMSG_INDXKEY_DUPDELETED
//
// MessageText:
//
//  Duplicate keys deleted in the %1 index.
//
#define OFSUMSG_INDXKEY_DUPDELETED       0x00009D32L

//
// MessageId: OFSUMSG_INDXKEY_ORGBAD
//
// MessageText:
//
//  The ordering of keys in the %1 index is incorrect.
//
#define OFSUMSG_INDXKEY_ORGBAD           0x00009D33L

//
// MessageId: OFSUMSG_INDXKEY_REORG
//
// MessageText:
//
//  The ordering of keys in the %1 index has been fixed.
//
#define OFSUMSG_INDXKEY_REORG            0x00009D34L

//
// MessageId: OFSUMSG_INDXNSDOSMAPPEDKEY_BAD
//
// MessageText:
//
//  The mapped DOS directory name is in error for the %1.
//
#define OFSUMSG_INDXNSDOSMAPPEDKEY_BAD   0x00009D35L

//
// MessageId: OFSUMSG_INDXNSDOSMAPPEDKEY_FIXED
//
// MessageText:
//
//  The mapped DOS directory name has been fixed for the %1.
//
#define OFSUMSG_INDXNSDOSMAPPEDKEY_FIXED 0x00009D36L

//
// MessageId: OFSUMSG_INDXNSKEY_BAD
//
// MessageText:
//
//  The directory name is in error for the %1.
//
#define OFSUMSG_INDXNSKEY_BAD            0x00009D37L

//
// MessageId: OFSUMSG_INDXNSKEY_FIXED
//
// MessageText:
//
//  The directory name has been fixed for the %1.
//
#define OFSUMSG_INDXNSKEY_FIXED          0x00009D38L

//
// MessageId: OFSUMSG_INDXROOTSTRM_CREATED
//
// MessageText:
//
//  The index root page has been recreated for the %1.
//
#define OFSUMSG_INDXROOTSTRM_CREATED     0x00009D39L

//
// MessageId: OFSUMSG_INDXROOTSTRM_MISSING
//
// MessageText:
//
//  The index is missing its root page in the %1.
//
#define OFSUMSG_INDXROOTSTRM_MISSING     0x00009D3AL

//
// MessageId: OFSUMSG_INDX_MDATABAD
//
// MessageText:
//
//  File system errors found in the %1 index.
//
#define OFSUMSG_INDX_MDATABAD            0x00009D3BL

//
// MessageId: OFSUMSG_INDX_MDATAFIXED
//
// MessageText:
//
//  File system errors fixed in the %1 index.
//
#define OFSUMSG_INDX_MDATAFIXED          0x00009D3CL

//
// MessageId: OFSUMSG_INDX_REBUILT
//
// MessageText:
//
//  The %1 index has been rebuilt.
//
#define OFSUMSG_INDX_REBUILT             0x00009D3DL

//
// MessageId: OFSUMSG_MAPPEDDIRINFO_MISSING
//
// MessageText:
//
//  A mapped DOS directory name was not found for the %1.
//
#define OFSUMSG_MAPPEDDIRINFO_MISSING    0x00009D3EL

//
// MessageId: OFSUMSG_NSINDX_CREATED
//
// MessageText:
//
//  The index for the %1 has been recreated.
//
#define OFSUMSG_NSINDX_CREATED           0x00009D3FL

//
// MessageId: OFSUMSG_NSINDX_MISSING
//
// MessageText:
//
//  The index for the %1 is missing.
//
#define OFSUMSG_NSINDX_MISSING           0x00009D40L

//
// MessageId: OFSUMSG_OBJ_ADOPTED
//
// MessageText:
//
//  The orphan has been recovered and is now the %1.
//
#define OFSUMSG_OBJ_ADOPTED              0x00009D41L

//MessageId=40258 is available.
//
// MessageId: OFSUMSG_OBJ_IDDUP
//
// MessageText:
//
//  The id for the %1 is not unique.
//
#define OFSUMSG_OBJ_IDDUP                0x00009D43L

//
// MessageId: OFSUMSG_OBJ_IDREASSIGNED
//
// MessageText:
//
//  The %1 has been assigned a new id.
//
#define OFSUMSG_OBJ_IDREASSIGNED         0x00009D44L

//
// MessageId: OFSUMSG_OBJ_MDATABAD
//
// MessageText:
//
//  File system errors found for the %1.
//
#define OFSUMSG_OBJ_MDATABAD             0x00009D45L

//
// MessageId: OFSUMSG_OBJ_NAMEBAD
//
// MessageText:
//
//  The object name %1 is not valid.
//
#define OFSUMSG_OBJ_NAMEBAD              0x00009D46L

//
// MessageId: OFSUMSG_OBJ_NAMECREATED
//
// MessageText:
//
//  A new name of %1 was assigned to the unnamed object.
//
#define OFSUMSG_OBJ_NAMECREATED          0x00009D47L

//
// MessageId: OFSUMSG_OBJ_NAMEMDATABAD
//
// MessageText:
//
//  File system name information for the %1 is incorrect.
//
#define OFSUMSG_OBJ_NAMEMDATABAD         0x00009D48L

//
// MessageId: OFSUMSG_OBJ_NAMEMDATAFIXED
//
// MessageText:
//
//  File system name information for the %1 has been fixed.
//
#define OFSUMSG_OBJ_NAMEMDATAFIXED       0x00009D49L

//
// MessageId: OFSUMSG_OBJ_NAMEMISSING
//
// MessageText:
//
//  The name for the %1 is missing.
//
#define OFSUMSG_OBJ_NAMEMISSING          0x00009D4AL

//
// MessageId: OFSUMSG_OBJ_ORPHANED
//
// MessageText:
//
//  The %1 has been orphaned
//  (ie., its container or container information is bad or missing).
//
#define OFSUMSG_OBJ_ORPHANED             0x00009D4BL

//
// MessageId: OFSUMSG_OBJ_RENAMED
//
// MessageText:
//
//  A new object name of %1 was assigned
//  to replace the invalid name %1.
//
#define OFSUMSG_OBJ_RENAMED              0x00009D4CL

//
// MessageId: OFSUMSG_OBJ_STRMSMAYBELOST
//
// MessageText:
//
//  File system errors fixed in the %1, with possible loss of streams.
//
#define OFSUMSG_OBJ_STRMSMAYBELOST       0x00009D4DL

//
// MessageId: OFSUMSG_OBJ_TYPEUNKNOWN
//
// MessageText:
//
//  The type of the %1 could not be determined.
//  (ie., it is not a data, index, summary catalog,
//  content index, or system object).
//
#define OFSUMSG_OBJ_TYPEUNKNOWN          0x00009D4EL

//
// MessageId: OFSUMSG_OBJ_WIDMAPENTRYBAD
//
// MessageText:
//
//  The object id mapping array entry for the %1 is bad.
//
#define OFSUMSG_OBJ_WIDMAPENTRYBAD       0x00009D4FL

//
// MessageId: OFSUMSG_OBJ_WIDMAPENTRYFIXED
//
// MessageText:
//
//  The object id mapping array entry for the %1 has been fixed.
//
#define OFSUMSG_OBJ_WIDMAPENTRYFIXED     0x00009D50L

//
// MessageId: OFSUMSG_PARTITIONTABLE_READERROR
//
// MessageText:
//
//  Error reading partition table.
//
#define OFSUMSG_PARTITIONTABLE_READERROR 0x00009D51L

//
// MessageId: OFSUMSG_PARTITIONTABLE_WRITEERROR
//
// MessageText:
//
//  Error writing partition table.
//
#define OFSUMSG_PARTITIONTABLE_WRITEERROR 0x00009D52L

//
// MessageId: OFSUMSG_STRM_BADDELETED
//
// MessageText:
//
//  File system errors fixed by deleting the %1 %2.
//
#define OFSUMSG_STRM_BADDELETED          0x00009D53L

//
// MessageId: OFSUMSG_STRM_DATALOST
//
// MessageText:
//
//  File system errors fixed in the %1 %2 with loss of data.
//
#define OFSUMSG_STRM_DATALOST            0x00009D54L

//
// MessageId: OFSUMSG_STRM_DATAUNREADABLE
//
// MessageText:
//
//  Data clusters for the %1 %2 could not be read.
//
#define OFSUMSG_STRM_DATAUNREADABLE      0x00009D55L

//
// MessageId: OFSUMSG_STRM_MDATABAD
//
// MessageText:
//
//  File system errors found in the %1 %2.
//
#define OFSUMSG_STRM_MDATABAD            0x00009D56L

//
// MessageId: OFSUMSG_STRM_MDATAFIXED
//
// MessageText:
//
//  File system errors fixed in the %1 %2.
//
#define OFSUMSG_STRM_MDATAFIXED          0x00009D57L

//
// MessageId: OFSUMSG_STRM_MDATAUNREADABLE
//
// MessageText:
//
//  File system information for the %1 %2 could not be read.
//
#define OFSUMSG_STRM_MDATAUNREADABLE     0x00009D58L

//
// MessageId: OFSUMSG_SYSINDXSTRM_CREATED
//
// MessageText:
//
//  The %1 %2 has been recreated.
//
#define OFSUMSG_SYSINDXSTRM_CREATED      0x00009D59L

//
// MessageId: OFSUMSG_SYSINDXSTRM_MISSING
//
// MessageText:
//
//  The %1 %2 is missing.
//
#define OFSUMSG_SYSINDXSTRM_MISSING      0x00009D5AL

//
// MessageId: OFSUMSG_SYSINDX_CREATED
//
// MessageText:
//
//  The %1 has been recreated.
//
#define OFSUMSG_SYSINDX_CREATED          0x00009D5BL

//
// MessageId: OFSUMSG_SYSINDX_MISSING
//
// MessageText:
//
//  The %1 is missing.
//
#define OFSUMSG_SYSINDX_MISSING          0x00009D5CL

//
// MessageId: OFSUMSG_SYSSTRM_BAD
//
// MessageText:
//
//  The %1 %2 is corrupt.
//
#define OFSUMSG_SYSSTRM_BAD              0x00009D5DL

//
// MessageId: OFSUMSG_SYSSTRM_CREATED
//
// MessageText:
//
//  The %1 %2 has been recreated.
//
#define OFSUMSG_SYSSTRM_CREATED          0x00009D5EL

//
// MessageId: OFSUMSG_SYSSTRM_LENBAD
//
// MessageText:
//
//  The %1 %2 length is incorrect.
//
#define OFSUMSG_SYSSTRM_LENBAD           0x00009D5FL

//
// MessageId: OFSUMSG_SYSSTRM_LENFIXED
//
// MessageText:
//
//  The %1 %2 length has been corrected.
//
#define OFSUMSG_SYSSTRM_LENFIXED         0x00009D60L

//
// MessageId: OFSUMSG_SYSSTRM_MISSING
//
// MessageText:
//
//  The %1 %2 is missing.
//
#define OFSUMSG_SYSSTRM_MISSING          0x00009D61L

//
// MessageId: OFSUMSG_SYSSTRM_REBUILT
//
// MessageText:
//
//  The %1 %2 has been rebuilt.
//
#define OFSUMSG_SYSSTRM_REBUILT          0x00009D62L

//
// MessageId: OFSUMSG_VOLLABEL_BAD
//
// MessageText:
//
//  The volume label contains invalid characters.
//
#define OFSUMSG_VOLLABEL_BAD             0x00009D63L

//
// MessageId: OFSUMSG_VOLLABEL_DELETED
//
// MessageText:
//
//  The invalid volume label has been deleted.
//
#define OFSUMSG_VOLLABEL_DELETED         0x00009D64L

//
// MessageId: OFSUMSG_VOLLABEL_LENBAD
//
// MessageText:
//
//  The volume label length is invalid.
//
#define OFSUMSG_VOLLABEL_LENBAD          0x00009D65L

//
// MessageId: OFSUMSG_VOLLABEL_LENFIXED
//
// MessageText:
//
//  The volume label length has been fixed.
//
#define OFSUMSG_VOLLABEL_LENFIXED        0x00009D66L

//
// MessageId: OFSUMSG_VOL_NOTOFS
//
// MessageText:
//
//  The disk is not an OFS volume.
//
#define OFSUMSG_VOL_NOTOFS               0x00009D67L

//
// MessageId: OFSUMSG_VOL_UNRECOV
//
// MessageText:
//
//  The volume catalog is completely unusable.
//  The volume cannot be further analyzed or recovered.
//
#define OFSUMSG_VOL_UNRECOV              0x00009D68L

//
// MessageId: OFSUMSG_VOL_VERSIONINCOMPAT
//
// MessageText:
//
//  The volume version does not match the uofs.dll version,
//  or could not be determined.
//
#define OFSUMSG_VOL_VERSIONINCOMPAT      0x00009D69L

//
// MessageId: OFSUMSG_VOL_CHKFIXSUMMARY
//
// MessageText:
//
//  
//  A total of %1 errors were found and fixed in the volume.
//
#define OFSUMSG_VOL_CHKFIXSUMMARY        0x00009D6AL

//
// MessageId: OFSUMSG_VOL_CHKSUMMARY
//
// MessageText:
//
//  
//  A total of %1 errors were found in the volume.
//
#define OFSUMSG_VOL_CHKSUMMARY           0x00009D6BL

//
// The Range Of Values 42001-44000 reserved for SrikantS
//
//
// Normal output messages used by common utilities code.
// Range Of Values is 42001-42400
//
//
// MessageId: OFSUMSG_INVALID_DRIVE
//
// MessageText:
//
//  The operation cannot be performed on the drive.
//
#define OFSUMSG_INVALID_DRIVE            0x0000A411L

//
// MessageId: OFSUMSG_INVALID_PARTTABLE
//
// MessageText:
//
//  Inconsistent partition table.
//
#define OFSUMSG_INVALID_PARTTABLE        0x0000A412L

//
// MessageId: OFSUMSG_DASD_NOT_OPENED
//
// MessageText:
//
//  Drive not opened.
//
#define OFSUMSG_DASD_NOT_OPENED          0x0000A415L

//
// MessageId: OFSUMSG_CANT_READ_DASD
//
// MessageText:
//
//  Cannot read the drive.
//
#define OFSUMSG_CANT_READ_DASD           0x0000A416L

//
// MessageId: OFSUMSG_CANT_WRITE_DASD
//
// MessageText:
//
//  Cannot write the drive.
//
#define OFSUMSG_CANT_WRITE_DASD          0x0000A417L

//
// MessageId: OFSUMSG_FATINIT_FAILED
//
// MessageText:
//
//  Failed to initialize the FAT table.
//
#define OFSUMSG_FATINIT_FAILED           0x0000A418L

//
// MessageId: OFSUMSG_FATSAINIT_FAILED
//
// MessageText:
//
//  Failed to initialize FAT SuperArea.
//
#define OFSUMSG_FATSAINIT_FAILED         0x0000A419L

//
// MessageId: OFSUMSG_ROOTDIR_CANTREAD
//
// MessageText:
//
//  Cannot read FAT Root Directory.
//
#define OFSUMSG_ROOTDIR_CANTREAD         0x0000A41AL

//
// MessageId: OFSUMSG_ROOTDIR_CANTWRITE
//
// MessageText:
//
//  Cannot write FAT Root Directory.
//
#define OFSUMSG_ROOTDIR_CANTWRITE        0x0000A41BL

//
// MessageId: OFSUMSG_ROOTDIR_CANTFLUSH
//
// MessageText:
//
//  Cannot flush FAT Root Directory.
//
#define OFSUMSG_ROOTDIR_CANTFLUSH        0x0000A41CL

//
// MessageId: OFSUMSG_COMPACT_FAT
//
// MessageText:
//
//  Compacting FAT data.
//
#define OFSUMSG_COMPACT_FAT              0x0000A41DL

//
// MessageId: OFSUMSG_COMPACT_PERCENTCOMPLETE
//
// MessageText:
//
//  %1 percent completed.                  %r%0
//
#define OFSUMSG_COMPACT_PERCENTCOMPLETE  0x0000A41EL

//
// MessageId: OFSUMSG_COMPACT_COMPLETE
//
// MessageText:
//
//  Compacting FAT Completed.                        %b
//
#define OFSUMSG_COMPACT_COMPLETE         0x0000A41FL

//
// MessageId: OFSUMSG_COMPACT_FAILURE
//
// MessageText:
//
//  Compacting FAT Failed.                          %b
//
#define OFSUMSG_COMPACT_FAILURE          0x0000A420L

//
// MessageId: OFSUMSG_NOT_FIXEDMEDIA
//
// MessageText:
//
//  Drive is not a FIXED drive.
//
#define OFSUMSG_NOT_FIXEDMEDIA           0x0000A421L

//
// MessageId: OFSUMSG_CANT_READSA
//
// MessageText:
//
//  Cannot read the drive superarea.
//
#define OFSUMSG_CANT_READSA              0x0000A422L

//
// MessageId: OFSUMSG_BAD_VOLSTATE
//
// MessageText:
//
//  The drive is in an inconsistent state.
//
#define OFSUMSG_BAD_VOLSTATE             0x0000A423L

//
// MessageId: OFSUMSG_CANT_READFAT
//
// MessageText:
//
//  FAT table cannot be read.
//
#define OFSUMSG_CANT_READFAT             0x0000A424L

//
// MessageId: OFSUMSG_WIDESTR_NEWLINE
//
// MessageText:
//
//  %1
//
#define OFSUMSG_WIDESTR_NEWLINE          0x0000A425L

//
// MessageId: OFSUMSG_USAGE_ERROR
//
// MessageText:
//
//  ** Usage Error **
//
#define OFSUMSG_USAGE_ERROR              0x0000A426L

//
// MessageId: OFSUMSG_NOT_IMPLEMENTED
//
// MessageText:
//
//  Feature Not Yet Implemented.
//
#define OFSUMSG_NOT_IMPLEMENTED          0x0000A427L

//
// MessageId: OFSUMSG_NO_BACKUPFAT
//
// MessageText:
//
//  There is no Backup FAT table.
//  There will be no fault-tolerance.
//  Proceed Ahead (Y/N) ? %0
//
#define OFSUMSG_NO_BACKUPFAT             0x0000A428L

//
// MessageId: OFSUMSG_USING_BACKUPFAT
//
// MessageText:
//
//  The First FAT could not be synced with Second FAT.
//  We can use the Second FAT but there will be no fault-tolerance.
//  Proceed Ahead (Y/N) ? %0
//
#define OFSUMSG_USING_BACKUPFAT          0x0000A429L

//
// MessageId: OFSUMSG_CORRUPT_FAT_VOLUME
//
// MessageText:
//
//  FAT data structures are inconsistent.
//  Please run chkdsk /f on the volume.
//
#define OFSUMSG_CORRUPT_FAT_VOLUME       0x0000A42AL

//
// Normal output messages used by repart specific code.
// Range is 42401-42550
//
//
// MessageId: REPART_MSG_FAILURE4
//
// MessageText:
//
//  There is an inconsistency in the Logical Volume Partition Layout.
//  Fix the problem (Y/N)? %0
//
#define REPART_MSG_FAILURE4              0x0000A5A1L

//
// MessageId: REPART_MSG_FAILURE4_FIXED
//
// MessageText:
//
//  An inconsistency in the Logical Volume Partition Layout has been fixed.
//  REBOOT AND RERUN THE UTILITY.
//
#define REPART_MSG_FAILURE4_FIXED        0x0000A5A2L

//
// MessageId: REPART_MSG_FAILURE3
//
// MessageText:
//
//  The Partition Table and Boot Sector are inconsistent.
//  Fix the problem (Y/N)? %0
//
#define REPART_MSG_FAILURE3              0x0000A5A3L

//
// MessageId: REPART_MSG_FAILURE3_FIXED
//
// MessageText:
//
//  An inconsistency between Partition Table and Boot Sector has been fixed.
//
#define REPART_MSG_FAILURE3_FIXED        0x0000A5A4L

//
// MessageId: REPART_MSG_FAILURE2
//
// MessageText:
//
//  BootSect.Dos is out of sync with Partition Table and BootSector.
//  Fix the problem (Y/N)? %0
//
#define REPART_MSG_FAILURE2              0x0000A5A5L

//
// MessageId: REPART_MSG_FAILURE2_FIXED
//
// MessageText:
//
//  An inconsistency between BootSect.Dos and BootSector has been fixed.
//
#define REPART_MSG_FAILURE2_FIXED        0x0000A5A6L

//
// MessageId: REPART_MSG_FAILURE1
//
// MessageText:
//
//  There was a failure while updating the BootSect.Dos file.
//  Fix the problem (Y/N)? %0
//
#define REPART_MSG_FAILURE1              0x0000A5A7L

//
// MessageId: REPART_MSG_FAILURE1_FIXED
//
// MessageText:
//
//  An inconsistency of BootSect.Dos file has been fixed
//
#define REPART_MSG_FAILURE1_FIXED        0x0000A5A8L

//
// MessageId: REPART_MSG_PREV_FAILURES
//
// MessageText:
//
//  There was some failure during the prior run of repart on the drive.
//  Fix the problem (Y/N)? %0
//
#define REPART_MSG_PREV_FAILURES         0x0000A5A9L

//
// MessageId: REPART_MSG_INSUFF_FREE_SPACE
//
// MessageText:
//
//  There is insufficient space to free up.
//
#define REPART_MSG_INSUFF_FREE_SPACE     0x0000A5AAL

//
// MessageId: REPART_MSG_BTSDOS_ACCESS_DENIED
//
// MessageText:
//
//  Access denied on the \BOOTSECT.DOS file.
//
#define REPART_MSG_BTSDOS_ACCESS_DENIED  0x0000A5ABL

//
// MessageId: REPART_MSG_OPEN_BTSDOS
//
// MessageText:
//
//  Cannot open the \BOOTSECT.DOS file.
//
#define REPART_MSG_OPEN_BTSDOS           0x0000A5ACL

//
// MessageId: REPART_MSG_READ_BTSDOS
//
// MessageText:
//
//  Cannot read the \BOOTSECT.DOS file.
//
#define REPART_MSG_READ_BTSDOS           0x0000A5ADL

//
// MessageId: REPART_MSG_WRITE_BTSDOS
//
// MessageText:
//
//  Cannot write the \BOOTSECT.DOS file.
//
#define REPART_MSG_WRITE_BTSDOS          0x0000A5AEL

//
// MessageId: REPART_MSG_RCOV_CANT_WRITE
//
// MessageText:
//
//  Cannot write repart-undo information.
//
#define REPART_MSG_RCOV_CANT_WRITE       0x0000A5AFL

//
// MessageId: REPART_MSG_RCOV_CANT_READ
//
// MessageText:
//
//  Cannot read repart-undo information.
//
#define REPART_MSG_RCOV_CANT_READ        0x0000A5B0L

//
// MessageId: REPART_MSG_RCOV_CANT_OPEN
//
// MessageText:
//
//  Cannot open the repart-undo file.
//
#define REPART_MSG_RCOV_CANT_OPEN        0x0000A5B1L

//
// MessageId: REPART_MSG_RCOV_CANT_CREATE
//
// MessageText:
//
//  Cannot create the repart-undo file.
//
#define REPART_MSG_RCOV_CANT_CREATE      0x0000A5B2L

//
// MessageId: REPART_MSG_RCOV_BAD_DATA
//
// MessageText:
//
//  Invalid repart-undo data.
//
#define REPART_MSG_RCOV_BAD_DATA         0x0000A5B3L

//
// MessageId: REPART_MSG_BTSECT_OLD
//
// MessageText:
//
//  There is a \BOOTSECT.OLD file on the drive.
//  Rename \BOOTSECT.OLD to \BOOTSECT.DOS and rerun repart.
//
#define REPART_MSG_BTSECT_OLD            0x0000A5B4L

//
// MessageId: REPART_MSG_ENLARGE_ERROR
//
// MessageText:
//
//  The Partition could not be enlarged.
//
#define REPART_MSG_ENLARGE_ERROR         0x0000A5B5L

//
// MessageId: REPART_MSG_SHRINK_ERROR
//
// MessageText:
//
//  The Partition could not be shrunk.
//
#define REPART_MSG_SHRINK_ERROR          0x0000A5B6L

//
// MessageId: REPART_MORE_ERROR_GENERAL
//
// MessageText:
//
//  Unknown Error %1 occurred
//
#define REPART_MORE_ERROR_GENERAL        0x0000A5B7L

//
// MessageId: REPART_MSG_CANNOT_CONTINUE
//
// MessageText:
//
//  System is inconsistent. Cannot continue
//
#define REPART_MSG_CANNOT_CONTINUE       0x0000A5B8L

//
// MessageId: REPART_MSG_NOT_FAT
//
// MessageText:
//
//  The specified drive is NOT a FAT drive.
//
#define REPART_MSG_NOT_FAT               0x0000A5B9L

//
// MessageId: REPART_MSG_PART_TABLE_CHANGED
//
// MessageText:
//
//  The Partition Layout Has Been Changed After Repart Was Run.
//  CANNOT UNDO
//
#define REPART_MSG_PART_TABLE_CHANGED    0x0000A5BAL

//
// MessageId: REPART_MSG_INVALID_PART_TABLE
//
// MessageText:
//
//  The Partition Table is Invalid.
//  HINT: REBOOTING may fix the problem.
//
#define REPART_MSG_INVALID_PART_TABLE    0x0000A5BBL

//
// MessageId: REPART_MSG_INCONSISTENT_DRV_LAYOUT
//
// MessageText:
//
//  The partition layout on the drive is inconsistent.
//  REPART CANNOT PROCEED AHEAD.
//
#define REPART_MSG_INCONSISTENT_DRV_LAYOUT 0x0000A5BCL

//
// MessageId: REPART_MSG_INVALID_SUPERAREA
//
// MessageText:
//
//  BootSector is inconsistent.
//
#define REPART_MSG_INVALID_SUPERAREA     0x0000A5BDL

//
// MessageId: REPART_MSG_INVALID_DOSBOOTSECT
//
// MessageText:
//
//  \BootSect.DOS file is inconsistent.
//
#define REPART_MSG_INVALID_DOSBOOTSECT   0x0000A5BEL

//
// MessageId: REPART_MSG_NON_LOCAL_DISK
//
// MessageText:
//
//  Cannot repartition a NON-LOCAL disk.
//
#define REPART_MSG_NON_LOCAL_DISK        0x0000A5BFL

//
// MessageId: REPART_MSG_KBS_CURRPART
//
// MessageText:
//
//  Kilo Bytes For Current Partition    :%1
//
#define REPART_MSG_KBS_CURRPART          0x0000A5C0L

//
// MessageId: REPART_MSG_KBS_NEWPART
//
// MessageText:
//
//  Kilo Bytes For New Partition        :%1
//
#define REPART_MSG_KBS_NEWPART           0x0000A5C1L

//
// MessageId: REPART_MSG_SUCCESSFUL
//
// MessageText:
//
//  Successfully Repartitioned Drive %1
//
#define REPART_MSG_SUCCESSFUL            0x0000A5C2L

//
// MessageId: REPART_MSG_INFORMATION
//
// MessageText:
//
//  
//  
//  REPARTITION INFORMATION
//  -----------------------
//  
//  Total KILOBYTES Before Shrinking                   :%1
//  KILOBYTES in Current Partition After Shrinking     :%2
//  KILOBYTES of Slack Left In Current Partition       :%3
//  KILOBYTES of Space FREED Up                        :%4
//  
//
#define REPART_MSG_INFORMATION           0x0000A5C3L

//
// MessageId: REPART_SHRINK_USAGE_INFO1
//
// MessageText:
//
//  
//  ***** Note that all numbers specified here are in KILO bytes *****
//  
//  To Get INFORMATION On Drive Status
//  ----------------------------------
//  REPART <DriveName>: /S /I
//  REPART <DriveName>: /S /F:<KILOBytes to FREE>  /I
//  REPART <DriveName>: /S /L:<KILOBytes of SLACK> /I
//
#define REPART_SHRINK_USAGE_INFO1        0x0000A5C4L

//
// MessageId: REPART_SHRINK_USAGE_INFO2
//
// MessageText:
//
//  
//  
//  To SHRINK a Partition
//  ---------------------
//  REPART <DriveName>: /S /F:<KILOBytes to FREE>
//  REPART <DriveName>: /S /L:<KILOBytes of SLACK>
//  
//  A minimum of %1 KBs ( %2 MBs ) is recommended as SLACK/FREE value.
//  
//  To UNDO Repart
//  --------------------
//  REPART <DriveToUndo>: /R
//  
//
#define REPART_SHRINK_USAGE_INFO2        0x0000A5C5L

//
// MessageId: REPART_EXTEND_USAGE_INFO
//
// MessageText:
//
//  
//  To EXTEND a Partition
//  ---------------------
//  REPART <DriveName>: /X
//  
//
#define REPART_EXTEND_USAGE_INFO         0x0000A5C8L

//
// MessageId: REPART_MSG_RECOVERY_NOT_NEEDED
//
// MessageText:
//
//  There is nothing to undo
//
#define REPART_MSG_RECOVERY_NOT_NEEDED   0x0000A5C9L

//
// MessageId: REPART_MSG_RECOVERY_SUCCEEDED
//
// MessageText:
//
//  
//  Repart Undo Succeeded
//  
//
#define REPART_MSG_RECOVERY_SUCCEEDED    0x0000A5CAL

//
// MessageId: REPART_MSG_RECOVERY_FAILURE
//
// MessageText:
//
//  
//  Repart Undo Failed
//
#define REPART_MSG_RECOVERY_FAILURE      0x0000A5CBL

//
// MessageId: REPART_MSG_RECOVERY_PARTIAL
//
// MessageText:
//
//  
//  Repart Undo Partially Completed. There is one more step.
//  Please REBOOT and run REPART undo again.
//  
//
#define REPART_MSG_RECOVERY_PARTIAL      0x0000A5CCL

//
// MessageId: REPART_MSG_RCOV_FATSA_CANTREAD
//
// MessageText:
//
//  
//  Cannot read the BootSector. Repart Undo cannot proceed ahead.
//
#define REPART_MSG_RCOV_FATSA_CANTREAD   0x0000A5CDL

//
// MessageId: REPART_MSG_BTSDOS_CANTCREATE
//
// MessageText:
//
//  
//  Cannot create the \BOOTSECT.DOS file.
//
#define REPART_MSG_BTSDOS_CANTCREATE     0x0000A5CEL

//
// MessageId: REPART_MSG_BTSDOS_BACKUP_CANTOPEN
//
// MessageText:
//
//  
//  Cannot open the backup \BOOTSECT.LOG file also.
//
#define REPART_MSG_BTSDOS_BACKUP_CANTOPEN 0x0000A5CFL

//
// MessageId: REPART_MSG_NO_FAULTTOLERANCE
//
// MessageText:
//
//  
//  Cannot write backup data for \BOOTSECT.DOS. There will be
//  no protection against failures.
//  Proceed Ahead (Y/N) ? %0
//
#define REPART_MSG_NO_FAULTTOLERANCE     0x0000A5D0L

//
// MessageId: REPART_MSG_BTSDOS_BOTH_INVALID
//
// MessageText:
//
//  
//  Both the primary and backup copies of \BOOTSECT.DOS are invalid.
//
#define REPART_MSG_BTSDOS_BOTH_INVALID   0x0000A5D1L

//
// MessageId: REPART_MSG_FAILURE
//
// MessageText:
//
//  
//  Repart failed due to error 0x%1
//
#define REPART_MSG_FAILURE               0x0000A5D2L

//
// MessageId: REPART_MSG_WARN_SLACK
//
// MessageText:
//
//  
//  WARNING
//  -------
//  You have specified a slack of %1 KBs.
//  A minimum of %2 KBs is recommended.
//  Do you still want to proceed ahead (Y/N) ? %0
//
#define REPART_MSG_WARN_SLACK            0x0000A5D3L

//
// MessageId: REPART_MSG_WARN_FREESPACE
//
// MessageText:
//
//  
//  WARNING
//  -------
//  You have requested that %1 KBs be freed up.
//  A minimum of %2 KBs is recommended.
//  Do you still want to proceed ahead (Y/N) ? %0
//
#define REPART_MSG_WARN_FREESPACE        0x0000A5D4L

//
// MessageId: REPART_MSG_UNDOINFO_OLD_VERSION
//
// MessageText:
//
//  The data format in the undo file is from an older version.
//
#define REPART_MSG_UNDOINFO_OLD_VERSION  0x0000A5D5L

//
// MessageId: REPART_MSG_WARN_NOLOCK
//
// MessageText:
//
//  If you proceed, the system will be shutdown and restarted after REPART.
//  Do you want to proceed ahead (Y/N) ? %0
//
#define REPART_MSG_WARN_NOLOCK           0x0000A5D6L

//
// MessageId: REPART_MSG_ON_REBOOT_PROMPT
//
// MessageText:
//
//  REPART cannot run because the volume is in use by another
//  process.  Would you like to schedule REPART to be run
//  the next time the system restarts? (Y/N) %0
//
#define REPART_MSG_ON_REBOOT_PROMPT      0x0000A5D7L

//
// MessageId: REPART_MSG_CANNOT_SCHEDULE
//
// MessageText:
//
//  
//  REPART could not scheduled to run on this volume the next time
//  the system boots.
//
#define REPART_MSG_CANNOT_SCHEDULE       0x0000A5D8L

//
// MessageId: REPART_MSG_SCHEDULED
//
// MessageText:
//
//  
//  REPART has been scheduled to run on this volume the next time
//  the system boots.
//
#define REPART_MSG_SCHEDULED             0x0000A5D9L

//
// MessageId: REPART_MSG_AUTORPRT_PRESENT
//
// MessageText:
//
//  
//  ******* Please confirm that AUTORPRT.EXE and AUTOULIB.DLL are ******
//  ******* in your system32 directory.                           ******
//
#define REPART_MSG_AUTORPRT_PRESENT      0x0000A5DAL

//
// MessageId: REPART_MSG_AUTORPRT_RCOV_SAME
//
// MessageText:
//
//  
//  REPART cannot run now because the volume is in use by another
//  process. For AUTORPRT to be scheduled, the recovery drive and
//  repart drive must be same. You have specified a recovery drive
//  which is not same as the repart drive. Please rerun REPART without
//  specifying the recovery drive explicitly.
//
#define REPART_MSG_AUTORPRT_RCOV_SAME    0x0000A5DBL

//
// BUGBUG - this is a temporary feature to allow existing
// CAIRO users to use their old undo files. Shipped versions
// will not allow the recovery data on another disk.
//
//
// MessageId: REPART_MSG_AUTORCOV_NOT_SAME
//
// MessageText:
//
//  
//  REPART cannot undo now because the volume is in use by another
//  process. For AUTORPRT undo to work, "EMR  GNC. DT" file MUST be on
//  the same volume as the one being undone. Please copy the
//  "EMR  GNC. DT" file from %1 to %2 and run
//  REPART %2 /r
//
#define REPART_MSG_AUTORCOV_NOT_SAME     0x0000A5DCL

//
// MessageId: REPART_MSG_AUTORPRT_COMMAND
//
// MessageText:
//
//  
//  Doing AUTORPRT %1
//
#define REPART_MSG_AUTORPRT_COMMAND      0x0000A5DDL

//
// Normal output messages used by Compact.
// Range is 42551-43000
//
//
// MessageId: COMPACT_MSG_ON_REBOOT_PROMPT
//
// MessageText:
//
//  COMPACT cannot run because the volume is in use by another
//  process.  Would you like to schedule COMPACT to be run
//  the next time the system restarts? (Y/N) %0
//
#define COMPACT_MSG_ON_REBOOT_PROMPT     0x0000A637L

//
// MessageId: COMPACT_MSG_CANNOT_SCHEDULE
//
// MessageText:
//
//  
//  COMPACT could not scheduled to run on this volume the next time
//  the system boots.
//
#define COMPACT_MSG_CANNOT_SCHEDULE      0x0000A638L

//
// MessageId: COMPACT_MSG_SCHEDULED
//
// MessageText:
//
//  
//  COMPACT has been scheduled to run on this volume the next time
//  the system boots.
//
#define COMPACT_MSG_SCHEDULED            0x0000A639L

//
// MessageId: COMPACT_MSG_AUTOCMPT_PRESENT
//
// MessageText:
//
//  
//  ******* Please confirm that AUTOCMPT.EXE and AUTOULIB.DLL are ******
//  ******* in your system32 directory.                           ******
//
#define COMPACT_MSG_AUTOCMPT_PRESENT     0x0000A63AL

//
// MessageId: COMPACT_MSG_AUTOCMPT_COMMAND
//
// MessageText:
//
//  
//  Doing AUTOCMPT %1
//
#define COMPACT_MSG_AUTOCMPT_COMMAND     0x0000A63BL

//
// Normal output messages used by Convert.
// Range is 42601-43000
//
//
// MessageId: OFSCONVERT_CANT_CONVERT
//
// MessageText:
//
//  Drive cannot be converted to OFS.
//
#define OFSCONVERT_CANT_CONVERT          0x0000A669L

//
// MessageId: OFSCONVERT_CANT_CREATEOFS
//
// MessageText:
//
//  OFS cannot be created on the drive.
//
#define OFSCONVERT_CANT_CREATEOFS        0x0000A66AL

//
// MessageId: OFSCONVERT_FAILED
//
// MessageText:
//
//  Convert failed.
//
#define OFSCONVERT_FAILED                0x0000A66BL

//
// MessageId: OFSCONVERT_SUCCEEDED
//
// MessageText:
//
//  FAT->OFS Conversion Succeeded.
//
#define OFSCONVERT_SUCCEEDED             0x0000A66CL

//
// MessageId: OFSCONVERT_MINOFSFMT
//
// MessageText:
//
//  Phase1 of FAT->OFS Conversion.
//
#define OFSCONVERT_MINOFSFMT             0x0000A66DL

//
// MessageId: OFSCONVERT_COPYPHASE
//
// MessageText:
//
//  Phase2 of FAT->OFS Conversion.
//  This can take a long time.
//
#define OFSCONVERT_COPYPHASE             0x0000A66EL

//
// MessageId: OFSCONVERT_CREATE_DIRECTORY
//
// MessageText:
//
//  Creating   %1 Directory.
//  
//
#define OFSCONVERT_CREATE_DIRECTORY      0x0000A69AL

//
// MessageId: OFSCONVERT_CONVERTING_FILE
//
// MessageText:
//
//  Converting %1 File To OFS.
//
#define OFSCONVERT_CONVERTING_FILE       0x0000A69BL

//
// MessageId: OFSCONVERT_CONVERTING_DIRECTORY
//
// MessageText:
//
//  Converting %1 Directory.
//
#define OFSCONVERT_CONVERTING_DIRECTORY  0x0000A69CL

//
// MessageId: OFSCONVERT_DIR_FILECOUNT
//
// MessageText:
//
//  Regular File(s) Converted              : %1
//  
//
#define OFSCONVERT_DIR_FILECOUNT         0x0000A69DL

//
// MessageId: OFSCONVERT_TOTAL_FILECOUNT
//
// MessageText:
//
//  Total Regular File(s) Converted        : %1
//  
//
#define OFSCONVERT_TOTAL_FILECOUNT       0x0000A69EL

//
// MessageId: OFSCONVERT_DIR_SYSFILECOUNT
//
// MessageText:
//
//  System/Hidden File(s) Converted        : %1
//
#define OFSCONVERT_DIR_SYSFILECOUNT      0x0000A69FL

//
// MessageId: OFSCONVERT_TOTAL_SYSFILECOUNT
//
// MessageText:
//
//  Total System/Hidden File(s) Converted  : %1
//
#define OFSCONVERT_TOTAL_SYSFILECOUNT    0x0000A6A0L

//
// MessageId: OFSCONVERT_BAD_SECTORS_WRITEFAIL
//
// MessageText:
//
//  There are too many bad sectors.
//  Compaction cannot continue.
//  
//
#define OFSCONVERT_BAD_SECTORS_WRITEFAIL 0x0000A6A1L

//
// MessageId: OFSCONVERT_NO_FREESPACE
//
// MessageText:
//
//  Completely run out of free space while doing the conversion.
//  There seems to be too many bad sectors. Please backup a few
//  files, delete them and re-run the utility. Make sure atleast
//  1MB free space is created by file deletions.
//  
//
#define OFSCONVERT_NO_FREESPACE          0x0000A6A2L

//
// MessageId: OFSCONVERT_FILETIME_NOT_CORRECT
//
// MessageText:
//
//  File Access/Create/Write Time for %1 not set correctly.
//  
//
#define OFSCONVERT_FILETIME_NOT_CORRECT  0x0000A6A3L

//
// MessageId: OFSCONVERT_FILETIMEATTRIB_NOT_CORRECT
//
// MessageText:
//
//  File Access Time and Attributes for %1 not set correctly.
//  
//
#define OFSCONVERT_FILETIMEATTRIB_NOT_CORRECT 0x0000A6A4L

//
// MessageId: OFSCONVERT_FILE_CORRUPT
//
// MessageText:
//
//  Bad sectors hit while reading %1 file. It may be corrupt.
//  
//
#define OFSCONVERT_FILE_CORRUPT          0x0000A6A5L

//
// MessageId: OFSCONVERT_FATVOLFILE_EXISTS
//
// MessageText:
//
//  File "%1" already exists on the drive.
//  Please rename the file to something else and rerun.
//
#define OFSCONVERT_FATVOLFILE_EXISTS     0x0000A6A6L

//
// MessageId: OFSCONVERT_COMMAND_DISPLAY
//
// MessageText:
//
//  Doing OFSCNVT %1
//
#define OFSCONVERT_COMMAND_DISPLAY       0x0000A6A7L

