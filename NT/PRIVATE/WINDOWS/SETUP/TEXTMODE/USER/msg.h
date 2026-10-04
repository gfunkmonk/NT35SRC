/*++

Copyright (c) 1991  Microsoft Corporation

Module Name:

    msg.h

Abstract:

    This file contains the message definitions for the user-mode
    part of text setup.

Author:

    Ted Miller (tedm) 11-Aug-1993

Revision History:

Notes:

    This file is generated from msg.mc

    Durint text setup the screen is laid out with a header and status line;
    counting blank lines to separate them from the main message
    area, this results in a maximum screen message length of 26 lines.
    (There are a minimum of 32 lines total on the screen).

--*/

#ifndef _USETUP_MSG_
#define _USETUP_MSG_


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
// MessageId: SP_MSG_FIRST
//
// MessageText:
//
//  SP_MSG_FIRST
//
#define SP_MSG_FIRST                     0x00002328L

//
// MessageId: SP_SCRN_WELCOME
//
// MessageText:
//
//  %%IWelcome to Setup.
//  
//  The Setup program for the Microsoft(R) Windows NT(TM) operating system
//  version 3.5 prepares Windows NT to run on your computer.
//  
//       To learn more about Windows NT Setup before continuing, press F1.
//  
//       To set up Windows NT now, press ENTER.
//  
//       To repair a damaged Windows NT version 3.5 installation, press R.
//  
//       To quit Setup without installing Windows NT, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_WELCOME                  0x00002329L

//
// MessageId: SP_SCRN_CUSTOM_EXPRESS
//
// MessageText:
//
//  Windows NT provides two Setup methods:
//  
//  %%IExpress Setup (recommended)
//  Express Setup relies on Setup to make decisions,
//  so setting up Windows NT is quick and easy.
//  
//        To use Express Setup, press ENTER.
//  
//  %%ICustom Setup
//  Custom Setup is for experienced computer users who
//  want to control how Windows NT is set up.  To use this Setup method,
//  you should know how to use a mouse with Windows NT.
//  
//        To use Custom Setup, press C.
//  
//  For details about both Setup methods, press F1.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CUSTOM_EXPRESS           0x0000232AL

//
// MessageId: SP_SCRN_PARTITION
//
// MessageText:
//
//  The list below shows existing partitions and spaces available for
//  creating new partitions.
//  
//  Use the UP and DOWN ARROW keys to move the highlight to an item
//  in the list.
//  
//       To install Windows NT on the highlighted partition
//        or unpartitioned space, press ENTER.
//  
//       To create a partition in the unpartitioned space, press C.
//  
//       To delete the highlighted partition, press D.
//  
//  
//  
//  
//  
//
#define SP_SCRN_PARTITION                0x0000232BL

//
// MessageId: SP_SCRN_CONFIRM_REMOVE_PARTITION
//
// MessageText:
//
//  You have asked Setup to remove the partition
//  
//     %1
//  
//  on %2.
//  
//  
//       To delete this partition, press L.
//        WARNING: All data on the partition will be lost!
//  
//       To return to the previous screen without
//        deleting the partition, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_REMOVE_PARTITION 0x0000232CL

//
// MessageId: SP_SCRN_CONFIRM_CREATE_PARTITION
//
// MessageText:
//
//  You have asked Setup to create a new partition on
//  %1.
//  
//  
//       To create the new partition, enter a size below and
//        press ENTER.
//  
//       To return to the previous screen without creating
//        the partition, press ESC.
//  
//  
//  The mimumum size for the new partition is %2!5u! megabytes (MB).
//  The maximum size for the new partition is %3!5u! megabytes (MB).
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_CREATE_PARTITION 0x0000232DL

//
// MessageId: SP_SCRN_INVALID_MBR_0
//
// MessageText:
//
//  Setup has determined that your computer's startup hard disk is new
//  or has been erased, or that an operating system is installed on your
//  computer with which Windows NT cannot coexist.
//  
//  If such an operating system is installed on your computer, continuing
//  Setup may damage or destroy it.
//  
//  If the hard disk is new or has been erased, or you want to discard
//  its current contents, you can choose to continue Setup.
//  
//    To continue Setup, press C. WARNING: Any data currently on
//     your computer's startup hard disk will be permanently lost.
//  
//    To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_INVALID_MBR_0            0x0000232EL

//
// MessageId: SP_SCRN_TEXTSETUP_DONE
//
// MessageText:
//
//  This portion of Setup has completed successfully.
//  
//  If there is a floppy disk inserted in drive A:, remove it.
//  
//  Press ENTER to restart your computer.
//  When your computer restarts, Setup will continue.
//  
//  
//  
//  
//
#define SP_SCRN_TEXTSETUP_DONE           0x0000232FL

//
// MessageId: SP_SCRN_TEXTSETUP_EXITED
//
// MessageText:
//
//  Windows NT has not been installed.
//  
//  If there is a floppy disk inserted in drive A:, remove it.
//  
//  Press ENTER to restart your computer.
//  
//  
//  
//
#define SP_SCRN_TEXTSETUP_EXITED         0x00002330L

//
// MessageId: SP_SCRN_FATAL_SIF_ERROR_LINE
//
// MessageText:
//
//  The following value in the Setup Information File is corrupt or missing:
//  
//  Value %1!u! on line %2!u! in section [%3]
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//
#define SP_SCRN_FATAL_SIF_ERROR_LINE     0x00002331L

//
// MessageId: SP_SCRN_FATAL_SIF_ERROR_KEY
//
// MessageText:
//
//  The following value in the Setup Information File is corrupt or missing:
//  
//  Value %1!u! on the line in section [%2]
//  with key "%3."
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//
#define SP_SCRN_FATAL_SIF_ERROR_KEY      0x00002332L

//
// MessageId: SP_SCRN_EXIT_CONFIRMATION
//
// MessageText:
//
//                                                      //  //  //  //  //  //  //                                                      //  //                                                      //  
//  
//  
//  
//
#define SP_SCRN_EXIT_CONFIRMATION        0x00002333L

//
// MessageId: SP_SCRN_REGION_TOO_SMALL
//
// MessageText:
//
//  The partition or unpartitioned space you chose is too small
//  for Windows NT. Select a partition or unpartitioned space whose size
//  is at least %1!u! megabytes (1 megabyte = 1,048,576 bytes).
//  
//  
//
#define SP_SCRN_REGION_TOO_SMALL         0x00002334L

//
// MessageId: SP_SCRN_FOREIGN_PARTITION
//
// MessageText:
//
//  The partition you have chosen is not recognized by Windows NT.
//  
//  Setup cannot install Windows NT onto this partition. However you can
//  return to the previous screen and delete the partition, and then
//  select the resulting unpartitioned space. Setup will automatically create
//  a new partition onto which you can install Windows NT.
//  
//  
//  
//
#define SP_SCRN_FOREIGN_PARTITION        0x00002335L

//
// MessageId: SP_SCRN_UNKNOWN_FREESPACE
//
// MessageText:
//
//  The partition you have chosen is recognized by Windows NT but
//  is unformatted or damaged. Setup will have to reformat this
//  partition to install Windows NT on it.
//  
//  
//        To continue and use the partition anyway, press C.
//         Setup will confirm this again later before actually
//         reformatting the partition.
//  
//        If you want to select a different partition, press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_UNKNOWN_FREESPACE        0x00002336L

//
// MessageId: SP_SCRN_INSUFFICIENT_FREESPACE
//
// MessageText:
//
//  The partition you have chosen is too full to contain Windows NT,
//  which requires a drive with a least %1!u! megabytes of free disk space
//  (1 megabyte = 1,048,576 bytes).
//  
//  To install Windows NT on the partition, Setup will have to reformat it.
//  
//        To continue and use the partition anyway, press C.
//         Setup will confirm this again later before actually
//         reformatting the drive.
//  
//        If you want to select a different partition, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_INSUFFICIENT_FREESPACE   0x00002337L

//
// MessageId: SP_SCRN_PART_TABLE_FULL
//
// MessageText:
//
//  Setup cannot create a new partition in the unpartitioned space
//  you have selected because the disk's partition table is full.
//  
//  Press ENTER to continue.
//  
//  
//
#define SP_SCRN_PART_TABLE_FULL          0x00002338L

//
// MessageId: SP_SCRN_1024_CYL_WARN
//
// MessageText:
//
//  Setup has determined that one or more of your hard disks has more than
//  1024 cylinders.
//  
//  Because MS-DOS is normally limited to 1024 cylinders per hard disk,
//  some hard disk controllers offer special configuration options to allow
//  access to large disks in their entirety. These options are known as
//  sector translation modes. If a disk has only slightly more than 1024
//  cylinders, or such a mode is not enabled, a small portion of the disk
//  remains inaccessible to MS-DOS. Consult your computer or hard disk
//  controller documentation for more information about sector translation
//  and large hard disks.
//  
//  If disk sizes appear too small when Setup later displays information
//  about hard disks it has located, you should exit Setup and check your
//  CMOS drive type settings. Consult your computer or hard disk controller
//  documentation for more information about CMOS drive type settings.
//  
//  Note that this message does not necessarily indicate an error condition.
//  It is intended to alert you to the fact that one or more of your hard disks
//  may actually be larger than the size for which it is currenty configured.
//  
//  Press ENTER to continue.
//  
//  
//  
//  
//
#define SP_SCRN_1024_CYL_WARN            0x00002339L

//
// MessageId: SP_SCRN_NO_VALID_C_COLON
//
// MessageText:
//
//  %1
//  does not contain a partition suitable for starting Windows NT.
//  
//  This hard disk must contain a Windows NT-compatible partition before
//  Setup can continue. You can create such a partition from the previous
//  screen by locating and highlighting an unpartitioned space on the disk
//  and pressing C to create a partition in the space. If there are no
//  unpartitioned spaces on the disk, you must first delete an existing
//  partition to create an unpartitioned space.
//  
//  Press ENTER to return to the previous screen.
//  
//  
//  
//  
//  
//
#define SP_SCRN_NO_VALID_C_COLON         0x0000233AL

//
// MessageId: SP_SCRN_BOOT_MANAGER
//
// MessageText:
//
//  Setup has found Boot Manager on your computer and must disable it
//  to complete Windows NT installation. Boot Manager will not be destroyed,
//  uninstalled, or otherwise altered by this operation.
//  
//  You can re-enable Boot Manager from Windows NT after Setup is complete
//  by using Disk Administrator to mark the Boot Manager partition as active.
//  Refer to your System Guide for more information about Disk Administrator.
//  
//  
//  
//  
//
#define SP_SCRN_BOOT_MANAGER             0x0000233BL

//
// MessageId: SP_SCRN_OTHER_OS_ACTIVE
//
// MessageText:
//
//  To complete Windows NT installation, Setup must temporarily disable
//  the operating system that currently starts when your computer is
//  powered on or restarted. That operating system will not be destroyed,
//  uninstalled, or otherwise altered as a result of being disabled by Setup.
//  
//  You can re-enable the operating system that Setup disables by using the
//  Disk Administrator to mark its partition as active. Refer to your
//  System Guide for more information about Disk Administrator.
//  
//  
//  
//  
//  
//
#define SP_SCRN_OTHER_OS_ACTIVE          0x0000233CL

//
// MessageId: SP_SCRN_C_UNKNOWN
//
// MessageText:
//
//  Your C: drive is unformatted, damaged, or formatted with a file system
//  that is not compatible with Windows NT. To continue installing
//  Windows NT, Setup will have to format the drive.
//  
//        To format the C: drive and continue Setup, press F.
//         WARNING: All data currently on the drive will be lost.
//  
//        To return to the previous screen without formatting drive C:,
//         press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_C_UNKNOWN                0x0000233DL

//
// MessageId: SP_SCRN_C_FULL
//
// MessageText:
//
//  Your C: drive is too full to contain Windows NT startup files.
//  You must have at least %1!u! kilobytes (1 KB = 1024 bytes) of
//  disk space on C: to install Windows NT.
//  
//  To continue installing Windows NT, Setup will have to
//  format the drive.
//  
//        To format the C: drive and continue Setup, press F.
//         WARNING: All data currently on the drive will be lost.
//  
//        To return to the previous screen without formatting drive C:,
//         press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_C_FULL                   0x0000233EL

//
// MessageId: SP_SCRN_FORMAT_NEW_PART
//
// MessageText:
//
//  A new partition for Windows NT has been created on
//  %1.
//  The partition must now be formatted.
//  
//  Select a file system for the new partition from the list below.
//  Use the UP and DOWN ARROW keys to move the highlight to the
//  file system you want and then press ENTER.
//  
//  If you want to select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_FORMAT_NEW_PART          0x0000233FL

//
// MessageId: SP_SCRN_FORMAT_BAD_PART
//
// MessageText:
//
//  You have asked to install Windows NT on the partition
//  
//  %1
//  
//  on %2.
//  
//  This partition is too full, damaged, not formatted, or not formatted
//  with a file system recognized by Windows NT. To continue
//  installing Windows NT on this partition, Setup must format it.
//  
//  Select a file system for the partition from the list below.
//  Use the UP and DOWN ARROW keys to move the highlight to the
//  file system you want and then press ENTER.
//  
//  If you want to select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_FORMAT_BAD_PART          0x00002340L

//
// MessageId: SP_SCRN_FORMAT_NEW_PART2
//
// MessageText:
//
//  The partition you have chosen is newly created and thus unformatted.
//  Setup will now format the partition.
//  
//  Select a file system for the partition from the list below.
//  Use the UP and DOWN ARROW keys to move the highlight to the
//  file system you want and then press ENTER.
//  
//  If you want to select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_FORMAT_NEW_PART2         0x00002341L

//
// MessageId: SP_SCRN_FS_OPTIONS
//
// MessageText:
//
//  Setup will install Windows NT on partition
//  
//  %1
//  
//  on %2.
//  
//  Select the type of file system you want on this partition
//  from the list below. Use the UP and DOWN ARROW keys to move the highlight
//  to the selection you want. Then press ENTER.
//  
//  If you want to select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_FS_OPTIONS               0x00002342L

//
// MessageId: SP_SCRN_CONFIRM_CONVERT
//
// MessageText:
//
//  WARNING: Converting this drive to NTFS will render it inaccessable
//  to operating systems other than Windows NT.
//  
//  Do not convert the drive to NTFS if you require access to the drive
//  when using other operating systems such as MS-DOS, Windows, or OS/2.
//  
//  Please confirm that you want to convert
//  
//  %1
//  
//  on %2.
//  
//        To convert the drive to NTFS, press C.
//  
//        To select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_CONVERT          0x00002343L

//
// MessageId: SP_SCRN_CONFIRM_FORMAT
//
// MessageText:
//
//  WARNING: Formatting this drive will erase all data currently stored on it.
//  Please confirm that you would like to format
//  
//  %1
//  
//  on %2.
//  
//        To format the drive, press F.
//  
//        To select a different partition for Windows NT, press ESC.
//  
//  
//  
//
#define SP_SCRN_CONFIRM_FORMAT           0x00002344L

//
// MessageId: SP_SCRN_SETUP_IS_FORMATTING
//
// MessageText:
//
//  Please wait while Setup formats the partition
//  
//  %1
//  
//  on %2.
//  
//  
//
#define SP_SCRN_SETUP_IS_FORMATTING      0x00002345L

//
// MessageId: SP_SCRN_FORMAT_ERROR
//
// MessageText:
//
//  Setup was unable to format the partition. The disk may be damaged.
//  Make sure the drive is switched on and properly connected
//  to your computer. If the disk is a SCSI disk, make sure your SCSI
//  devices are properly terminated. Consult your computer or SCSI adapter
//  documentation for more information.
//  
//  You will have to select a different partition for Windows NT.
//  Press ENTER to continue.
//  
//  
//  
//  
//
#define SP_SCRN_FORMAT_ERROR             0x00002346L

//
// MessageId: SP_SCRN_ABOUT_TO_FORMAT_C
//
// MessageText:
//
//  Setup will now format your C: drive, which is currently unformatted.
//  
//  Press ENTER to continue.
//  
//  
//
#define SP_SCRN_ABOUT_TO_FORMAT_C        0x00002347L

//
// MessageId: SP_SCRN_REMOVE_EXISTING_NT
//
// MessageText:
//
//  You have asked Setup to remove Windows NT system files from the path
//  listed below. Please verify that this is what you want to do.
//  
//              %1
//  
//  WARNING: after removing system files from a Windows NT installation
//  you will no longer be able to start that installation of Windows NT.
//  
//    To remove Windows NT system files in the above directory, press R.
//  
//    To return to the previous screen without removing any files,
//     press ESC.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_REMOVE_EXISTING_NT       0x00002348L

//
// MessageId: SP_SCRN_DONE_REMOVING_EXISTING_NT
//
// MessageText:
//
//  Setup has finished removing files.
//  
//  %1!u! bytes of disk space were freed.
//  
//  
//
#define SP_SCRN_DONE_REMOVING_EXISTING_NT 0x00002349L

//
// MessageId: SP_SCRN_WAIT_REMOVING_NT_FILES
//
// MessageText:
//
//  Please wait while Setup removes Windows NT system files.
//  
//
#define SP_SCRN_WAIT_REMOVING_NT_FILES   0x0000234AL

//
// MessageId: SP_SCRN_CANT_LOAD_SETUP_LOG
//
// MessageText:
//
//  Setup was unable to load the log file listed below.
//  
//  %1
//  
//  Setup is unable to remove Windows NT system files from the selected
//  Windows NT installation. Press ENTER to continue.
//  
//  
//  
//
#define SP_SCRN_CANT_LOAD_SETUP_LOG      0x0000234BL

//
// MessageId: SP_SCRN_REMOVE_NT_FILES
//
// MessageText:
//
//  The partition you have chosen is too full to hold Windows NT.
//  Setup has found existing Windows NT installations in the directories
//  listed below. Removing one of these installations may free enough
//  disk space so that Setup can install Windows NT on the partition
//  you selected.
//  
//  Removing a Windows NT installation will not affect data files.
//  
//    To move the highlight to the Windows NT installation you want
//     to remove, use the UP and DOWN ARROW keys. Then press ENTER.
//  
//    If you want to format the partition you selected or install
//     Windows NT on a different partition, press ESC, or move
//     the highlight to "Do not remove any files" and press ENTER.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_REMOVE_NT_FILES          0x0000234CL

//
// MessageId: SP_SCRN_FATAL_FDISK_WRITE_ERROR
//
// MessageText:
//
//  Setup encountered an error while updating partition information on
//  %1.
//  
//  This error prevents Setup from continuing. Press F3 to exit Setup.
//  
//  
//
#define SP_SCRN_FATAL_FDISK_WRITE_ERROR  0x0000234DL

//
// MessageId: SP_SCRN_REMOVE_NT_FILES_WIN31
//
// MessageText:
//
//  The drive containing Windows 3.1 is too full to hold Windows NT.
//  Setup has found existing Windows NT installations in the directories
//  listed below. Removing one of the installations may free enough
//  disk space so that Setup can install Windows NT in your Windows 3.1
//  directory.
//  
//  Removing a Windows NT installation will not affect Windows 3.1
//  or data files.
//  
//    Use the UP and DOWN ARROW keys to move the highlight to the
//     Windows NT installation you want to remove. Then press ENTER.
//  
//    If you want to install Windows NT on a different drive, press ESC
//     or move the highlight to "Do not remove any files" and press ENTER.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_REMOVE_NT_FILES_WIN31    0x0000234EL

//
// MessageId: SP_SCRN_WIN31_DRIVE_FULL
//
// MessageText:
//
//  Setup has found a previous version of Microsoft Windows on your hard disk
//  in the directory shown below.
//  
//  
//      %1!c!:%2
//  
//  
//  Setup recommends installing Microsoft Windows NT in the same directory.
//  However the drive is too full to hold Windows NT, which requires
//  %3!u! megabytes (1 MB = 1,048,576 bytes) of free disk space.
//  
//        To install Windows NT in the directory above, press F3
//         to exit Setup. Start MS-DOS and delete any unneeded files
//         from the drive and then run Setup again.
//  
//        To select a different directory for Windows NT, press N.
//  
//  
//  
//  
//
#define SP_SCRN_WIN31_DRIVE_FULL         0x0000234FL

//
// MessageId: SP_SCRN_WIN31_UPGRADE
//
// MessageText:
//
//  Setup has found a previous version of Microsoft Windows on your hard disk
//  in the directory shown below.
//  
//  
//      %1!c!:%2
//  
//  
//  Setup recommends installing Microsoft Windows NT in the same directory.
//  This will help Windows NT interoperate with the previous version
//  of Windows.
//  
//        To install Windows NT in the directory shown above, press ENTER.
//  
//        To select a different directory for Windows NT, press N.
//  
//  
//  
//  
//
#define SP_SCRN_WIN31_UPGRADE            0x00002350L

//
// MessageId: SP_SCRN_GETPATH_1
//
// MessageText:
//
//  Setup installs Windows NT files onto your hard disk. Choose the location
//  where you want these files to be installed:
//  
//  
//
#define SP_SCRN_GETPATH_1                0x00002351L

//
// MessageId: SP_SCRN_GETPATH_2
//
// MessageText:
//
//  To change the suggested location, press the BACKSPACE key
//  to delete characters and then type the directory where you want
//  Windows NT installed.
//  
//  
//
#define SP_SCRN_GETPATH_2                0x00002352L

//
// MessageId: SP_SCRN_INVALID_NTPATH
//
// MessageText:
//
//  The directory you have entered is invalid. Make sure the name
//  is not the root directory and does not contain any consecutive
//  path separator (backslash) characters.
//  
//  Also make sure the name follows the standard MS-DOS filename rules.
//  
//  Press ENTER to continue. Setup will prompt you to enter
//  a different directory.
//  
//  
//  
//  
//  
//
#define SP_SCRN_INVALID_NTPATH           0x00002353L

//
// MessageId: SP_SCRN_WIN31_PATH_ENTERED
//
// MessageText:
//
//  Setup has found a previous version of Microsoft Windows in the directory
//  you have chosen for installing Microsoft Windows NT. Setup recommends
//  installing into this directory since Microsoft Windows NT can interoperate
//  with the previous version of Windows.
//  
//       To install Windows NT in the same directory, press ENTER.
//  
//       To select a different directory for Windows NT, press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_WIN31_PATH_ENTERED       0x00002354L

//
// MessageId: SP_SCRN_NTPATH_EXISTS
//
// MessageText:
//
//  The directory you have chosen already exists and may contain
//  a Windows NT installation. If you continue, the existing Windows NT
//  installation will be overwritten. Your user account and security
//  information and configuration settings will be lost.
//  
//      To use the directory you have chosen and overwrite
//       the existing Windows NT installation in it, press ENTER.
//  
//      To use a different directory, press ESC.
//  
//      To upgrade the installation, press F3 to exit Setup.
//       Then start Setup again and choose to upgrade when Setup suggests
//       upgrading this installation.
//  
//  
//  
//  
//  
//
#define SP_SCRN_NTPATH_EXISTS            0x00002355L

//
// MessageId: SP_SCRN_OUT_OF_MEMORY
//
// MessageText:
//
//  Setup is out of memory and cannot continue.
//  
//  Press F3 to exit Setup.
//  
//  
//
#define SP_SCRN_OUT_OF_MEMORY            0x00002356L

//
// MessageId: SP_SCRN_HW_CONFIRM_1
//
// MessageText:
//
//  Setup has determined that your computer contains the following hardware
//  and software components.
//  
//  
//
#define SP_SCRN_HW_CONFIRM_1             0x00002357L

//
// MessageId: SP_SCRN_HW_CONFIRM_2
//
// MessageText:
//
//            Computer:
//             Display:
//            Keyboard:
//     Keyboard Layout:
//     Pointing Device:
//  
//          No Changes:
//  
//  
//  If you want to change any item in the list, press the UP or DOWN ARROW
//  key to move the highlight to the item you want to change. Then press
//  ENTER to see alternatives for that item.
//  
//  When all the items in the list are correct, move the highlight to
//  "The above list matches my computer" and press ENTER.
//  
//  
//  
//  
//  
//
#define SP_SCRN_HW_CONFIRM_2             0x00002358L

//
// MessageId: SP_SCRN_C_TOO_BIG
//
// MessageText:
//
//  Setup is unable to format drive C: because its current size (%1!u! megabytes)
//  is larger than 2048 megabytes (1 megabyte = 1,048,576 bytes).
//  
//  You must return to the previous screen and create a C: drive that does not
//  exceed 2048 megabytes.
//  
//    To return to the previous screen without formatting drive C:,
//     press ENTER.
//  
//    To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_C_TOO_BIG                0x00002359L

//
// MessageId: SP_SCRN_SELECT_COMPUTER
//
// MessageText:
//
//  You have asked to change the type of computer to be installed.
//  
//    To select a computer from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the computer type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     computer type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_COMPUTER          0x0000235AL

//
// MessageId: SP_SCRN_SELECT_DISPLAY
//
// MessageText:
//
//  You have asked to change the type of display to be installed.
//  WARNING: The list below is extremely limited and may not contain
//  an item exactly corresponding to your display type. This is normal.
//  Setup will allow further configuration of your display type later.
//  
//  Changing your display type now is neither recommended nor necessary
//  unless you have a driver disk provided by a display adapter
//  manufacturer.
//  
//    To select a display from the following list, use the UP or DOWN ARROW
//     key to move the highlight to the type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your display type,
//     press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_SELECT_DISPLAY           0x0000235BL

//
// MessageId: SP_SCRN_SELECT_KEYBOARD
//
// MessageText:
//
//  You have asked to change the type of keyboard to be installed.
//  
//    To select a keyboard from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the keyboard type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     keyboard type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_KEYBOARD          0x0000235CL

//
// MessageId: SP_SCRN_SELECT_LAYOUT
//
// MessageText:
//
//  You have asked to change the type of keyboard layout to be installed.
//  
//    To select a keyboard layout from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the keyboard layout type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     keyboard layout type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_LAYOUT            0x0000235DL

//
// MessageId: SP_SCRN_SELECT_MOUSE
//
// MessageText:
//
//  You have asked to change the type of pointing device to be installed.
//  
//    To select a pointing device from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the pointing device type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     pointing device type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_MOUSE             0x0000235EL

//
// MessageId: SP_SCRN_SELECT_OEM_COMPUTER
//
// MessageText:
//
//  You have chosen to change your computer type to one supported
//  by a disk provided by a hardware manufacturer.
//  
//    To select a computer from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the computer type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     computer type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_COMPUTER      0x0000235FL

//
// MessageId: SP_SCRN_SELECT_OEM_DISPLAY
//
// MessageText:
//
//  You have chosen to install a display provided by a hardware
//  manufacturer.
//  
//    To select a display from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the display type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your display type,
//     press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_DISPLAY       0x00002360L

//
// MessageId: SP_SCRN_SELECT_OEM_KEYBOARD
//
// MessageText:
//
//  You have chosen to install a keyboard provided by a hardware
//  manufacturer.
//  
//    To select a keyboard from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the keyboard type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     keyboard type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_KEYBOARD      0x00002361L

//
// MessageId: SP_SCRN_SELECT_OEM_LAYOUT
//
// MessageText:
//
//  You have chosen to install a keyboard layout provided by a hardware
//  manufacturer.
//  
//    To select a keyboard layout from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the keyboard layout type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     keyboard layout type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_LAYOUT        0x00002362L

//
// MessageId: SP_SCRN_SELECT_OEM_MOUSE
//
// MessageText:
//
//  You have chosen to install a pointing device provided by a hardware
//  manufacturer.
//  
//    To select a pointing device from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the pointing device type you want, and then press ENTER.
//  
//    To return to the previous screen without changing your
//     pointing device type, press ESC.
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_MOUSE         0x00002363L

//
// MessageId: SP_SCRN_FLOPPY_PROMPT
//
// MessageText:
//
//  Please insert the disk labeled
//  
//  %%I%1
//  
//  into drive %2!c!:
//  
//   Press ENTER when ready.
//  
//  
//
#define SP_SCRN_FLOPPY_PROMPT            0x00002364L

//
// MessageId: SP_SCRN_CDROM_PROMPT
//
// MessageText:
//
//  Please insert the compact disc labeled
//  
//  %%I%1
//  
//  into your CD-ROM drive.
//  
//   Press ENTER when ready.
//  
//  
//
#define SP_SCRN_CDROM_PROMPT             0x00002365L

//
// MessageId: SP_SCRN_MULTI_DISK_NOT_ERROR
//
// MessageText:
//
//  NOTE: Setup may ask you to insert some floppy disks more than once.
//  This is not an error condition.
//  
//  
//
#define SP_SCRN_MULTI_DISK_NOT_ERROR     0x00002366L

//
// MessageId: SP_SCRN_DISK_DAMAGED
//
// MessageText:
//
//  The disk or CD-ROM you inserted may be damaged.
//  
//  Press ENTER to continue (Setup will prompt you to insert the disk
//  again). Make sure you have inserted the correct disk or CD-ROM.
//  If you continue to get this message, try inserting a different
//  copy of the disk or CD-ROM that Setup is prompting you to insert.
//  
//  
//  
//
#define SP_SCRN_DISK_DAMAGED             0x00002367L

//
// MessageId: SP_SCRN_NO_FLOPPY_FOR_OEM_DISK
//
// MessageText:
//
//  Setup cannot install hardware components provided by a hardware
//  manufacturer because there are no floppy disk drives in your computer.
//  
//  
//
#define SP_SCRN_NO_FLOPPY_FOR_OEM_DISK   0x00002368L

//
// MessageId: SP_SCRN_OEM_INF_ERROR
//
// MessageText:
//
//  A problem exists with the Setup Information File on the manufacturer-
//  supplied disk you have provided:
//  
//  %1
//  
//  Setup cannot use the disk or select the option. Contact the
//  hardware manufacturer.
//  
//  Press ENTER to continue.
//  
//  
//  
//
#define SP_SCRN_OEM_INF_ERROR            0x00002369L

//
// MessageId: SP_SCRN_UNKNOWN_COMPUTER
//
// MessageText:
//
//  Setup cannot continue until it knows the type of your computer.
//  
//
#define SP_SCRN_UNKNOWN_COMPUTER         0x0000236AL

//
// MessageId: SP_SCRN_UNKNOWN_DISPLAY
//
// MessageText:
//
//  Setup cannot continue until it knows the type of your display.
//  
//
#define SP_SCRN_UNKNOWN_DISPLAY          0x0000236BL

//
// MessageId: SP_SCRN_UNKNOWN_KEYBOARD
//
// MessageText:
//
//  Setup cannot continue until it knows the type of your keyboard.
//  
//
#define SP_SCRN_UNKNOWN_KEYBOARD         0x0000236CL

//
// MessageId: SP_SCRN_UNKNOWN_LAYOUT
//
// MessageText:
//
//  Setup cannot continue until it knows your keyboard layout type.
//  
//
#define SP_SCRN_UNKNOWN_LAYOUT           0x0000236DL

//
// MessageId: SP_SCRN_UNKNOWN_MOUSE
//
// MessageText:
//
//  Setup cannot continue until it knows the type of your pointing device.
//  
//
#define SP_SCRN_UNKNOWN_MOUSE            0x0000236EL

//
// MessageId: SP_SCRN_NO_HARD_DRIVES
//
// MessageText:
//
//  Setup did not find any hard disk drives installed in your computer.
//  
//  Make sure any hard disk drives are powered on and properly connected
//  to your computer, and that any disk-related hardware configuration is
//  correct. This may involve running a manufacturer-supplied diagnostic
//  or setup program.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//
#define SP_SCRN_NO_HARD_DRIVES           0x0000236FL

//
// MessageId: SP_SCRN_CONFIRM_SCSI_DETECT
//
// MessageText:
//
//  Setup automatically detects floppy disk controllers and standard
//  ESDI/IDE hard disks without user intervention. However on some
//  computers detection of certain other mass storage devices, such as
//  SCSI adapters and CD-ROM drives, can cause the computer to become
//  unresponsive or to malfunction temporarily.
//  
//  For this reason, you can bypass Setup's mass storage device detection
//  and manually select SCSI adapters, CD-ROM drives, and special disk
//  controllers (such as drive arrays) for installation.
//  
//  
//       To continue, Press ENTER.
//        Setup will attempt to detect mass storage devices in your computer.
//  
//       To skip mass storage device detection, press S.
//        Setup will allow you to manually select SCSI adapters,
//        CD-ROM drives, and special disk controllers for installation.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_SCSI_DETECT      0x00002370L

//
// MessageId: SP_SCRN_SCSI_LIST_1
//
// MessageText:
//
//  Setup has recognized the following mass storage devices in your computer:
//
#define SP_SCRN_SCSI_LIST_1              0x00002371L

//
// MessageId: SP_SCRN_SCSI_LIST_2
//
// MessageText:
//
//     To specify additional SCSI adapters, CD-ROM drives, or special
//      disk controllers for use with Windows NT, including those for which
//      you have a device support disk from a mass storage device
//      manufacturer, press S.
//  
//     If you do not have any device support disks from a mass storage
//      device manufacturer, or do not want to specify additional
//      mass storage devices for use with Windows NT, press ENTER.
//  
//  
//  
//  
//
#define SP_SCRN_SCSI_LIST_2              0x00002372L

//
// MessageId: SP_SCRN_SELECT_SCSI
//
// MessageText:
//
//  You have asked to specify an additional SCSI adapter, CD-ROM drive,
//  or special disk controller for use with Windows NT.
//  
//    To select a mass storage device from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the mass storage device you want, and then press ENTER.
//  
//    To return to the previous screen without specifying an additional
//     mass storage device for use with Windows NT, press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_SELECT_SCSI              0x00002373L

//
// MessageId: SP_SCRN_SELECT_OEM_SCSI
//
// MessageText:
//
//  You have chosen to install a SCSI adapter, CD-ROM drive, or
//  special disk controller provided by a hardware manufacturer.
//  
//    To select a mass storage device from the following list,
//     use the UP or DOWN ARROW key to move the highlight to
//     the mass storage device you want, and then press ENTER.
//  
//    To return to the previous screen without specifying a mass storage
//     device for use with Windows NT, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_SELECT_OEM_SCSI          0x00002374L

//
// MessageId: SP_SCRN_SCSI_DIDNT_LOAD
//
// MessageText:
//
//  The SCSI adapter, CD-ROM drive, or special disk controller you specified
//  is not installed in your computer.
//  
//  
//
#define SP_SCRN_SCSI_DIDNT_LOAD          0x00002375L

//
// MessageId: SP_SCRN_DIR_CREATE_ERR
//
// MessageText:
//
//  Setup was unable to create the directory
//  %1.
//  
//  Setup cannot continue until the directory has been successfully created.
//  
//       To retry the operation, press ENTER.
//  
//       To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_DIR_CREATE_ERR           0x00002376L

//
// MessageId: SP_SCRN_COPY_FAILED
//
// MessageText:
//
//  Setup was unable to copy the file %1.
//  
//     To retry the copy, press ENTER.
//  
//      Make sure the proper Windows NT floppy disk or CD-ROM is in the drive.
//  
//     To skip this file, press ESC.
//  
//      WARNING: this option is intended for advanced users who understand
//      the ramifications of the absence of the various Windows NT files.
//      If you choose to skip this file, Setup cannot guarantee
//      successful installation of Windows NT.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_COPY_FAILED              0x00002377L

//
// MessageId: SP_SCRN_IMAGE_VERIFY_FAILED
//
// MessageText:
//
//  The file %1 was not copied correctly.
//  
//  Although Setup did not encounter any errors while copying this file,
//  the copy Setup placed on your hard drive is not a valid Windows NT
//  system image. This may indicate a problem with the Windows NT floppy disk
//  or CD-ROM currently in the drive.
//  
//     To retry the copy, press ENTER.
//  
//      If you continue to receive this message, contact your Windows NT
//      supplier or administrator, or try a different copy of the floppy disk
//      or CD-ROM.
//  
//     To skip this file, press ESC.
//  
//      WARNING: this option is intended for advanced users who understand
//      the ramifications of the absence of the various Windows NT files.
//      If you choose to skip this file, Setup cannot guarantee
//      successful installation of Windows NT.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_IMAGE_VERIFY_FAILED      0x00002378L

//
// MessageId: SP_SCRN_SETUP_IS_COPYING
//
// MessageText:
//
//  Please wait while Setup copies files to your hard disk.
//  
//
#define SP_SCRN_SETUP_IS_COPYING         0x00002379L

//
// MessageId: SP_SCRN_REGISTRY_CONFIG_FAILED
//
// MessageText:
//
//  Setup cannot set required Windows NT configuration information.
//  This indicates an internal Setup error.
//  
//  Contact your group or system administrator.
//  
//  
//
#define SP_SCRN_REGISTRY_CONFIG_FAILED   0x0000237AL

//
// MessageId: SP_SCRN_DOING_REG_CONFIG
//
// MessageText:
//
//  Please wait while Setup initializes your Windows NT configuration.
//  
//
#define SP_SCRN_DOING_REG_CONFIG         0x0000237BL

//
// MessageId: SP_SCRN_CANT_INIT_FLEXBOOT
//
// MessageText:
//
//  Setup cannot configure your computer to start Windows NT.
//  
//  This may indicate a problem with the hard disk containing your C: drive,
//  or C: may be severely corrupted.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//  
//
#define SP_SCRN_CANT_INIT_FLEXBOOT       0x0000237CL

//
// MessageId: SP_SCRN_CANT_UPDATE_BOOTVARS
//
// MessageText:
//
//  Setup cannot add a selection to your computer's list of available
//  operating systems. Your non-volatile configuration memory may be exhausted.
//  Setup has attempted to restore your system configuration to its original
//  state.
//  
//  Setup will continue, but you should run the system configuration program
//  supplied by your computer's manufacturer to update the startup configuration.
//  The required parameters are:
//  
//  LOADIDENTIFIER = %1
//  OSLOADER = %2
//  OSLOADPARTITION = %3
//  OSLOADFILENAME = %4
//  OSLOADOPTIONS = %5
//  SYSTEMPARTITION = %6
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CANT_UPDATE_BOOTVARS     0x0000237DL

//
// MessageId: SP_SCRN_C_OS2_HPFS
//
// MessageText:
//
//  Your C: drive is formatted with the High Performance File System (HPFS).
//  
//  If you have been starting OS/2 version 2.0 or later from drive C:
//  (including C: via Boot Manager), the ability to start OS/2 will be lost
//  if you continue installing Windows NT.
//  
//      To continue installation, press C.
//       If you start OS/2 2.0 or later from drive C:, continue only if
//       you no longer need to start OS/2.
//  
//      To exit Setup, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_C_OS2_HPFS               0x0000237EL

//
// MessageId: SP_SCRN_FOUND_UNDELETE
//
// MessageText:
//
//  Setup has determined that the Delete Sentry or Delete Tracking protection
//  method of Undelete may be in use on your computer. These protection methods
//  use a portion of your hard disk to remember deleted files.
//  
//  Disk space used to remember deleted files is not recognized as
//  free disk space by Windows NT. Therefore, the amount of free disk space
//  reported by Setup and Windows NT for a drive on which Undelete is in use
//  may differ from the amount reported by MS-DOS.
//  
//  
//  
//  
//
#define SP_SCRN_FOUND_UNDELETE           0x0000237FL

//
// MessageId: SP_SCRN_COULDNT_INIT_ARCNAMES
//
// MessageText:
//
//  Setup was unable to initialize an internal database used to formulate
//  device names. This indicates an internal Setup error or a serious
//  system problem.
//  
//  
//
#define SP_SCRN_COULDNT_INIT_ARCNAMES    0x00002380L

//
// MessageId: SP_SCRN_CONFIRM_REMOVE_SYSPART
//
// MessageText:
//
//  The partition you have asked to delete is a system partition.
//  
//  System partitions may contain diagnostic or hardware configuration
//  programs, programs to start operating systems (such as Windows NT),
//  or other manufacturer-supplied programs.
//  
//  Delete a system partition only if you are sure that it contains
//  no such programs or if you are willing to lose them. Deleting a
//  system partition may prevent your computer from starting from
//  the hard disk until you complete installation of Windows NT.
//  
//     To continue and delete this partition, press ENTER.
//      Setup will prompt for additional confirmation before
//      deleting the partition.
//  
//     To return to the previous screen without
//      deleting the partition, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_REMOVE_SYSPART   0x00002381L

//
// MessageId: SP_SCRN_INSTALL_ON_SYSPART
//
// MessageText:
//
//  You have chosen to install Windows NT on the system partition.
//  
//  A system partition is an area of a hard disk that your computer uses
//  to store operating system startup files and diagnostic, configuration,
//  or other manufacturer-supplied programs.
//  
//  Your computer requires that system partitions be formatted with the
//  FAT file system. This will limit your ability to take advantage of
//  the full security features of Windows NT because these features require
//  the Windows NT File System (NTFS).
//  
//       To select a different partition for Windows NT, press ESC.
//  
//       To install Windows NT on the partition anyway, press ENTER.
//        You will not be allowed to convert or format the partition
//        to the Windows NT File System (NTFS).
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_INSTALL_ON_SYSPART       0x00002382L

//
// MessageId: SP_SCRN_NO_SYSPARTS
//
// MessageText:
//
//  No valid system partitions are defined on this computer, or all
//  system partitions are full. Windows NT requires %1!u! kilobytes
//  (1 KB = 1024 bytes) of free disk space on a valid system partition.
//  
//  A system partition is an area of a hard disk that your computer uses
//  to store operating system startup files and diagnostic, configuration,
//  or other manufacturer-supplied programs.
//  
//  System partitions are created and managed by a manufacturer-supplied
//  configuration program. If you do not know of such a program, you can use
//  a program called ARCINST.EXE, which is supplied on the Windows NT CD-ROM.
//  
//  How you invoke this program depends on your computer type.
//  Typically you select a "Run a program" option from your computer's
//  startup menu.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_NO_SYSPARTS              0x00002383L

//
// MessageId: SP_SCRN_SIF_PROCESS_ERROR
//
// MessageText:
//
//  There is a syntax error in the Setup information file at line %1!u!.
//  
//  This indicates an internal Setup error.
//  
//  Setup cannot continue. Power down or reboot your computer now.
//  
//  
//  
//
#define SP_SCRN_SIF_PROCESS_ERROR        0x00002384L

//
// MessageId: SP_SCRN_SELECT_SOURCE_MEDIA
//
// MessageText:
//
//  Windows NT has determined that your computer includes a CD-ROM drive
//  as well as one or more high-density 3.5" floppy disk drives.
//  (Note: installation from 5.25" disks is not supported.)
//  
//  Please select the media from which you will install Windows NT.
//  
//      To install Windows NT from CD-ROM, press ENTER.
//  
//      To install Windows NT from 3.5" disks (drive %1!c!:), press %2!c!.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_SELECT_SOURCE_MEDIA      0x00002385L

//
// MessageId: SP_SCRN_CANT_FIND_LOCAL_SOURCE
//
// MessageText:
//
//  Setup is unable to locate the hard drive partition prepared by
//  the MS-DOS portion of Setup.
//  
//  When you run the MS-DOS Windows NT Setup program, you must specify a
//  temporary drive that is supported by Windows NT. See your
//  System Guide for more information.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//  
//
#define SP_SCRN_CANT_FIND_LOCAL_SOURCE   0x00002386L

//
// MessageId: SP_SCRN_TEXTSETUP_DONE_ARC
//
// MessageText:
//
//  This portion of Setup has completed successfully.
//  
//  Press ENTER to restart your computer.
//  When your computer restarts, Setup will continue.
//  
//  
//  
//
#define SP_SCRN_TEXTSETUP_DONE_ARC       0x00002388L

//
// MessageId: SP_SCRN_TEXTSETUP_EXITED_ARC
//
// MessageText:
//
//  Windows NT has not been installed.
//  
//  Press ENTER to restart your computer.
//  
//  
//
#define SP_SCRN_TEXTSETUP_EXITED_ARC     0x00002389L

//
// MessageId: SP_SCRN_INSUFFICIENT_MEMORY
//
// MessageText:
//
//  There is not enough memory installed in this computer to run Windows NT.
//  
//  This version requires %1!u!.%2!02u! megabytes (1 MB = 1,048,576 bytes)
//  of memory.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//  
//
#define SP_SCRN_INSUFFICIENT_MEMORY      0x0000238AL

//
// MessageId: SP_SCRN_DISK_NOT_INSTALLABLE
//
// MessageText:
//
//  The hard disk containing the partition or free space you chose is not
//  accessible to your computer's startup program. Setup cannot install
//  Windows NT on this hard disk.
//  
//  On x86-based computers, this message may indicate a problem with the
//  computer's CMOS drive type settings. Consult your computer or hard
//  disk controller documentation for more information.
//  
//  Note that this message does not necessarily indicate an error condition.
//  The hard disks typically accessible to a computer's startup program
//  are those whose installation in your computer were anticipated by
//  the computer manufacturer.
//  
//  For example, disks attached to a SCSI adapter not installed by your
//  computer manufacturer, or to a secondary hard disk controller, are
//  typically not visible to the startup program unless special software is
//  added to your computer. Contact your computer or hard disk controller
//  manufacturer for more information.
//  
//  Press ENTER to continue.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_DISK_NOT_INSTALLABLE     0x0000238BL

//
// MessageId: SP_SCRN_REPAIR_INF_ERROR
//
// MessageText:
//
//  A problem exists with the Emergency Repair Information File on the disk
//  you have provided or the Windows NT installation you specified:
//  
//  %1
//  
//  Setup cannot use the file to repair the selected Windows NT installation.
//  
//      To provide a different Emergency Repair Disk or to specify
//       a different Windows NT installation, press ENTER.
//  
//      To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_INF_ERROR         0x0000238DL

//
// MessageId: SP_SCRN_REPAIR_INF_ERROR_0
//
// MessageText:
//
//  A problem exists with the Emergency Repair Information File on the disk
//  you have provided or the Windows NT installation you specified:
//  
//  %1
//  
//  Setup cannot repair the file.
//  
//     To skip this file, press ENTER. The file will not be repaired.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_INF_ERROR_0       0x0000238EL

//
// MessageId: SP_SCRN_REPAIR_FILE_MISMATCH
//
// MessageText:
//
//  %1
//  
//  
//     To skip this file, press ESC. The file will not be repaired.
//  
//     To repair this file, press ENTER.
//  
//     To repair this file and all other non-original files, press A.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_FILE_MISMATCH     0x0000238FL

//
// MessageId: SP_SCRN_SETUP_IS_EXAMINING
//
// MessageText:
//
//  Please wait while Setup examines files on your hard disk.
//  
//
#define SP_SCRN_SETUP_IS_EXAMINING       0x00002390L

//
// MessageId: SP_SCRN_REPAIR_DONE
//
// MessageText:
//
//  Setup has completed repairs.
//  
//  If there is a floppy disk inserted in drive A:, remove it.
//  
//  Press ENTER to restart your computer.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_DONE              0x00002391L

//
// MessageId: SP_SCRN_REPAIR_DONE_ARC
//
// MessageText:
//
//  Setup has completed repairs.
//  
//  Press ENTER to restart your computer.
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_DONE_ARC          0x00002392L

//
// MessageId: SP_SCRN_REPAIR_EXITED
//
// MessageText:
//
//  Windows NT has not been repaired.
//  
//  If there is a floppy disk inserted in drive A:, remove it.
//  
//  Press ENTER to restart your computer.
//  
//  
//  
//
#define SP_SCRN_REPAIR_EXITED            0x00002393L

//
// MessageId: SP_SCRN_REPAIR_EXITED_ARC
//
// MessageText:
//
//  Windows NT has not been repaired.
//  
//  Press ENTER to restart your computer.
//  
//  
//  
//
#define SP_SCRN_REPAIR_EXITED_ARC        0x00002394L

//
// MessageId: SP_SCRN_REPAIR_SELECT_SOURCE_MEDIA
//
// MessageText:
//
//  As part of the repair process, Setup may need to replace files
//  on your hard disk with original copies from Windows NT distribution disks.
//  
//  Because Setup can use either a CD-ROM or 3.5" disks, you must now select
//  the media from which Setup should copy original files if it needs to.
//  
//      If you have a Windows NT Setup CD-ROM, press ENTER.
//  
//      If you have Windows NT 3.5" Setup disks, press %2!c!.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_SELECT_SOURCE_MEDIA 0x00002395L

//
// MessageId: SP_SCRN_REPAIR_ASK_REPAIR_DISK
//
// MessageText:
//
//  Setup needs to know if you have the Emergency Repair Disk for
//  the Windows NT version 3.5 installation which you want to repair.
//  NOTE: Setup can only repair Windows NT version 3.5 installations.
//  
//  
//      If you have the Emergency Repair Disk, press ENTER.
//  
//      If you do not have the Emergency Repair Disk, press ESC.
//       Setup will attempt to locate Windows NT version 3.5 for you.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_ASK_REPAIR_DISK   0x00002396L

//
// MessageId: SP_SCRN_NO_VALID_SOURCE
//
// MessageText:
//
//  Setup requires a CD-ROM drive or high-density 3.5" floppy disk drive.
//  No such drive was found.
//  
//  If you have a CD-ROM drive, make sure it is switched on and
//  properly connected to your computer. If it is a SCSI CD-ROM drive,
//  make sure your SCSI devices are properly terminated. Consult your
//  computer or SCSI adapter documentation for more information.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//  
//  
//  
//  
//
#define SP_SCRN_NO_VALID_SOURCE          0x00002397L

//
// MessageId: SP_SCRN_REPAIR_NT_NOT_FOUND
//
// MessageText:
//
//  Setup could not find a Windows NT version 3.5 installation to repair.
//  Unless you provide the Emergency Repair Disk for the installation
//  which you want to repair, Setup will not be able to repair it.
//  
//  
//      If you have the Emergency Repair Disk, or if you want setup to
//       retry the search of existing Windows NT installations, press ENTER.
//  
//      If you want to quit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_NT_NOT_FOUND      0x00002398L

//
// MessageId: SP_SCRN_DISK_NOT_INSTALLABLE_LUN_NOT_SUPPORTED
//
// MessageText:
//
//  The hard disk containing the partition or free space you chose has a Logical
//  Unit Number (LUN) greater than 0, and is not accessible to your computer's
//  startup program. Setup cannot install Windows NT on this hard disk.
//  
//  Please contact your computer or hard disk controller manufacturer for more
//  information.
//  
//  Press ENTER to continue.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_DISK_NOT_INSTALLABLE_LUN_NOT_SUPPORTED 0x00002399L

//
// MessageId: SP_SCRN_FATAL_SETUP_ERROR
//
// MessageText:
//
//  Setup has encountered a fatal error that prevents it from continuing.
//  
//  Contact your product support representative for assistance.  The
//  following status codes will assist them in diagnosing the problem:
//  
//  (%1!#lx!, %2!#lx!, %3!#lx!, %4!#lx!)
//  
//  
//  
//
#define SP_SCRN_FATAL_SETUP_ERROR        0x0000239AL

//
// MessageId: SP_SCRN_OUT_OF_MEMORY_RAW
//
// MessageText:
//
//  Setup is out of memory and cannot continue.
//  
//  Power down or reboot your computer now.
//  
//  
//
#define SP_SCRN_OUT_OF_MEMORY_RAW        0x0000239BL

//
// MessageId: SP_SCRN_VIDEO_ERROR_RAW
//
// MessageText:
//
//  Setup has encountered a fatal error while initializing your computer's video.
//  
//  Contact your product support representative for assistance.  The following
//  status codes will assist them in diagnosing the problem:
//  
//  (%1!#lx!, %2!#lx!)
//  
//  Setup cannot continue. Power down or reboot your computer now.
//  
//  
//  
//  
//
#define SP_SCRN_VIDEO_ERROR_RAW          0x0000239CL

//
// MessageId: SP_SCRN_POWER_DOWN
//
// MessageText:
//
//  Setup cannot continue. Power down or reboot your computer now.
//  
//
#define SP_SCRN_POWER_DOWN               0x0000239DL

//
// MessageId: SP_SCRN_F3_TO_REBOOT
//
// MessageText:
//
//  Setup cannot continue. Press F3 to exit.
//  
//
#define SP_SCRN_F3_TO_REBOOT             0x0000239EL

//
// MessageId: SP_SCRN_NONFATAL_SIF_ERROR_LINE
//
// MessageText:
//
//  The following value in the Setup Information File is corrupt or missing:
//  
//  Value %1!u! on line %2!u! in section [%3]
//  
//  Setup was unable to copy the file %4.
//  
//     To skip this file, press ESC.
//  
//      WARNING: this option is intended for advanced users who understand
//      the ramifications of the absence of the various Windows NT files.
//      If you choose to skip this file, Setup cannot guarantee
//      successful installation of Windows NT.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_NONFATAL_SIF_ERROR_LINE  0x0000239FL

//
// MessageId: SP_SCRN_NONFATAL_SIF_ERROR_KEY
//
// MessageText:
//
//  The following value in the Setup Information File is corrupt or missing:
//  
//  Value %1!u! on the line in section [%2]
//  with key "%3."
//  
//  Setup was unable to copy the file %4.
//  
//     To skip this file, press ESC.
//  
//      WARNING: this option is intended for advanced users who understand
//      the ramifications of the absence of the various Windows NT files.
//      If you choose to skip this file, Setup cannot guarantee
//      successful installation of Windows NT.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_NONFATAL_SIF_ERROR_KEY   0x000023A0L

//
// MessageId: SP_SCRN_OSPART_TOO_BIG
//
// MessageText:
//
//  Setup cannot format the partition
//  
//  %1
//  
//  on %2
//  
//  because it is too large. Setup is not capable of formatting drives larger
//  than 2048 megabytes (1 megabyte = 1,048,576 bytes).
//  
//  You must return to the previous screen and select or create a partition that
//  does not exceed 2048 megabytes.
//  
//    To return to the previous screen without formatting this partition,
//     press ENTER.
//  
//    To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_OSPART_TOO_BIG           0x000023A1L

//
// MessageId: SP_SCRN_INSUFFICIENT_FREESPACE_NO_FMT
//
// MessageText:
//
//  The partition you have chosen is too full to contain Windows NT,
//  which requires a drive with a least %1!u! megabytes of free disk space
//  (1 megabyte = 1,048,576 bytes).
//  
//  You must return to the previous screen and select a different partition
//  on which to install.
//  
//        To return to the previous screen, press ENTER.
//  
//  
//  
//  
//
#define SP_SCRN_INSUFFICIENT_FREESPACE_NO_FMT 0x000023A2L

//
// MessageId: SP_SCRN_C_FULL_NO_FMT
//
// MessageText:
//
//  Your C: drive is too full to contain Windows NT startup files.
//  You must have at least %1!u! kilobytes (1 KB = 1024 bytes) of
//  disk space on C: to install Windows NT.
//  
//  You must exit Setup and free some space on your C: drive.
//  
//       To exit Setup, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_C_FULL_NO_FMT            0x000023A3L

//
// MessageId: SP_SCRN_WINNT_UPGRADE
//
// MessageText:
//
//  Setup has found Windows NT on your hard disk in the directory
//  shown below.
//  
//      %1:%2 %3
//  
//  Setup recommends upgrading this Windows NT installation to
//  Microsoft Windows NT version 3.5. Upgrading will preserve
//  user account and security information, user preferences,
//  and other configuration information.
//  
//  
//        To upgrade Windows NT in the directory shown above,
//         press ENTER.
//  
//        To cancel upgrade and install a fresh copy of Windows NT,
//         press N.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_UPGRADE            0x000023BEL

//
// MessageId: SP_SCRN_WINNT_DRIVE_FULL
//
// MessageText:
//
//  Setup has found Windows NT on your hard disk in the directory
//  shown below.
//  
//      %1:%2 %3
//  
//  Setup recommends upgrading this Windows NT installation to Microsoft
//  Windows NT version 3.5. Upgrading will preserve user account and
//  security information, user preferences, and other configuration
//  information. However, there is not enough free disk space
//  to upgrade.
//  
//      Drive       Space Required(KB)     Free Space Available(KB)
//      --------    ------------------     ------------------------
//      %4          %5                     %6
//      %7          %8                     %9
//  
//  
//        If you want to upgrade, press F3 to exit Setup. Delete any unneeded
//         files to create the required free space and then start Setup again.
//  
//        To cancel upgrade and install a fresh copy of Windows NT,
//         press N.
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_DRIVE_FULL         0x000023BFL

//
// MessageId: SP_SCRN_WINNT_FAILED_UPGRADE
//
// MessageText:
//
//  Setup has found Windows NT on your hard disk in the directory
//  shown below.
//  
//      %1:%2 %3
//  
//  Setup has also determined that you attempted unsuccessfully to upgrade
//  this installation to Microsoft Windows NT version 3.5. Setup can
//  try again to complete the upgrade or you may choose to cancel upgrade.
//  
//  
//        To try again to upgrade Windows NT in the directory
//         shown above, press ENTER.
//  
//        To cancel upgrade and install a fresh copy of Windows NT,
//         press N.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_FAILED_UPGRADE     0x000023C0L

//
// MessageId: SP_SCRN_WINNT_DRIVE_FULL1
//
// MessageText:
//
//  You have chosen to install Microsoft Windows NT version 3.5
//  in the directory shown below.
//  
//      %1:%2 %3
//  
//  However, there is not enough free disk space to do so. Exit Setup
//  and create the space required.
//  
//      Drive       Space Required(KB)     Free Space Available(KB)
//      --------    ------------------     ------------------------
//      %4          %5                     %6
//      %7          %8                     %9
//  
//  
//        To exit Setup, press F3. Delete any unneeded files to create
//         the free space required and then retry the current selection.
//  
//        To cancel the current selection, press ESC.
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_DRIVE_FULL1        0x000023C1L

//
// MessageId: SP_SCRN_WINNT_FAILED_UPGRADE1
//
// MessageText:
//
//  You have chosen to upgrade the version of Windows NT
//  on your hard disk in the directory shown below.
//  
//      %1:%2 %3
//  
//  Setup has also determined that you attempted unsuccessfully to upgrade
//  this installation to Microsoft Windows NT version 3.5. Setup can
//  try again to complete the upgrade, or you may choose to cancel upgrade.
//  
//  
//        To try again to upgrade the Windows NT installation in the directory
//         shown above, press ENTER.
//  
//        To cancel the current selection, press ESC.
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_FAILED_UPGRADE1    0x000023C2L

//
// MessageId: SP_SCRN_WINNT_UPGRADE_LIST
//
// MessageText:
//
//  The list below shows the Windows NT installations on your computer
//  that can be upgraded to Microsoft Windows NT version 3.5.
//  
//  Use the UP and DOWN ARROW keys to move the highlight to an item
//  in the list.
//  
//        To upgrade the highlighted Windows NT installation, press ENTER.
//  
//        To cancel the upgrade and install a fresh copy of Windows NT,
//         press N.
//  
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_UPGRADE_LIST       0x000023C3L

//
// MessageId: SP_SCRN_DELETE_FAILED
//
// MessageText:
//
//  Setup was unable to delete the file %1.
//  
//  NOTE: This error will not prevent Setup from completing successfully.
//  
//     To skip this operation, press ESC (recommended).
//  
//     To retry deleting this file, press ENTER.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_DELETE_FAILED            0x000023C4L

//
// MessageId: SP_SCRN_BACKUP_FAILED
//
// MessageText:
//
//  Setup was unable to back up the file %1 to %2.
//  
//  NOTE: This error will not prevent Setup from completing successfully.
//  
//     To skip this operation, press ESC (recommended).
//  
//     To retry backing up this file, press ENTER.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_BACKUP_FAILED            0x000023C5L

//
// MessageId: SP_SCRN_UPGRADE_STATUS_FAILED
//
// MessageText:
//
//  Setup was unable to mark the upgrade progress status in your target
//  configuration.
//  
//  NOTE: This error will not prevent Setup from completing successfully.
//  
//     To skip this operation, press ESC (recommended).
//  
//     To retry marking the upgrade progress status, press ENTER.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_UPGRADE_STATUS_FAILED    0x000023C6L

//
// MessageId: SP_SCRN_COPY_KEY_FAILED
//
// MessageText:
//
//  Setup was unable to copy the following key into your registry:
//  
//  %1\%2
//  
//  NOTE: Setup may not be able to upgrade your system properly.
//  Retry this operation and if it continues to fail press F3
//  to exit Setup.
//  
//     To retry copying the key, press ENTER.
//  
//     To skip this operation, press ESC.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_COPY_KEY_FAILED          0x000023C7L

//
// MessageId: SP_SCRN_SAVE_PERFLIB_FAILED
//
// MessageText:
//
//  Setup was unable to save data used by the performance library subsystem.
//  
//  NOTE: This error will not prevent Setup from completing successfully.
//  
//     To skip this operation, press ESC (recommended).
//  
//     To retry saving the performance library data, press ENTER.
//  
//     To exit Setup, press F3.
//  
//  
//  
//  
//  
//
#define SP_SCRN_SAVE_PERFLIB_FAILED      0x000023C8L

//
// MessageId: SP_SCRN_WINNT_REPAIR
//
// MessageText:
//
//  Setup has found Windows NT on your hard disk in the directory
//  shown below.
//  
//  
//      %1!c!:%2 %3
//  
//  
//  
//        To repair the Windows NT installation shown above, press ENTER.
//  
//        To return to the previous screen, press ESC.
//  
//        To exit Setup, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_REPAIR             0x000023C9L

//
// MessageId: SP_SCRN_WINNT_REPAIR_LIST
//
// MessageText:
//
//  The list below shows the Windows NT installations on your computer
//  that may be repaired.
//  
//  Use the UP and DOWN ARROW keys to move the highlight to an item
//  in the list.
//  
//        To repair the highlighted Windows NT installation, press ENTER.
//  
//        To return to the previous screen, press ESC.
//  
//        To exit Setup, press F3.
//  
//  
//  
//  
//
#define SP_SCRN_WINNT_REPAIR_LIST        0x000023CAL

//
// MessageId: SP_SCRN_REPAIR_MENU
//
// MessageText:
//
//  As part of the repair process, Setup will perform each optional task
//  shown below with an 'X' in its check box.
//  
//  To perform the selected tasks, press ENTER to indicate "Continue."
//  If you want to select or deselect any item in the list, press the
//  UP or DOWN ARROW key to move the highlight to the item you want
//  to change. Then press ENTER.
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_MENU              0x000023CBL

//
// MessageId: SP_SCRN_REPAIR_CHECK_HIVES
//
// MessageText:
//
//  Please wait while Setup inspects your Windows NT configuration.
//  
//
#define SP_SCRN_REPAIR_CHECK_HIVES       0x000023CCL

//
// MessageId: SP_SCRN_REPAIR_HIVE_MENU
//
// MessageText:
//
//  Setup will restore each registry file shown below with an 'X' in
//  its check box.
//  
//  To restore the selected files, press ENTER to indicate "Continue."
//  If you want to select or deselect any item in the list, press the
//  UP or DOWN ARROW key to move the highlight to the item you want
//  to change. Then press ENTER.
//  
//  WARNING: Restore a registry file only as a last resort.
//  Existing configuration may be lost. Press F1 for more information.
//  
//  
//  
//  
//  
//
#define SP_SCRN_REPAIR_HIVE_MENU         0x000023CDL

//
// MessageId: SP_SCRN_REPAIR_HIVE_FAIL
//
// MessageText:
//
//  Setup was unable to restore your registry.  The Emergency Repair Disk
//  may be damaged, or the disk volume containing Windows NT may be
//  damaged beyond repair.
//  
//       Press ENTER to continue Setup repair.
//  
//       Press F3 to quit Setup repair.
//  
//  
//
#define SP_SCRN_REPAIR_HIVE_FAIL         0x000023CEL

//
// MessageId: SP_SCRN_SINGLE_UPGRADE_WINNT_TO_AS
//
// MessageText:
//
//  The existing Windows NT installation is a Windows NT Workstation.
//  Upgrading will make it a Windows NT Server that cannot be
//  a Primary or Backup Domain Controller.
//  
//  
//        To upgrade the Windows NT Workstation to a Windows NT Server,
//         press ENTER.
//  
//        To cancel upgrade and install a new copy of Windows NT Server,
//         press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_SINGLE_UPGRADE_WINNT_TO_AS 0x000023CFL

//
// MessageId: SP_SCRN_MULTI_UPGRADE_WINNT_TO_AS
//
// MessageText:
//
//  The existing Windows NT installation you chose to upgrade is a
//  Windows NT Workstation. Upgrading will make it a Windows NT Server
//  that cannot be a Primary or Backup Domain Controller.
//  
//  
//        To upgrade the Windows NT Workstation to a Windows NT Server,
//         press ENTER.
//  
//        To select another installation to upgrade, or to install a new
//         copy of Windows NT Server, press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_MULTI_UPGRADE_WINNT_TO_AS 0x000023D0L

//
// MessageId: SP_SCRN_KBD_OPEN_FAILED
//
// MessageText:
//
//  Setup did not find a keyboard connected to your computer.
//  
//  Power down your computer and check to make sure that the keyboard
//  cable is properly connected. If the problem persists, your keyboard
//  or computer may need repairs.
//  
//  Setup cannot continue. Power down your computer now.
//  
//  
//  
//  
//  
//
#define SP_SCRN_KBD_OPEN_FAILED          0x000023D1L

//
// MessageId: SP_SCRN_KBD_LAYOUT_FAILED
//
// MessageText:
//
//  Setup could not load the keyboard layout file %1.
//  
//  Setup cannot continue. Power down or reboot your computer now.
//  
//  
//
#define SP_SCRN_KBD_LAYOUT_FAILED        0x000023D2L

//
// MessageId: SP_SCRN_RUNNING_AUTOCHK
//
// MessageText:
//
//  Please wait while setup examines your disk(s). This may take
//  several minutes.
//  
//
#define SP_SCRN_RUNNING_AUTOCHK          0x000023D3L

//
// MessageId: SP_SCRN_FATAL_ERROR_AUTOCHK_FAILED
//
// MessageText:
//
//  Setup has determined that your drive %1 is corrupt.
//  
//  Setup cannot continue. Press F3 to exit.
//  
//
#define SP_SCRN_FATAL_ERROR_AUTOCHK_FAILED 0x000023D4L

//
// MessageId: SP_SCRN_CONFIRM_RUN_AUTOCHK
//
// MessageText:
//
//  Setup will now examine your hard disk(s) for corruption.
//  
//  In addition to a basic examination, Setup can perform a more exhaustive
//  secondary examination on some drives. This can be a time consuming
//  operation, especially on large or very full drives.
//  
//  
//        To allow Setup to perform an exhaustive secondary examination of
//         your hard disk(s), press ENTER.
//  
//        To skip the exhaustive examination, press ESC.
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_RUN_AUTOCHK      0x000023D5L

//
// MessageId: SP_SCRN_CANT_RUN_AUTOCHK
//
// MessageText:
//
//  Setup was unable to verify your %1 drive.
//  
//  Note that this message does not necessarily indicate an error condition
//  in your disk. It is intended to warn you that your boot floppy may have
//  a corrupt file, or that your computer is low in memory.
//  
//  Press ENTER to continue.
//  
//  
//  
//  
//
#define SP_SCRN_CANT_RUN_AUTOCHK         0x000023D6L

//
// Screens added to support Double Space
// (9500 =< id < 10000 )
//
//
// MessageId: SP_SCRN_CONFIRM_REMOVE_PARTITION_COMPRESSED
//
// MessageText:
//
//  You have asked Setup to remove the partition
//  
//     %1
//  
//  on %2.
//  
//  WARNING: This partition contains %3!u! compressed drive(s). Deleting this
//  partition will also delete its compressed drive(s).
//  
//       To delete this partition, press L.
//        WARNING: All data on the partition will be lost.
//  
//       To return to the previous screen without
//        deleting the partition, press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_REMOVE_PARTITION_COMPRESSED 0x0000251CL

//
// MessageId: SP_SCRN_CONFIRM_FORMAT_COMPRESSED
//
// MessageText:
//
//  WARNING: This partition contains %3!u! compressed drive(s). Formatting this
//  drive will erase all data currently stored on it, including its compressed
//  drive(s).
//  Please confirm that you want to format
//  
//  %1
//  
//  on %2.
//  
//        To format the drive, press F.
//  
//        To select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_FORMAT_COMPRESSED 0x0000251DL

//
// MessageId: SP_SCRN_CONFIRM_CONVERT_COMPRESSED
//
// MessageText:
//
//  WARNING: This partition contains %3!u! compressed drive(s). Converting this
//  drive to NTFS will render the drive and its compressed drive(s) inaccessable
//  to operating systems other than Windows NT.
//  
//  Do not convert the drive to NTFS if you require access to the drive
//  when using other operating systems, such as MS-DOS, Windows, or OS/2.
//  
//  Please confirm that you want to convert
//  
//  %1
//  
//  on %2.
//  
//        To convert the drive to NTFS, press C.
//  
//        To select a different partition for Windows NT, press ESC.
//  
//  
//  
//  
//  
//  
//  
//
#define SP_SCRN_CONFIRM_CONVERT_COMPRESSED 0x0000251EL

//
// Text that represents options that are displayed in the status line
// go here (id >= 10000).
//
//
// MessageId: SP_STAT_F1_EQUALS_HELP
//
// MessageText:
//
//  F1=Help%0
//
#define SP_STAT_F1_EQUALS_HELP           0x00002710L

//
// MessageId: SP_STAT_F3_EQUALS_EXIT
//
// MessageText:
//
//  F3=Exit%0
//
#define SP_STAT_F3_EQUALS_EXIT           0x00002711L

//
// MessageId: SP_STAT_ENTER_EQUALS_CONTINUE
//
// MessageText:
//
//  ENTER=Continue%0
//
#define SP_STAT_ENTER_EQUALS_CONTINUE    0x00002712L

//
// MessageId: SP_STAT_ESC_EQUALS_AUX
//
// MessageText:
//
//  ESC=More Options%0
//
#define SP_STAT_ESC_EQUALS_AUX           0x00002713L

//
// MessageId: SP_STAT_ENTER_EQUALS_EXPRESS
//
// MessageText:
//
//  ENTER=Express Setup%0
//
#define SP_STAT_ENTER_EQUALS_EXPRESS     0x00002714L

//
// MessageId: SP_STAT_C_EQUALS_CUSTOM
//
// MessageText:
//
//  C=Custom Setup%0
//
#define SP_STAT_C_EQUALS_CUSTOM          0x00002715L

//
// MessageId: SP_STAT_C_EQUALS_CREATE_PARTITION
//
// MessageText:
//
//  C=Create Partition%0
//
#define SP_STAT_C_EQUALS_CREATE_PARTITION 0x00002716L

//
// MessageId: SP_STAT_D_EQUALS_DELETE_PARTITION
//
// MessageText:
//
//  D=Delete Partition%0
//
#define SP_STAT_D_EQUALS_DELETE_PARTITION 0x00002717L

//
// MessageId: SP_STAT_ENTER_EQUALS_INSTALL
//
// MessageText:
//
//  ENTER=Install%0
//
#define SP_STAT_ENTER_EQUALS_INSTALL     0x00002718L

//
// MessageId: SP_STAT_L_EQUALS_DELETE
//
// MessageText:
//
//  L=Delete%0
//
#define SP_STAT_L_EQUALS_DELETE          0x00002719L

//
// MessageId: SP_STAT_ESC_EQUALS_CANCEL
//
// MessageText:
//
//  ESC=Cancel%0
//
#define SP_STAT_ESC_EQUALS_CANCEL        0x0000271BL

//
// MessageId: SP_STAT_ENTER_EQUALS_CREATE
//
// MessageText:
//
//  ENTER=Create%0
//
#define SP_STAT_ENTER_EQUALS_CREATE      0x0000271CL

//
// MessageId: SP_STAT_C_EQUALS_CONTINUE_SETUP
//
// MessageText:
//
//  C=Continue Setup%0
//
#define SP_STAT_C_EQUALS_CONTINUE_SETUP  0x0000271DL

//
// MessageId: SP_STAT_ENTER_EQUALS_RESTART
//
// MessageText:
//
//  ENTER=Restart Computer%0
//
#define SP_STAT_ENTER_EQUALS_RESTART     0x0000271EL

//
// MessageId: SP_STAT_F_EQUALS_FORMAT
//
// MessageText:
//
//  F=Format%0
//
#define SP_STAT_F_EQUALS_FORMAT          0x0000271FL

//
// MessageId: SP_STAT_C_EQUALS_CONVERT
//
// MessageText:
//
//  C=Convert%0
//
#define SP_STAT_C_EQUALS_CONVERT         0x00002720L

//
// MessageId: SP_STAT_EXAMINING_DISK_CONFIG
//
// MessageText:
//
//  Examining disk configuration...%0
//
#define SP_STAT_EXAMINING_DISK_CONFIG    0x00002721L

//
// MessageId: SP_STAT_ENTER_EQUALS_SELECT
//
// MessageText:
//
//  ENTER=Select%0
//
#define SP_STAT_ENTER_EQUALS_SELECT      0x00002722L

//
// MessageId: SP_STAT_R_EQUALS_REMOVE_FILES
//
// MessageText:
//
//  R=Remove Files%0
//
#define SP_STAT_R_EQUALS_REMOVE_FILES    0x00002723L

//
// MessageId: SP_STAT_REMOVING
//
// MessageText:
//
//  Removing:%0
//
#define SP_STAT_REMOVING                 0x00002724L

//
// MessageId: SP_STAT_UPDATING_DISK
//
// MessageText:
//
//  Updating %1...%0
//
#define SP_STAT_UPDATING_DISK            0x00002725L

//
// MessageId: SP_STAT_LOOKING_FOR_WIN31
//
// MessageText:
//
//  Searching for previous versions of Microsoft Windows...%0
//
#define SP_STAT_LOOKING_FOR_WIN31        0x00002726L

//
// MessageId: SP_STAT_N_EQUALS_NEW_PATH
//
// MessageText:
//
//  N=Different Directory%0
//
#define SP_STAT_N_EQUALS_NEW_PATH        0x00002727L

//
// MessageId: SP_STAT_EXAMINING_DISK_N
//
// MessageText:
//
//  Examining %1...%0
//
#define SP_STAT_EXAMINING_DISK_N         0x00002728L

//
// MessageId: SP_STAT_ESC_EQUALS_NEW_PATH
//
// MessageText:
//
//  ESC=Different Directory%0
//
#define SP_STAT_ESC_EQUALS_NEW_PATH      0x00002729L

//
// MessageId: SP_STAT_PLEASE_WAIT
//
// MessageText:
//
//  Please wait...%0
//
#define SP_STAT_PLEASE_WAIT              0x0000272AL

//
// MessageId: SP_STAT_S_EQUALS_SKIP_DETECTION
//
// MessageText:
//
//  S=Skip Detection%0
//
#define SP_STAT_S_EQUALS_SKIP_DETECTION  0x0000272BL

//
// MessageId: SP_STAT_LOADING_DRIVER
//
// MessageText:
//
//  Loading device driver (%1)...%0
//
#define SP_STAT_LOADING_DRIVER           0x0000272CL

//
// MessageId: SP_STAT_S_EQUALS_SCSI_ADAPTER
//
// MessageText:
//
//  S=Specify Additional Device%0
//
#define SP_STAT_S_EQUALS_SCSI_ADAPTER    0x0000272DL

//
// MessageId: SP_STAT_CREATING_DIRS
//
// MessageText:
//
//  Creating directory %1...%0
//
#define SP_STAT_CREATING_DIRS            0x0000272EL

//
// MessageId: SP_STAT_ENTER_EQUALS_RETRY
//
// MessageText:
//
//  ENTER=Retry%0
//
#define SP_STAT_ENTER_EQUALS_RETRY       0x0000272FL

//
// MessageId: SP_STAT_ESC_EQUALS_SKIP_FILE
//
// MessageText:
//
//  ESC=Skip File%0
//
#define SP_STAT_ESC_EQUALS_SKIP_FILE     0x00002730L

//
// MessageId: SP_STAT_BUILDING_COPYLIST
//
// MessageText:
//
//  Building list of files to be copied...%0
//
#define SP_STAT_BUILDING_COPYLIST        0x00002731L

//
// MessageId: SP_STAT_COPYING
//
// MessageText:
//
//  Copying:%0
//
#define SP_STAT_COPYING                  0x00002732L

//
// MessageId: SP_STAT_LOADING_SIF
//
// MessageText:
//
//  Loading information file %1...%0
//
#define SP_STAT_LOADING_SIF              0x00002733L

//
// MessageId: SP_STAT_REG_LOADING_HIVES
//
// MessageText:
//
//  Loading default configuration...%0
//
#define SP_STAT_REG_LOADING_HIVES        0x00002734L

//
// MessageId: SP_STAT_REG_SAVING_HIVES
//
// MessageText:
//
//  Saving configuration...%0
//
#define SP_STAT_REG_SAVING_HIVES         0x00002735L

//
// MessageId: SP_STAT_REG_DOING_HIVES
//
// MessageText:
//
//  Initializing configuration...%0
//
#define SP_STAT_REG_DOING_HIVES          0x00002736L

//
// MessageId: SP_STAT_INITING_FLEXBOOT
//
// MessageText:
//
//  Setting startup configuration...%0
//
#define SP_STAT_INITING_FLEXBOOT         0x00002737L

//
// MessageId: SP_STAT_UPDATING_NVRAM
//
// MessageText:
//
//  Updating startup environment...%0
//
#define SP_STAT_UPDATING_NVRAM           0x00002738L

//
// MessageId: SP_STAT_SHUTTING_DOWN
//
// MessageText:
//
//  Restarting computer...%0
//
#define SP_STAT_SHUTTING_DOWN            0x00002739L

//
// MessageId: SP_STAT_PROCESSING_SIF
//
// MessageText:
//
//  Processing information file...%0
//
#define SP_STAT_PROCESSING_SIF           0x0000273AL

//
// MessageId: SP_STAT_DOING_NTBOOTDD
//
// MessageText:
//
//  Initializing SCSI startup configuration...%0
//
#define SP_STAT_DOING_NTBOOTDD           0x0000273BL

//
// MessageId: SP_STAT_LOOKING_FOR_WINNT
//
// MessageText:
//
//  Searching for previous versions of Microsoft Windows NT...%0
//
#define SP_STAT_LOOKING_FOR_WINNT        0x0000274CL

//
// MessageId: SP_STAT_EXAMINING_FLEXBOOT
//
// MessageText:
//
//  Examining startup environment...%0
//
#define SP_STAT_EXAMINING_FLEXBOOT       0x0000274DL

//
// MessageId: SP_STAT_DELETING_FILE
//
// MessageText:
//
//  Deleting file %1...%0
//
#define SP_STAT_DELETING_FILE            0x0000274EL

//
// MessageId: SP_STAT_CLEANING_FLEXBOOT
//
// MessageText:
//
//  Cleaning startup configuration...%0
//
#define SP_STAT_CLEANING_FLEXBOOT        0x0000274FL

//
// MessageId: SP_STAT_ENTER_EQUALS_UPGRADE
//
// MessageText:
//
//  ENTER=Upgrade%0
//
#define SP_STAT_ENTER_EQUALS_UPGRADE     0x00002750L

//
// MessageId: SP_STAT_O_EQUALS_OVERWRITE
//
// MessageText:
//
//  O=Overwrite%0
//
#define SP_STAT_O_EQUALS_OVERWRITE       0x00002751L

//
// MessageId: SP_STAT_BACKING_UP_FILE
//
// MessageText:
//
//  Backing up file %1 to %2...%0
//
#define SP_STAT_BACKING_UP_FILE          0x00002752L

//
// MessageId: SP_STAT_ESC_EQUALS_SKIP_OPERATION
//
// MessageText:
//
//  ESC=Skip Operation%0
//
#define SP_STAT_ESC_EQUALS_SKIP_OPERATION 0x00002753L

//
// MessageId: SP_STAT_N_EQUALS_NEW_VERSION
//
// MessageText:
//
//  N=New Version%0
//
#define SP_STAT_N_EQUALS_NEW_VERSION     0x00002754L

//
// MessageId: SP_STAT_ENTER_EQUALS_CONTINUE_HELP
//
// MessageText:
//
//  ENTER=Continue Reading Help%0
//
#define SP_STAT_ENTER_EQUALS_CONTINUE_HELP 0x00002755L

//
// MessageId: SP_STAT_BACKSP_EQUALS_PREV_HELP
//
// MessageText:
//
//  BACKSPACE=Read Last Help%0
//
#define SP_STAT_BACKSP_EQUALS_PREV_HELP  0x00002756L

//
// MessageId: SP_STAT_ESC_EQUALS_CANCEL_HELP
//
// MessageText:
//
//  ESC=Cancel Help%0
//
#define SP_STAT_ESC_EQUALS_CANCEL_HELP   0x00002757L

//
// MessageId: SP_STAT_LOADING_KBD_LAYOUT
//
// MessageText:
//
//  Loading Keyboard Layout Library %1...%0
//
#define SP_STAT_LOADING_KBD_LAYOUT       0x00002758L

//
// MessageId: SP_STAT_R_EQUALS_REPAIR
//
// MessageText:
//
//  R=Repair%0
//
#define SP_STAT_R_EQUALS_REPAIR          0x00002759L

//
// MessageId: SP_STAT_ENTER_EQUALS_REPAIR
//
// MessageText:
//
//  ENTER=Repair%0
//
#define SP_STAT_ENTER_EQUALS_REPAIR      0x0000275AL

//
// MessageId: SP_STAT_EXAMINING_WINNT
//
// MessageText:
//
//  Examining %1...%0
//
#define SP_STAT_EXAMINING_WINNT          0x0000275BL

//
// MessageId: SP_STAT_REPAIR_WINNT
//
// MessageText:
//
//  Repairing %1 ...%0
//
#define SP_STAT_REPAIR_WINNT             0x0000275CL

//
// MessageId: SP_STAT_A_EQUALS_REPAIR_ALL
//
// MessageText:
//
//  A=Repair All%0
//
#define SP_STAT_A_EQUALS_REPAIR_ALL      0x0000275DL

//
// MessageId: SP_STAT_ENTER_EQUALS_CHANGE
//
// MessageText:
//
//  ENTER=Select/Deselect%0
//
#define SP_STAT_ENTER_EQUALS_CHANGE      0x0000275EL

//
// MessageId: SP_STAT_ENTER_EQUALS_CDROM
//
// MessageText:
//
//  ENTER=CD-ROM Drive%0
//
#define SP_STAT_ENTER_EQUALS_CDROM       0x0000275FL

//
// MessageId: SP_STAT_A_EQUALS_DRIVE_A
//
// MessageText:
//
//  A=Drive A:%0
//
#define SP_STAT_A_EQUALS_DRIVE_A         0x00002760L

//
// MessageId: SP_STAT_B_EQUALS_DRIVE_B
//
// MessageText:
//
//  B=Drive B:%0
//
#define SP_STAT_B_EQUALS_DRIVE_B         0x00002761L

//
// MessageId: SP_STAT_PREPARING_UPGRADE_PRINTER
//
// MessageText:
//
//  Preparing to upgrade printer file %1...%0
//
#define SP_STAT_PREPARING_UPGRADE_PRINTER 0x00002762L

//
// MessageId: SP_STAT_KBD_HARD_REBOOT
//
// MessageText:
//
//  Power Down Computer%0
//
#define SP_STAT_KBD_HARD_REBOOT          0x00002763L

//
// MessageId: SP_STAT_CHECKING_DRIVE
//
// MessageText:
//
//  Checking drive %1...%0
//
#define SP_STAT_CHECKING_DRIVE           0x00002764L

//
// Header text goes here (id >= 11000).
//
//
// MessageId: SP_HEAD_WINDOWS_NT_SETUP
//
// MessageText:
//
//  
//   Windows NT Workstation Setup
//                            //
#define SP_HEAD_WINDOWS_NT_SETUP         0x00002AF8L

//
// MessageId: SP_HEAD_ADVANCED_SERVER_SETUP
//
// MessageText:
//
//  
//   Windows NT Server Setup
//                       //
#define SP_HEAD_ADVANCED_SERVER_SETUP    0x00002AF9L

//
// MessageId: SP_HEAD_HELP
//
// MessageText:
//
//  
//   Setup Help
//          //
#define SP_HEAD_HELP                     0x00002AFAL

//
// Miscellaneous text goes here (id >= 12000).
//
//
// MessageId: SP_TEXT_UNKNOWN_DISK_0
//
// MessageText:
//
//  Unknown Disk%0
//
#define SP_TEXT_UNKNOWN_DISK_0           0x00002EE0L

//
// MessageId: SP_TEXT_UNKNOWN_DISK_1
//
// MessageText:
//
//  %1!u! MB Disk on Unknown Adapter%0
//
#define SP_TEXT_UNKNOWN_DISK_1           0x00002EE1L

//
// MessageId: SP_TEXT_DISK_OFF_LINE
//
// MessageText:
//
//  (Setup is unable to access this disk.)%0
//
#define SP_TEXT_DISK_OFF_LINE            0x00002EE2L

//
// MessageId: SP_TEXT_REGION_DESCR_1
//
// MessageText:
//
//  %1  %2!-35.35s!%3!5u! MB ( %4!5u! MB free)%0
//
#define SP_TEXT_REGION_DESCR_1           0x00002EE3L

//
// MessageId: SP_TEXT_REGION_DESCR_1a
//
// MessageText:
//
//  %1  %2!-35.35s!%3!5u! MB ( %4!5u! KB free)%0
//
#define SP_TEXT_REGION_DESCR_1a          0x00002EE4L

//
// MessageId: SP_TEXT_REGION_DESCR_2
//
// MessageText:
//
//  %1  %2!-35.35s!%3!5u! MB%0
//
#define SP_TEXT_REGION_DESCR_2           0x00002EE5L

//
// MessageId: SP_TEXT_REGION_DESCR_3
//
// MessageText:
//
//      Unpartitioned space                %1!5u! MB%0
//
#define SP_TEXT_REGION_DESCR_3           0x00002EE6L

//
// MessageId: SP_TEXT_SIZE_PROMPT
//
// MessageText:
//
//  Create partition of size (in MB):%0
//
#define SP_TEXT_SIZE_PROMPT              0x00002EE7L

//
// MessageId: SP_TEXT_SETUP_IS_FORMATTING
//
// MessageText:
//
//  Setup is formatting...%0
//
#define SP_TEXT_SETUP_IS_FORMATTING      0x00002EE8L

//
// MessageId: SP_TEXT_SETUP_IS_REMOVING_FILES
//
// MessageText:
//
//  Setup is removing files...%0
//
#define SP_TEXT_SETUP_IS_REMOVING_FILES  0x00002EE9L

//
// MessageId: SP_TEXT_HARD_DISK_NO_MEDIA
//
// MessageText:
//
//  (There is no media in this drive.)%0
//
#define SP_TEXT_HARD_DISK_NO_MEDIA       0x00002EEAL

//
// MessageId: SP_TEXT_PARTITION_NAME_BASE
//
// MessageText:
//
//  XENIX%0
//
#define SP_TEXT_PARTITION_NAME_BASE      0x00002F44L

#define SP_TEXT_PARTITION_NAME_XENIX SP_TEXT_PARTITION_NAME_BASE
//
// MessageId: SP_TEXT_PARTITION_NAME_BOOTMANAGER
//
// MessageText:
//
//  OS/2 Boot Manager%0
//
#define SP_TEXT_PARTITION_NAME_BOOTMANAGER 0x00002F45L

//
// MessageId: SP_TEXT_PARTITION_NAME_EISA
//
// MessageText:
//
//  EISA Utilities%0
//
#define SP_TEXT_PARTITION_NAME_EISA      0x00002F46L

//
// MessageId: SP_TEXT_PARTITION_NAME_UNIX
//
// MessageText:
//
//  Unix%0
//
#define SP_TEXT_PARTITION_NAME_UNIX      0x00002F47L

//
// MessageId: SP_TEXT_PARTITION_NAME_NTFT
//
// MessageText:
//
//  Windows NT Fault Tolerance%0
//
#define SP_TEXT_PARTITION_NAME_NTFT      0x00002F48L

//
// MessageId: SP_TEXT_PARTITION_NAME_XENIXTABLE
//
// MessageText:
//
//  XENIX Table%0
//
#define SP_TEXT_PARTITION_NAME_XENIXTABLE 0x00002F49L

//
// MessageId: SP_TEXT_PARTITION_NAME_UNK
//
// MessageText:
//
//  Unknown%0
//
#define SP_TEXT_PARTITION_NAME_UNK       0x00002F4AL

//
// MessageId: SP_TEXT_FAT_FORMAT
//
// MessageText:
//
//  Format the partition using the FAT file system%0
//
#define SP_TEXT_FAT_FORMAT               0x00002F4BL

//
// MessageId: SP_TEXT_NTFS_FORMAT
//
// MessageText:
//
//  Format the partition using the NTFS file system%0
//
#define SP_TEXT_NTFS_FORMAT              0x00002F4CL

//
// MessageId: SP_TEXT_NTFS_CONVERT
//
// MessageText:
//
//  Convert the partition to NTFS%0
//
#define SP_TEXT_NTFS_CONVERT             0x00002F4DL

//
// MessageId: SP_TEXT_DO_NOTHING
//
// MessageText:
//
//  Leave the current file system intact (no changes)%0
//
#define SP_TEXT_DO_NOTHING               0x00002F4EL

//
// MessageId: SP_TEXT_REMOVE_NO_FILES
//
// MessageText:
//
//  Do not remove any files%0
//
#define SP_TEXT_REMOVE_NO_FILES          0x00002F4FL

//
// MessageId: SP_TEXT_ANGLED_NONE
//
// MessageText:
//
//  <none>
//
#define SP_TEXT_ANGLED_NONE              0x00002F50L

//
// MessageId: SP_TEXT_DBLSPACE_FORMAT
//
// MessageText:
//
//  %0
//
#define SP_TEXT_DBLSPACE_FORMAT          0x00002F51L

//
// Do not change the order of SP_TEXT_FS_NAME_xxx without
// also changing the FilesystemType enum!
//
//
// MessageId: SP_TEXT_FS_NAME_BASE
//
// MessageText:
//
//  Unformatted or Damaged%0
//
#define SP_TEXT_FS_NAME_BASE             0x00002FA8L

//
// MessageId: SP_TEXT_FS_NAME_1
//
// MessageText:
//
//  New (Unformatted)%0
//
#define SP_TEXT_FS_NAME_1                0x00002FA9L

//
// MessageId: SP_TEXT_FS_NAME_2
//
// MessageText:
//
//  FAT%0
//
#define SP_TEXT_FS_NAME_2                0x00002FAAL

//
// MessageId: SP_TEXT_FS_NAME_3
//
// MessageText:
//
//  NTFS%0
//
#define SP_TEXT_FS_NAME_3                0x00002FABL

//
// MessageId: SP_TEXT_FS_NAME_4
//
// MessageText:
//
//  HPFS%0
//
#define SP_TEXT_FS_NAME_4                0x00002FACL

//
// MessageId: SP_TEXT_UNKNOWN
//
// MessageText:
//
//  Unknown%0
//
#define SP_TEXT_UNKNOWN                  0x00002FADL

//
// MessageId: SP_TEXT_LIST_MATCHES
//
// MessageText:
//
//  The above list matches my computer.%0
//
#define SP_TEXT_LIST_MATCHES             0x00002FAEL

//
// MessageId: SP_TEXT_OTHER_HARDWARE
//
// MessageText:
//
//  Other (Requires disk provided by a hardware manufacturer)%0
//
#define SP_TEXT_OTHER_HARDWARE           0x00002FAFL

//
// MessageId: SP_TEXT_OEM_DISK_NAME
//
// MessageText:
//
//  Manufacturer-supplied hardware support disk%0
//
#define SP_TEXT_OEM_DISK_NAME            0x00002FB0L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_0
//
// MessageText:
//
//  Setup was unable to load the file.
//  
//
#define SP_TEXT_OEM_INF_ERROR_0          0x00002FB1L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_1
//
// MessageText:
//
//  The disk contains no support files for the component you are
//  attempting to change.
//  
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_1          0x00002FB2L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_2
//
// MessageText:
//
//  Syntax error on line %2!u! in section
//  %1
//  
//
#define SP_TEXT_OEM_INF_ERROR_2          0x00002FB3L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_3
//
// MessageText:
//
//  Section %1
//  missing or empty.
//  
//
#define SP_TEXT_OEM_INF_ERROR_3          0x00002FB4L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_4
//
// MessageText:
//
//  Unknown file type specified on line %2!u! in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_4          0x00002FB5L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_5
//
// MessageText:
//
//  Bad source disk specified on line %2!u! in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_5          0x00002FB6L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_6
//
// MessageText:
//
//  Unknown registry value type specified on line %2!u! in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_6          0x00002FB7L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_7
//
// MessageText:
//
//  Badly formed registry data on line %2!u! in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_7          0x00002FB8L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_8
//
// MessageText:
//
//  Missing <configname> (field 3) on line %2!u! in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_8          0x00002FB9L

//
// MessageId: SP_TEXT_OEM_INF_ERROR_9
//
// MessageText:
//
//  Illegal or missing file types specified in section
//  %1.
//  
//  
//
#define SP_TEXT_OEM_INF_ERROR_9          0x00002FBAL

//
// MessageId: SP_TEXT_OEM_INF_ERROR_A
//
// MessageText:
//
//  Line %2!u! contains a syntax error.
//  
//
#define SP_TEXT_OEM_INF_ERROR_A          0x00002FBBL

//
// MessageId: SP_TEXT_MORE_UP
//
// MessageText:
//
//  (More )%0
//
#define SP_TEXT_MORE_UP                  0x00002FBCL

//
// MessageId: SP_TEXT_MORE_DOWN
//
// MessageText:
//
//  (More )%0
//
#define SP_TEXT_MORE_DOWN                0x00002FBDL

//
// MessageId: SP_TEXT_FOUND_ADAPTER
//
// MessageText:
//
//  Found: %1%0
//
#define SP_TEXT_FOUND_ADAPTER            0x00002FBEL

//
// MessageId: SP_TEXT_SETUP_IS_COPYING
//
// MessageText:
//
//  Setup is copying files...%0
//
#define SP_TEXT_SETUP_IS_COPYING         0x00002FBFL

//
// MessageId: SP_TEXT_PREVIOUS_OS
//
// MessageText:
//
//  Unrecognized Operating System on C:%0
//
#define SP_TEXT_PREVIOUS_OS              0x00002FC0L

//
// MessageId: SP_TEXT_CDROM_OPTION
//
// MessageText:
//
//  Install Windows NT from Compact Disc%0
//
#define SP_TEXT_CDROM_OPTION             0x00002FC1L

//
// MessageId: SP_TEXT_525_OPTION
//
// MessageText:
//
//  Install Windows NT from 5.25" Floppy Disk (%1!c!:)%0
//
#define SP_TEXT_525_OPTION               0x00002FC2L

//
// MessageId: SP_TEXT_35_OPTION
//
// MessageText:
//
//  Install Windows NT from 3.5" Floppy Disk (%1!c!:)%0
//
#define SP_TEXT_35_OPTION                0x00002FC3L

//
// MessageId: SP_TEXT_REPAIR_DISK_NAME
//
// MessageText:
//
//  Windows NT Emergency Repair Disk%0
//
#define SP_TEXT_REPAIR_DISK_NAME         0x00002FC4L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_0
//
// MessageText:
//
//  Setup was unable to find or load the file.
//
#define SP_TEXT_REPAIR_INF_ERROR_0       0x00002FC5L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_1
//
// MessageText:
//
//  Line %2!u! contains a syntax error.
//
#define SP_TEXT_REPAIR_INF_ERROR_1       0x00002FC6L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_2
//
// MessageText:
//
//  Incorrect or missing signature in the Repair Information File.
//
#define SP_TEXT_REPAIR_INF_ERROR_2       0x00002FC7L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_3
//
// MessageText:
//
//  Setup was unable to load the source file %1 or the source
//  file is not the original file which Setup copied to the
//  Windows NT installation.
//
#define SP_TEXT_REPAIR_INF_ERROR_3       0x00002FC8L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_4
//
// MessageText:
//
//  Setup has determined that the file:
//  
//      %1
//  
//  is not the original file which Setup copied to the
//  Windows NT installation.
//
#define SP_TEXT_REPAIR_INF_ERROR_4       0x00002FC9L

//
// MessageId: SP_TEXT_REPAIR_INF_ERROR_5
//
// MessageText:
//
//  The version of the file is not Windows NT 3.5.
//
#define SP_TEXT_REPAIR_INF_ERROR_5       0x00002FCAL

//
// MessageId: SP_TEXT_SETUP_IS_EXAMINING
//
// MessageText:
//
//  Setup is examining files...%0
//
#define SP_TEXT_SETUP_IS_EXAMINING       0x00002FCBL

//
// MessageId: SP_TEXT_REPAIR_CDROM_OPTION
//
// MessageText:
//
//  Repair Windows NT from Compact Disc%0
//
#define SP_TEXT_REPAIR_CDROM_OPTION      0x00002FCCL

//
// MessageId: SP_TEXT_REPAIR_525_OPTION
//
// MessageText:
//
//  Repair Windows NT from 5.25" Floppy Disk (%1!c!:)%0
//
#define SP_TEXT_REPAIR_525_OPTION        0x00002FCDL

//
// MessageId: SP_TEXT_REPAIR_35_OPTION
//
// MessageText:
//
//  Repair Windows NT from 3.5" Floppy Disk (%1!c!:)%0
//
#define SP_TEXT_REPAIR_35_OPTION         0x00002FCEL

//
// MessageId: SP_REPAIR_MENU_ITEM_1
//
// MessageText:
//
//  [X] Inspect registry files%0
//
#define SP_REPAIR_MENU_ITEM_1            0x00002FCFL

//
// MessageId: SP_REPAIR_MENU_ITEM_2
//
// MessageText:
//
//  [X] Inspect startup environment%0
//
#define SP_REPAIR_MENU_ITEM_2            0x00002FD0L

//
// MessageId: SP_REPAIR_MENU_ITEM_3
//
// MessageText:
//
//  [X] Verify Windows NT system files%0
//
#define SP_REPAIR_MENU_ITEM_3            0x00002FD1L

//
// MessageId: SP_REPAIR_MENU_ITEM_4
//
// MessageText:
//
//  [X] Inspect boot sector%0
//
#define SP_REPAIR_MENU_ITEM_4            0x00002FD2L

//
// MessageId: SP_REPAIR_MENU_ITEM_CONTINUE
//
// MessageText:
//
//      Continue (perform selected tasks)%0
//
#define SP_REPAIR_MENU_ITEM_CONTINUE     0x00002FD3L

//
// MessageId: SP_REPAIR_HIVE_ITEM_1
//
// MessageText:
//
//  [ ] SYSTEM (System Configuration)%0
//
#define SP_REPAIR_HIVE_ITEM_1            0x00002FD4L

//
// MessageId: SP_REPAIR_HIVE_ITEM_2
//
// MessageText:
//
//  [ ] SOFTWARE (Software Information)%0
//
#define SP_REPAIR_HIVE_ITEM_2            0x00002FD5L

//
// MessageId: SP_REPAIR_HIVE_ITEM_3
//
// MessageText:
//
//  [ ] DEFAULT (Default User Profile)%0
//
#define SP_REPAIR_HIVE_ITEM_3            0x00002FD6L

//
// MessageId: SP_REPAIR_HIVE_ITEM_4
//
// MessageText:
//
//  [ ] SECURITY (Security Policy) and%0
//
#define SP_REPAIR_HIVE_ITEM_4            0x00002FD7L

//
// MessageId: SP_REPAIR_HIVE_ITEM_5
//
// MessageText:
//
//      SAM (User Accounts Database)%0
//
#define SP_REPAIR_HIVE_ITEM_5            0x00002FD8L

//
// MessageId: SP_UPG_MIRROR_DRIVELETTER
//
// MessageText:
//
//  (Mirror)%0
//
#define SP_UPG_MIRROR_DRIVELETTER        0x00002FDAL

//
// Help text goes here (id >= 13000).
//
//
// MessageId: SP_HELP_WELCOME
//
// MessageText:
//
//  The Windows NT Setup program makes it easy for you to set up Windows NT
//  on your computer. Setup determines what kind of computer and file system(s)
//  you are using, and presents appropriate options for you to choose from
//  during Setup.
//  
//  If you want to change a recommended setting, select the item you want to
//  change, and then choose a different setting. If you need more information
//  before deciding on a certain option, you can always get help by pressing F1.
//  %P
//  %IThe Setup Program
//  
//  The Setup program has two parts:  a text-based portion and a
//  Windows NT portion. You are now in the text-based portion of Setup.
//  In this portion, Setup does these things:
//  
//     It identifies correct hardware settings for your computer.
//  
//     It confirms your selection of partitions for your hard disk(s).
//  
//     It confirms the file system to be used on the disk partition that will
//      contain Windows NT.
//  
//     It confirms the directory where you will store the Windows NT files.
//  
//     It copies essential files to your hard disk so it can start Windows NT.
//  
//  Setup gives you a chance to verify this information and change specific
//  settings before moving on to the next screen.
//  %P
//  %IWhat You Need to Know for Custom Setup
//  
//  Setup attempts to select appropriate settings for you, but it helps if you
//  know the following things about your computer system:
//  
//     What kind of mouse you have (Microsoft or other).
//     What type of local printer you have.
//     Which port your printer is connected to.
//     What type of keyboard and keyboard layout you have,
//      and the language locale you want to use.
//     What kind of network adapter card your computer has, and the card's
//      interrupt number (IRQ), base port address, and other settings.
//     The computer name and domain name assigned by your network
//      administrator if your computer will join a Windows NT Server domain.
//  
//  If you are not sure about any item, you should accept Setup's
//  recommendation.
//  %P
//  %ISetup Keys
//  
//  While running Setup, you may need to use various keys to move from screen to
//  screen and to select options. A summary of the keys you can use during Setup
//  appears below.
//  
//  Press this key   To do this
//  
//  UP/DOWN ARROW    Move the highlight to select
//                   the next item in a list.
//  
//  ENTER            Choose a selected option or
//                   continue to the next Setup screen.
//  
//  F1               Display Help for the current Setup screen.
//  
//  F3               Quit Setup from anywhere in Setup.
//  
//  ESC              Return from Help to the Setup screen, or cancel an option.
//  
//  
//  The ENTER, ESC, F1, and F3 keys can be used whenever they appear at the
//  bottom of the screen (in the text-based portion of Setup).
//  %P
//  %IQuitting Setup
//  
//  To set up Windows NT properly, you should complete both the text-based
//  and Windows NT portions of the Setup program.
//  
//  Although it is not recommended, you can quit at any time the F3 appears at
//  the bottom of the screen, by pressing F3. Please keep in mind, however, that
//  if you quit Setup early, Windows NT will not be set up properly. You will
//  have to run Setup again to set up Windows NT on your computer.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_WELCOME                  0x000032C8L

//
// MessageId: SP_HELP_CUSTOM_EXPRESS
//
// MessageText:
//
//  %ITwo Methods of Windows NT Setup
//  
//  Windows NT provides two setup methods: Express and Custom Setup. Both are
//  described in detail in the screens that follow.
//  
//  %IExpress Setup
//  
//  With Express Setup, setting up Windows NT is simple and fast. You have
//  very few actions to perform, because Setup uses default settings and does
//  almost everything for you.  Express Setup is recommended for people who
//  are less familiar with computers or with Windows NT.
//  %P
//  Specifically, Express Setup does the following:
//  
//     Automatically configures your computer system. It detects your
//      hardware and sets it up for Windows NT (computer, display, mouse,
//      keyboard, keyboard layout, and language locale).
//  
//     If Setup detects an earlier version of Windows NT on your system, it
//      will ask if you want to upgrade or to change the path, keeping the
//      previous version and installing the new version in addition.
//  
//     Helps you set up your printer, if you have one connected to your
//      system. Setup asks you for the name of your printer and the port it is
//      connected to.
//  
//     Helps you to select and configure appropriate settings for your
//      network adapter card and allows you to join a workgroup or a
//      Windows NT Server domain.
//  
//     Automatically sets up applications for use with Windows NT. Setup
//      searches the path and hard drive(s) on your computer (but not network
//      drives). It sets up both Windows-based applications and
//      non-Windows-based applications.
//  %P
//  %ICustom Setup
//  
//  Custom Setup is designed for experienced users who want or need more
//  control over how Windows NT is set up on their computers. With Custom
//  Setup, you can override most default setup values, and you can choose
//  which Windows NT components and files you want copied to your hard disk.
//  
//  Custom Setup requires you to make several choices and to supply more
//  information than Express Setup. If you choose Custom Setup, you should
//  already know how to use a mouse with Windows NT.
//  %P
//  Specifically, Custom Setup does the following:
//  
//     Lists the hardware that Setup detects. You can choose to accept or
//      change Setup's selections for computer, display, mouse, keyboard,
//      keyboard layout, language locale, and SCSI adapters, if any.
//  
//     If Setup detects an earlier version of Windows NT on your system, it
//      will ask if you want to upgrade or to change the path, keeping the
//      previous version and installing the new version in addition.
//  
//     Allows you to choose whether to set up optional Windows NT components
//      if you want or need to conserve disk space.
//  
//     Gives you full control over setting up your local printer(s).
//  
//     Helps you to select and configure appropriate settings for one or more
//      network adapter cards and other network settings.
//  
//     Allows you to join a workgroup or a Windows NT Server domain.
//  
//     Gives you full control over setting up applications for use with
//      Windows NT. Setup can search your path and hard drive(s) for
//      applications to set up, or you can choose specific applications.
//      You can use this feature to set up both Windows-based and
//      non-Windows-based applications.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_CUSTOM_EXPRESS           0x000032C9L

//
// MessageId: SP_HELP_NVRAM_FULL
//
// MessageText:
//
//  Run your computer manufacturer's setup utility the next time you
//  start the computer. Do the following:
//  
//   Check that the system environment is correctly configured for
//    the specific hardware used in this computer.
//  
//   Delete any unused Boot selections (for operating systems
//    that you no longer use).
//  
//  See your hardware manufacturer's documentation for information about
//  running and using the setup utility.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//
#define SP_HELP_NVRAM_FULL               0x000032CAL

//
// MessageId: SP_HELP_OUT_OF_MEMORY
//
// MessageText:
//
//  Check the following possible conditions:
//  
//   More memory may be required to run the options you selected
//    on your system. Check the system requirements in the
//    Windows NT Installation Guide to be sure that your computer
//    meets the minimum requirements.
//  
//   If you have a large number of hard disks, remove nonessential disks
//    and run Windows NT Setup again.
//  
//  If you continue to get this error after ensuring that you meet
//  the minimum memory requirements, contact your product support
//  representative.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_OUT_OF_MEMORY            0x000032CBL

//
// MessageId: SP_HELP_CANT_LOAD_SETUP_LOG
//
// MessageText:
//
//  Because Windows NT Setup cannot read the required file,
//  it cannot remove Windows NT system files from the previous installation.
//  
//  To resolve this problem, you can do one of the following:
//  
//   Press ENTER and choose another directory or another disk partition for
//    installing this new version. After Setup is complete, you can remove
//    the directory containing the previous version of Windows NT.
//  
//   Quit Setup. Then start your computer using another operating system
//    and delete the previous installation of Windows NT.
//    Then start Windows NT Setup and continue with steps for the
//    new installation.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_CANT_LOAD_SETUP_LOG      0x000032CCL

//
// MessageId: SP_HELP_PARTITION_TABLE_FULL
//
// MessageText:
//
//  A hard disk can contain four primary partitions, one of which can be
//  an extended partition that can contain an unlimited number of
//  logical drives. Setup has determined that a new primary partition
//  cannot be added on the hard disk you selected because it already contains
//  four partitions.
//  
//  You can do one of the following:
//  
//   Select another disk or an existing partition where you will
//    install Windows NT.
//  
//   Remove an existing primary partition and create a new partition
//    from the free space. (All data will be lost on any existing partition
//    that you remove.)
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_PARTITION_TABLE_FULL     0x000032CDL

//
// MessageId: SP_HELP_FDISK
//
// MessageText:
//
//  This Setup screen allows you to create, delete, and arrange disk partitions
//  to suit your needs before installing the Windows NT operating system. Setup
//  can install Windows NT on any partition in this list if that partition has
//  sufficient space for the Windows NT system files.
//  
//  NOTE: Any changes you make to create or delete partitions using this Setup
//  screen are not committed to disk until you select the partition where you
//  want to install Windows NT and press ENTER.
//  
//  If you are unsure about making any changes to your hard disk partitions
//  during Setup, do not create or delete any partitions. Install Windows NT on
//  an existing partition. After Setup, you can use Disk Administrator to manage
//  partitions that do not contain the Windows NT system files.
//  
//  The list on this Setup screen is organized by disk. For each hard drive, the
//  list shows its total size and the hard drive type, such as IDE or SCSI. The
//  list also shows the amount of unpartitioned free space on each hard disk.
//  %P
//  For each partition on a drive, the list shows:
//   The drive letter that Windows NT would assign.
//   The type of file system, if it is FAT, HPFS, or NTFS. For other types of
//    file systems, the list shows the operating system that the partition was
//    created for.
//   The size of the partition in megabytes.
//   The first few characters of the volume label.
//  
//  For SCSI drives, the list shows:
//   The total disk size in megabytes.
//   The SCSI ID (usually 0 or 1).
//   The bus ID for the controller.
//   An abbreviation for the type of SCSI controller.
//  
//  If there is unpartitioned free space on any hard disk, you can use the arrow
//  keys to select it in the list, and then press ENTER to automatically
//  partition that free space at the largest possible size.
//  %P
//  If you want to create a partition using a portion of the free space on a
//  hard disk, use the arrow keys to select that free space, and then press C.
//  The partition is not actually created until you select the partition where
//  you want to install Windows NT and press ENTER.
//  
//  If you want to delete one or more partitions that are no longer used,
//  highlight the partition you want to delete, and then press D. Deleting a
//  partition creates free space that can be combined with other free space on
//  the hard disk to create a new partition.
//  
//  When you delete a partition, Setup will warn you that any files on that
//  partition will be lost. The partition is not actually deleted until you
//  select the partition where you want to install Windows NT and press ENTER.
//  %P
//  If you are installing Windows NT on an x86-based computer, the drive letters
//  displayed on this screen may not match the drive letters that appear when
//  you run MS-DOS. This is because MS-DOS assigns letters to SCSI drives last,
//  but Windows NT treats SCSI drives as primary partitions, so letters are
//  assigned in a different order.
//  
//  If you want to change the drive letters that Windows NT assigns, after Setup
//  you can use Disk Administrator to assign drive letters.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_FDISK                    0x000032CEL

//
// MessageId: SP_HELP_FATAL_FDISK_WRITE_ERROR
//
// MessageText:
//
//  This condition may represent a serious hardware problem.
//  Quit Setup and check the following for your hard disk:
//  
//     Be sure that the cables and power supply are properly connected.
//     Run a hard disk check utility, such as CHKDSK or MS-DOS SCANDISK.
//  
//  If the problem persists, your hard disk or computer may need repairs.
//  
//       To return to Setup, press ESC.
//  
//  
//  
//  
//  
//
#define SP_HELP_FATAL_FDISK_WRITE_ERROR  0x000032CFL

//
// MessageId: SP_HELP_REPAIR_HIVE
//
// MessageText:
//
//  %IRestore Registry
//  
//  Setup can restore the files of your registry which were saved on the
//  Emergency Repair Disk when you installed Windows NT.
//  
//  Setup attempts to access these files in your Windows NT installation
//  and then recommends that corrupt or inaccessible Files be restored
//  from the Emergency Repair Disk. If you restore a file, all changes
//  made to it since you first installed Windows NT will be lost.
//  
//  For this reason, restoring a registry file should be done only as a
//  last resort when you have exhausted all other options, such as restoring
//  tape backups or accessing the Last Known Good Configuration by holding
//  down the space bar as your computer starts.
//  
//  The following screens describe the different registry files.
//  %P
//  %ISYSTEM - System Configuration
//  
//  The system configuration file controls such characteristics as
//  
//     Device drivers and services loaded by the system
//     System memory management options
//     Time and time zone configuration
//     National Language Support (NLS) configuration
//     Event logging
//  
//  Restoring this file will undo changes you have made to the above
//  configuration since Windows NT was first installed.
//  %P
//  %ISECURITY - Security Policy
//  %ISAM      - User Accounts Database
//  
//  Setup treats these two files as a unit. They cannot be restored
//  independently of each other. Together these files form the system's
//  user accounts and security policy repository.
//  
//  Restoring these files will eliminate all user groups and accounts
//  created on your computer since Windows NT was first installed.
//  
//  If you originally configured this computer as a Windows NT Server
//  Primary Domain Controller and later demoted it to a Backup Domain
//  Controller, restoring these files will reconfigure the computer as a
//  Primary Domain Controller. Disconnect the computer from the network
//  before restarting it to avoid conflicts with the actual Primary
//  Domain Controller.
//  %P
//  %IDEFAULT - Default User Profile
//  
//  The default user profile contains the environment used whenever a new
//  user first logs on to this computer. The environment includes:
//  
//     Personal program groups
//     Screen colors
//     Program preferences
//     Control panel settings
//  
//  Restoring the default user profile will not change existing users'
//  environments.
//  %P
//  %ISOFTWARE - Software Information
//  
//  The software configuration file contains information about software
//  currently installed on your computer, including Windows NT itself.
//  
//  Restoring this file may cause some applications to behave incorrectly,
//  possibly necessitating their reinstallation.
//  
//     To return to Setup, press ESC.
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//  
//
#define SP_HELP_REPAIR_HIVE              0x000032D1L

//
// MessageId: SP_HELP_REPAIR_MENU_X86
//
// MessageText:
//
//  %IRepair Menu
//  
//  You can repair any or all of the following options on a Windows NT 3.5
//  installation:
//  
//  
//         Registry files
//  
//         Startup environment
//  
//         Windows NT system files
//  
//         Boot sector
//  
//  
//  
//  The following screens describe each option that you can select for setup
//  to repair.
//  %P
//  %IRepair Menu - Registry Files
//  
//  Select this option if you want setup to restore your registry files.
//  Setup will allow you to select the registry files that you want to repair,
//  and will replace them with the files that were created when you first
//  installed Windows NT. All changes made to the system since you installed
//  will be lost.
//  %P
//  %ISystem Repair Menu - Startup Environment
//  
//  Select this option if you have Windows NT version 3.5 installed on
//  your computer, but this installation does not appear in the list of
//  bootable systems. For this option, you must provide the Emergency
//  Repair disk created when you installed Windows NT.
//  %P
//  %IRepair Menu - Windows NT System Files
//  
//  Select this option if you want setup to verify the existence and
//  integrity of all Windows NT system files. Setup can replace the damaged
//  files after confirming the operation with you. You can also direct
//  Setup to replace all damaged files automatically, without asking you
//  to confirm the replacement of each file.
//  %P
//  %IRepair Menu - Boot Sector
//  
//  Select this option if you cannot boot any system installed on your
//  computer. Setup will copy a new boot sector to your disk.
//  
//  
//     To return to Setup, press ESC.
//  
//  
//  
//
#define SP_HELP_REPAIR_MENU_X86          0x000032D2L

//
// MessageId: SP_HELP_REPAIR_MENU_NON_X86
//
// MessageText:
//
//  %IRepair Menu
//  
//  You can repair any or all of the following options on a Windows NT 3.5
//  installation:
//  
//  
//         Registry files
//  
//         Startup environment
//  
//         Windows NT system files
//  
//  
//  
//  The following screens describe each option that you can select for setup
//  to repair.
//  %P
//  %IRepair Menu - Registry Files
//  
//  Select this option if you want setup to restore your registry files.
//  Setup will allow you to select the registry files that you want to repair,
//  and will replace them with the files that were created when you first
//  installed Windows NT. All changes made to the system since you installed
//  will be lost.
//  %P
//  %IRepair Menu - Startup Environment
//  
//  Select this option if you have Windows NT version 3.5 installed on
//  your computer, but this installation does not appear in the list of
//  bootable systems. For this option, you must provide the Emergency
//  Repair disk created when you installed Windows NT.
//  %P
//  %IRepair Menu - Windows NT System Files
//  
//  Select this option if you want setup to verify the existence and
//  integrity of all Windows NT system files. Setup can replace the damaged
//  files after confirming the operation with you. You can also direct
//  Setup to replace all damaged files automatically, without asking you
//  to confirm the replacement of each file.
//  
//  
//     To return to Setup, press ESC.
//  
//  
//  
//
#define SP_HELP_REPAIR_MENU_NON_X86      0x000032D3L

//
// The following value is used for the localizable mnemonic keystrokes
// (such as C=Custom Setup, etc).  The first message is the list of
// values.  The second is an informative message for the localizers.
// The order of these values must match the MNEMONIC_KEYS enum (spdsputl.h).
// Note the zeroth item is not used.
//
//
// MessageId: SP_MNEMONICS
//
// MessageText:
//
//  *CCDCFCRNSSLONRA%0
//
#define SP_MNEMONICS                     0x00003A98L

//
// MessageId: SP_MNEMONICS_INFO
//
// MessageText:
//
//  # 0: (reserved)
//  # 1: C=Custom Setup (10005)
//  # 2: C=Create Partition (10006)
//  # 3: D=Delete Partition (10007)
//  # 4: C=Continue Setup (10013)
//  # 5: F=Format (10015)
//  # 6: C=Convert (10016)
//  # 7: R=Remove Files (10019)
//  # 8: N=Different Directory (10023)
//  # 9: S=Skip Detection (10027)
//  #10: S=Specify Additional SCSI Adapter (10029)
//  #11: L=Delete (10009)
//  #12: O=Overwrite (10065)
//  #13: N=New Version (10068)
//  #14: R=Repair (10073)
//  #15: A=Repair All (10077)
//
#define SP_MNEMONICS_INFO                0x00003A99L

#endif // _USETUP_MSG_
//
// The following values will only be needed until dynamic
// repartitioning is completed.
//
//
// MessageId: SP_DYN_PART_REBOOT_X86
//
// MessageText:
//
//  Partitioning changes have been made to your hard disks but dynamic
//  repartitioning is not yet functional. You must reboot and restart
//  Setup to continue.  Make sure that the Windows NT Setup Boot Disk is
//  in drive A: before rebooting.
//  
//        Press F3 to reboot.
//  
//  
//  
//
#define SP_DYN_PART_REBOOT_X86           0x00004E20L

//
// MessageId: SP_DYN_PART_REBOOT_ARC
//
// MessageText:
//
//  Partitioning changes have been made to your hard disks but dynamic
//  repartitioning is not yet functional. You must reboot and restart
//  Setup to continue.
//  
//        Press F3 to reboot.
//  
//  
//  
//
#define SP_DYN_PART_REBOOT_ARC           0x00004E21L

//
// MessageId: SP_STAT_F3_EQUALS_REBOOT
//
// MessageText:
//
//  F3=Reboot%0
//
#define SP_STAT_F3_EQUALS_REBOOT         0x00004E22L

