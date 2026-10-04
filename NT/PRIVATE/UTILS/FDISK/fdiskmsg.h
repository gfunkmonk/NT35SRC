/*++

Copyright (c) 1991  Microsoft Corporation

Module Name:

    fdiskmsg.h

Abstract:

    This file contains the message definitions for Win32 fdisk.

Author:

    Ted Miller (tedm) 5-Dec-1991

Revision History:

Notes:

    This file is generated from fdiskmsg.mc

--*/

#ifndef _FDISKMSG_
#define _FDISKMSG_


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
// MessageId: MSG_FIRST_FDISK_MSG
//
// MessageText:
//
//  MSG_FIRST_FDISK_MSG
//
#define MSG_FIRST_FDISK_MSG              0x00002328L

//
// MessageId: MSG_CANT_CREATE_WINDOWS
//
// MessageText:
//
//  Disk Administrator was unable to create its windows.
//  Click OK to exit.
//
#define MSG_CANT_CREATE_WINDOWS          0x00002329L

//
// MessageId: MSG_NO_DISKS
//
// MessageText:
//
//  Disk Administrator has determined that there are no fixed disks attached to the system, or all such disks are off-line.  Click OK to exit.
//
#define MSG_NO_DISKS                     0x0000232AL

//
// MessageId: MSG_ACCESS_DENIED
//
// MessageText:
//
//  Access is denied.  You must be logged on with Administrative privilege to run Disk Administrator.
//
#define MSG_ACCESS_DENIED                0x0000232BL

//
// MessageId: MSG_CONFIRM_DELETE
//
// MessageText:
//
//  All data in the partition or logical drive will be lost!
//  
//  Are you sure you want to delete the chosen partition or logical drive?
//
#define MSG_CONFIRM_DELETE               0x0000232CL

//
// MessageId: MSG_CREATE_NOT_COMPAT
//
// MessageText:
//
//  This operation will result in a disk whose partition scheme may not be compatible with MS-DOS.  Some partitions may not be accessible if the disk is used with MS-DOS in the future.
//  
//  Do you want to continue and create the partition anyway?
//
#define MSG_CREATE_NOT_COMPAT            0x0000232DL

//
// MessageId: MSG_INVALID_SIZE
//
// MessageText:
//
//  Invalid size.
//
#define MSG_INVALID_SIZE                 0x0000232EL

//
// MessageId: MSG_ALREADY_RUNNING
//
// MessageText:
//
//  Disk Administrator is already running.
//
#define MSG_ALREADY_RUNNING              0x0000232FL

//
// MessageId: MSG_CONFIRM_EXIT
//
// MessageText:
//
//  Changes have been made to your disk configuration.
//  
//  Do you want to save the changes?
//
#define MSG_CONFIRM_EXIT                 0x00002330L

//
// MessageId: MSG_OUT_OF_MEMORY
//
// MessageText:
//
//  Disk Administrator has run out of memory.
//  Select Cancel to exit Disk Administrator, or try closing other applications to free memory and then select Retry.
//  If you exit, all changes will be lost.
//
#define MSG_OUT_OF_MEMORY                0x00002331L

//
// MessageId: MSG_OK_COMMIT
//
// MessageText:
//
//  Disks were updated successfully.
//  
//  It is recommended that you update the emergency repair configuration information and create a new Emergency Repair Disk.  You can do this with the system utility RDISK.EXE.
//
#define MSG_OK_COMMIT                    0x00002332L

//
// MessageId: MSG_CANT_DELETE_WINNT
//
// MessageText:
//
//  Disk Administrator cannot delete the partition containing Windows NT system files.
//
#define MSG_CANT_DELETE_WINNT            0x00002333L

//
// MessageId: MSG_HELP_ERROR
//
// MessageText:
//
//  Could not invoke help application.
//
#define MSG_HELP_ERROR                   0x00002334L

//
// MessageId: MSG_NO_AVAIL_LETTER
//
// MessageText:
//
//  All available drive letters are already assigned.
//  
//  You will not be able to access the %1 from Windows NT unless you rearrange drive letter usage.
//  
//  Do you want to continue and create the %1 anyway?
//
#define MSG_NO_AVAIL_LETTER              0x00002335L

//
// MessageId: MSG_BAD_CONFIG_SET
//
// MessageText:
//
//  An error occurred while updating disk configuration.
//  
//  Drive letter and fault tolerance information may be lost and/or some partitions may be inaccessible.
//
#define MSG_BAD_CONFIG_SET               0x00002336L

//
// MessageId: MSG_CONFIG_MISSING_DISK
//
// MessageText:
//
//  Disk Administrator has determined that one or more disks have been removed from your computer since Disk Administrator was last run, or that one or more disks are off-line.
//  
//  Configuration information about the missing disk(s) will be retained.
//
#define MSG_CONFIG_MISSING_DISK          0x00002337L

//
// MessageId: MSG_CONFIG_EXTRA_DISK
//
// MessageText:
//
//  Disk Administrator has determined that this is the first time Disk Administrator has been run, or that one or more disks have been added to your computer since Disk Administrator was last run.
//  
//  System configuration will now be updated.
//
#define MSG_CONFIG_EXTRA_DISK            0x00002338L

//
// MessageId: MSG_CONFIG_DISK_CHANGED
//
// MessageText:
//
//  Disk Administrator has determined that the configuration of one of more disks has been altered since Disk Administrator was last run.
//  
//  System configuration will be automatically updated to reflect these changes when you next opt to save changes when exiting Disk Administrator.
//
#define MSG_CONFIG_DISK_CHANGED          0x00002339L

//
// MessageId: MSG_ALL_DRIVE_LETTERS_USED
//
// MessageText:
//
//  All drive letters are already assigned.
//
#define MSG_ALL_DRIVE_LETTERS_USED       0x0000233AL

//
// MessageId: MSG_PART_TABLE_FULL
//
// MessageText:
//
//  No more primary partitions can be created on the disk.  A disk cannot hold more than four partitions (including the extended partition but not including logical drives).
//
#define MSG_PART_TABLE_FULL              0x0000233BL

//
// MessageId: MSG_EXTENDED_ALREADY_EXISTS
//
// MessageText:
//
//  An extended partition already exists on the disk.
//
#define MSG_EXTENDED_ALREADY_EXISTS      0x0000233CL

//
// MessageId: MSG_NO_OTHER_NTS
//
// MessageText:
//
//  No other Windows NT installations were found.
//
#define MSG_NO_OTHER_NTS                 0x0000233DL

//
// MessageId: MSG_CONFIRM_MIGRATE_CONFIG
//
// MessageText:
//
//  Warning: This operation will overwrite your disk configuration information with the configuration from a different installation of Windows NT.
//  Currently defined drive letters, volume sets, stripe sets, parity stripes, and mirrors may be lost depending on the disk configuration associated with the Windows NT installation you select.
//  
//  No partitions will be created or deleted by this operation, but any changes you have made during this session of Disk Administrator will be lost.
//  
//  Do you want to search for other installations of Windows NT?
//
#define MSG_CONFIRM_MIGRATE_CONFIG       0x0000233EL

//
// MessageId: MSG_CONFIRM_RESTORE_CONFIG
//
// MessageText:
//
//  Warning: This operation will overwrite your disk configuration information
//  with a previously saved configuration.
//  Currently defined drive letters, volume sets, stripe sets, parity stripes,
//  and mirrors may be lost depending on the previously saved disk configuration.
//  
//  No partitions will be created or deleted by this operation,
//  but any changes you have made during this session of Disk Administrator
//  will be lost.
//  
//  Do you want to continue with the restoration?
//
#define MSG_CONFIRM_RESTORE_CONFIG       0x0000233FL

//
// MessageId: MSG_INSERT_REGSAVEDISK
//
// MessageText:
//
//  Please insert a disk onto which you have previously saved disk configuration information, into drive A:.
//  
//  Press OK when the disk is in the drive.
//
#define MSG_INSERT_REGSAVEDISK           0x00002340L

//
// MessageId: MSG_INSERT_REGSAVEDISK2
//
// MessageText:
//
//  This operation will save configuration information about currently defined drive letters, volume sets, stripe sets, stripe sets with parity, and mirrors sets.
//  The saved configuration information will be placed on a floppy disk.
//  
//  Please insert a formatted disk into drive A:.  Press OK when the disk is in the drive.
//
#define MSG_INSERT_REGSAVEDISK2          0x00002341L

//
// MessageId: MSG_CONFIG_SAVED_OK
//
// MessageText:
//
//  Disk configuration information was saved successfully.
//
#define MSG_CONFIG_SAVED_OK              0x00002342L

//
// MessageId: MSG_ABSOLUTELY_SURE
//
// MessageText:
//
//  Current disk configuration information will be overwritten!  Are you absolutely sure you want to continue?
//
#define MSG_ABSOLUTELY_SURE              0x00002343L

//
// MessageId: MSG_NO_SIGNATURE
//
// MessageText:
//
//  No signature found on %1.  Writing a signature is a safe operation and will not affect your ability to access this disk from other operating systems, such as DOS.
//  
//  If you choose not to write a signature, the disk will be marked OFF-LINE and be inaccessable to the Windows NT Disk Administrator program.
//  
//  Do you want to write a signature on %1 so that Disk Administrator can access the drive?
//
#define MSG_NO_SIGNATURE                 0x00002344L

//
// MessageId: MSG_SCHEDULE_REBOOT
//
// MessageText:
//
//  This drive letter assignment can be performed if you wish to restart your computer.
//  Click YES to schedule this change for system restart upon exiting this application.
//  
//  Note, responding with YES to this question means a commit of the changes requested will occur on exiting this application.
//
#define MSG_SCHEDULE_REBOOT              0x00002345L

//
// MessageId: MSG_TOO_BIG_FOR_FAT
//
// MessageText:
//
//  This volume cannot be formatted to the FAT file system.  FAT can only support volumes up to 4GB in size.
//
#define MSG_TOO_BIG_FOR_FAT              0x00002346L

#if i386
//
// MessageId: MSG_DISK0_ACTIVE
//
// MessageText:
//
//  The requested partition has been marked active.  When you reboot your computer the operating system on that partition will be started.
//
#define MSG_DISK0_ACTIVE                 0x0000238CL

//
// MessageId: MSG_PRI_1024_CYL
//
// MessageText:
//
//  The partition created may not be accessible from other operating systems
//  such as MS-DOS because the start or end cylinder value is too large.
//  
//  Do you want to create the partition anyway?
//
#define MSG_PRI_1024_CYL                 0x0000238DL

//
// MessageId: MSG_EXT_1024_CYL
//
// MessageText:
//
//  Logical drives created within the extended partition created will not be
//  accessible from other operating systems such as MS-DOS because the start
//  or end cylinder value is too large.
//  
//  Do you want to create the extended partition anyway?
//
#define MSG_EXT_1024_CYL                 0x0000238EL

//
// MessageId: MSG_LOG_1024_CYL
//
// MessageText:
//
//  The logical drive created will not be accessible from other operating systems
//  such as MS-DOS because the extended partition start or end cylinder value is too large.
//  
//  Do you want to create the logical drive anyway?
//
#define MSG_LOG_1024_CYL                 0x0000238FL

//
// MessageId: MSG_CANT_DELETE_ACTIVE0
//
// MessageText:
//
//  Disk Administrator cannot delete the active partition on disk 0.
//
#define MSG_CANT_DELETE_ACTIVE0          0x00002390L

//
// MessageId: MSG_CANT_EXTEND_ACTIVE0
//
// MessageText:
//
//  Disk Administrator cannot convert the active partition on disk 0 into a volume set.
//
#define MSG_CANT_EXTEND_ACTIVE0          0x00002391L

#endif
//
// MessageId: MSG_CANT_DELETE_INITIALIZING_SET
//
// MessageText:
//
//  Disk Administrator cannot delete an FT set while it is initializing or regenerating.
//
#define MSG_CANT_DELETE_INITIALIZING_SET 0x00002392L

//
// MessageId: MSG_CANT_BREAK_INITIALIZING_SET
//
// MessageText:
//
//  Disk Administrator cannot break a Mirror set while it is initializing.
//
#define MSG_CANT_BREAK_INITIALIZING_SET  0x00002393L

//
// MessageId: MSG_CANT_REGEN_INITIALIZING_SET
//
// MessageText:
//
//  Disk Administrator cannot regenerate a Stripe set with Parity while it is initializing or regenerating.
//
#define MSG_CANT_REGEN_INITIALIZING_SET  0x00002394L

//
// MessageId: MSG_MIRROR_OF_BOOT
//
// MessageText:
//
//  This will be a Mirror set of the system boot partition.  Please refer to the Windows NT Server Concepts and Planning Guide for information on how to create a Fault Tolerant boot floppy disk.
//
#define MSG_MIRROR_OF_BOOT               0x00002395L

//
// MessageId: MSG_CONFIRM_DEL_STRP
//
// MessageText:
//
//  All data in the stripe set will be lost!
//  
//  Are you sure you want to delete the selected stripe set?
//
#define MSG_CONFIRM_DEL_STRP             0x000023F0L

//
// MessageId: MSG_CRTSTRP_FULL
//
// MessageText:
//
//  The disk containing one of the free spaces you have chosen is not able to accept any more partitions.
//
#define MSG_CRTSTRP_FULL                 0x000023F1L

//
// MessageId: MSG_CRTMIRROR_BADFREE
//
// MessageText:
//
//  The free space you have chosen is not large enough to contain a mirror of the partition you have chosen.
//
#define MSG_CRTMIRROR_BADFREE            0x000023F2L

//
// MessageId: MSG_CONFIRM_BRK_MIRROR
//
// MessageText:
//
//  This will end mirroring and create two independent partitions.
//  
//  Are you sure you want to break the selected mirror?
//
#define MSG_CONFIRM_BRK_MIRROR           0x000023F3L

//
// MessageId: MSG_CONFIRM_DEL_VSET
//
// MessageText:
//
//  All data in the volume set will be lost!
//  
//  Are you sure you want to delete the selected volume set?
//
#define MSG_CONFIRM_DEL_VSET             0x000023F4L

//
// MessageId: MSG_CANT_INIT_FT
//
// MessageText:
//
//  Disk Administrator was unable to configure the Fault Tolerance Device.
//  Mirrors and stripe sets with parity will not be initialized or regenerated.
//
#define MSG_CANT_INIT_FT                 0x000023F5L

//
// MessageId: MSG_NOT_LARGE_ENOUGH_FOR_STRIPE
//
// MessageText:
//
//  The free space you have chosen is not large enough to contain an element in the stripe set you have chosen for regeneration.
//
#define MSG_NOT_LARGE_ENOUGH_FOR_STRIPE  0x000023F7L

//
// MessageId: MSG_CHANGED_BOOT_PARTITION_X86
//
// MessageText:
//
//  This change will modify the partition number of the partition which contains your Windows NT system files.
//  The old partition number was %1; the new partition number is %2.
//  Edit BOOT.INI to reflect this change before shutting the system down.
//
#define MSG_CHANGED_BOOT_PARTITION_X86   0x00002519L

//
// MessageId: MSG_CHANGED_BOOT_PARTITION_ARC
//
// MessageText:
//
//  This change will modify the partition number of the partition which contains your Windows NT system files.
//  The old partition number was %1; the new partition number is %2.
//
#define MSG_CHANGED_BOOT_PARTITION_ARC   0x0000251AL

//
// MessageId: MSG_REQUIRE_REBOOT
//
// MessageText:
//
//  The changes requested will require you to restart your computer.  Click YES to continue with the changes and restart the computer.
//
#define MSG_REQUIRE_REBOOT               0x0000251BL

//
// MessageId: MSG_MUST_REBOOT
//
// MessageText:
//
//  Changes have been made which require you to restart your computer.  Click OK to initiate system shutdown.
//
#define MSG_MUST_REBOOT                  0x0000251CL

//
// MessageId: MSG_COULDNT_REBOOT
//
// MessageText:
//
//  Disk Administrator was unable to restart your computer.  To ensure the integrity of your disks and data, you should initiate system shutdown from the Program Manager.  Click OK to exit Disk Administrator.
//
#define MSG_COULDNT_REBOOT               0x0000251DL

//
// MessageId: MSG_CONFIRM_SHUTDOWN_FOR_MIRROR
//
// MessageText:
//
//  The mirror set cannot be locked.  To break this mirror relationship the system must be restarted.  This restart of the system will occur on exiting Disk Administrator.
//  
//  Do you wish to continue with this operation?
//
#define MSG_CONFIRM_SHUTDOWN_FOR_MIRROR  0x0000235BL

//
// MessageId: MSG_EXTEND_VOLSET_MUST_BE_NTFS
//
// MessageText:
//
//  The volume set is not formatted to NTFS; only NTFS volume sets can be extended.
//
#define MSG_EXTEND_VOLSET_MUST_BE_NTFS   0x0000235CL

//
// MessageId: MSG_CONFIRM_BRKANDDEL_MIRROR
//
// MessageText:
//
//  All data in the mirror will be lost!
//  
//  Are you sure you want to break the selected mirror and delete its component partitions?
//
#define MSG_CONFIRM_BRKANDDEL_MIRROR     0x0000235DL

//
// MessageId: MSG_CANT_EXTEND_WINNT
//
// MessageText:
//
//  Disk Administrator cannot extend the partition containing Windows NT system files.
//
#define MSG_CANT_EXTEND_WINNT            0x0000235EL

//
// MessageId: MSG_CONFIRM_PROTECT_SYSTEM
//
// MessageText:
//
//  Are you sure you want to restrict access to the System Partition to System Administrators?
//  
//  Performing this operation will require a restart of the system.
//
#define MSG_CONFIRM_PROTECT_SYSTEM       0x0000235FL

//
// MessageId: MSG_CONFIRM_UNPROTECT_SYSTEM
//
// MessageText:
//
//  Are you sure you want to allow all users access to the System Partition?
//  
//  Performing this operation will require a restart of the system.
//
#define MSG_CONFIRM_UNPROTECT_SYSTEM     0x00002360L

//
// MessageId: MSG_CANT_PROTECT_SYSTEM
//
// MessageText:
//
//  Disk Administrator cannot mark the System Partition secure.
//
#define MSG_CANT_PROTECT_SYSTEM          0x00002361L

//
// MessageId: MSG_CANT_UNPROTECT_SYSTEM
//
// MessageText:
//
//  Disk Administrator cannot mark the System Partition as non-secure.
//
#define MSG_CANT_UNPROTECT_SYSTEM        0x00002362L

//
// MessageId: MSG_NO_REMOVABLE_IN_STRIPE
//
// MessageText:
//
//  Stripe sets cannot include partitions on removable media.
//
#define MSG_NO_REMOVABLE_IN_STRIPE       0x00002363L

//
// MessageId: MSG_NO_REMOVABLE_IN_VOLUMESET
//
// MessageText:
//
//  Volume sets cannot include partitions on removable media.
//
#define MSG_NO_REMOVABLE_IN_VOLUMESET    0x00002364L

//
// MessageId: MSG_NO_REMOVABLE_IN_MIRROR
//
// MessageText:
//
//  Mirror pairs cannot include partitions on removable media.
//
#define MSG_NO_REMOVABLE_IN_MIRROR       0x00002365L

//
// MessageId: MSG_CANT_ASSIGN_LETTER_TO_REMOVABLE
//
// MessageText:
//
//  Disk Administrator cannot assign drive letters to partitions on removable media.
//
#define MSG_CANT_ASSIGN_LETTER_TO_REMOVABLE 0x00002366L

//
// MessageId: MSG_NO_EXTENDED_ON_REMOVABLE
//
// MessageText:
//
//  Disk Administrator cannot create extended partitions on removable media.
//
#define MSG_NO_EXTENDED_ON_REMOVABLE     0x00002367L

//
// MessageId: MSG_ONLY_ONE_PARTITION_ON_REMOVABLE
//
// MessageText:
//
//  Disk Administrator can only create one partition on a removable disk.
//
#define MSG_ONLY_ONE_PARTITION_ON_REMOVABLE 0x00002368L

//
// MessageId: MSG_REMOVABLE_PARTITION_NOT_FULL_SIZE
//
// MessageText:
//
//  Disk Administrator can only create one partition on a removable disk.
//  Therefore, if you create a partition which does not use the entire disk,
//  you will not be able to use the remaining free space.
//  
//  Are you sure you want to create this partition?
//
#define MSG_REMOVABLE_PARTITION_NOT_FULL_SIZE 0x00002369L

//
// MessageId: MSG_BOOT_PARTITION_CHANGED_X86
//
// MessageText:
//
//  The partition number of the partition which contains your Windows NT system files has changed.
//  The old partition number was %1; the new partition number is %2.
//  Edit BOOT.INI to reflect this change before shutting the system down.
//
#define MSG_BOOT_PARTITION_CHANGED_X86   0x0000236AL

//
// MessageId: MSG_BOOT_PARTITION_CHANGED_ARC
//
// MessageText:
//
//  The partition number of the partition which contains your Windows NT system files has changed.
//  The old partition number was %1; the new partition number is %2.
//
#define MSG_BOOT_PARTITION_CHANGED_ARC   0x0000236BL

//
// MessageId: MSG_CANT_FORMAT_WINNT
//
// MessageText:
//
//  Disk Administrator cannot format a volume containing Windows NT system files.
//
#define MSG_CANT_FORMAT_WINNT            0x0000236CL

//
// MessageId: MSG_CANT_LOAD_FMIFS
//
// MessageText:
//
//  Disk Administrator cannot locate fmifs.dll to perform this action.
//
#define MSG_CANT_LOAD_FMIFS              0x0000236DL

//
// MessageId: MSG_CANT_FORMAT_NO_LETTER
//
// MessageText:
//
//  Disk Administrator cannot format a volume that is not assigned a drive letter.
//
#define MSG_CANT_FORMAT_NO_LETTER        0x0000236EL

//
// MessageId: MSG_CONFIRM_FORMAT
//
// MessageText:
//
//  Warning: This operation will overwrite the data contained on this volume.
//  Are you sure you wish to continue with this operation?
//
#define MSG_CONFIRM_FORMAT               0x0000236FL

//
// MessageId: MSG_COULDNT_CREATE_THREAD
//
// MessageText:
//
//  Disk Administrator could not create a thread to perform this operation.
//
#define MSG_COULDNT_CREATE_THREAD        0x00002371L

//
// MessageId: MSG_INCOMPATIBLE_FILE_SYSTEM
//
// MessageText:
//
//  The volume selected cannot be formatted in this manner.
//
#define MSG_INCOMPATIBLE_FILE_SYSTEM     0x00002372L

//
// MessageId: MSG_FORMAT_ACCESS_DENIED
//
// MessageText:
//
//  Access denied.
//
#define MSG_FORMAT_ACCESS_DENIED         0x00002373L

//
// MessageId: MSG_WRITE_PROTECTED
//
// MessageText:
//
//  The volume selected is write protected.
//
#define MSG_WRITE_PROTECTED              0x00002374L

//
// MessageId: MSG_FORMAT_CANT_LOCK
//
// MessageText:
//
//  The volume selected cannot be locked for format.
//
#define MSG_FORMAT_CANT_LOCK             0x00002375L

//
// MessageId: MSG_BAD_LABEL
//
// MessageText:
//
//  The label given is inappropriate for this volume.
//
#define MSG_BAD_LABEL                    0x00002376L

//
// MessageId: MSG_INCOMPATIBLE_MEDIA
//
// MessageText:
//
//  The media selected cannot support the file system selected.
//
#define MSG_INCOMPATIBLE_MEDIA           0x00002377L

//
// MessageId: MSG_CANT_QUICK_FORMAT
//
// MessageText:
//
//  Quick format is not allowed on this volume.
//
#define MSG_CANT_QUICK_FORMAT            0x00002378L

//
// MessageId: MSG_IO_ERROR
//
// MessageText:
//
//  An operation failed while attempting to format the volume.
//
#define MSG_IO_ERROR                     0x00002379L

//
// MessageId: MSG_FORMAT_CANCELLED
//
// MessageText:
//
//  The format operation was cancelled.
//
#define MSG_FORMAT_CANCELLED             0x0000237AL

//
// MessageId: MSG_MUST_COMMIT_BREAK
//
// MessageText:
//
//  You have selected a partition that is still a member of a mirror set.  Breaking the mirror set relationship does not actually happen until you quit Disk Administrator or choose the Commit Changes Now command.
//  
//  Please do one or the other of these actions and then delete the partition.
//
#define MSG_MUST_COMMIT_BREAK            0x000026A8L

//
// MessageId: MSG_CANNOT_LOCK_PAGEFILE
//
// MessageText:
//
//  The drive letter cannot be changed because a Windows NT paging file is located on this drive.
//  
//  Relocate the paging file using the control panel system option.
//
#define MSG_CANNOT_LOCK_PAGEFILE         0x000026A9L

//
// MessageId: MSG_CDROM_LETTER_ERROR
//
// MessageText:
//
//  An error occurred attempting to change the CdROM drive letter.
//  
//  The drive letter has not been changed.
//
#define MSG_CDROM_LETTER_ERROR           0x000026AAL

//
// MessageId: MSG_CANNOT_LOCK_CDROM
//
// MessageText:
//
//  The CdROM cannot be locked for exclusive use.
//  
//  Please check to see if some applications are currently accessing the drive.  If so, close them and try again.
//
#define MSG_CANNOT_LOCK_CDROM            0x000026ABL

//
// MessageId: MSG_CANNOT_LOCK_TRY_AGAIN
//
// MessageText:
//
//  The drive cannot be locked for exclusive use.
//  
//  Please check to see if some applications are currently accessing the drive.  If so, close them and try again.
//
#define MSG_CANNOT_LOCK_TRY_AGAIN        0x000026ACL

//
// MessageId: MSG_VOLUME_CHANGED
//
// MessageText:
//
//  The removable media has changed.  Insure the proper media is in the drive and perform the operation again.
//
#define MSG_VOLUME_CHANGED               0x000026ADL

//
// MessageId: MSG_CANCEL_EXIT
//
// MessageText:
//
//  exit due to cancel return.
//
#define MSG_CANCEL_EXIT                  0x000026AEL

//
// MessageId: MSG_STEP
//
// MessageText:
//
//  Next step in the format.
//
#define MSG_STEP                         0x000026AFL

//
// MessageId: MSG_NOT_COMMITTED
//
// MessageText:
//
//  The requested partitions and/or volumes have not been committed to disk.  Retry this operation after committing this change.
//
#define MSG_NOT_COMMITTED                0x000026B0L

//
// MessageId: MSG_DRIVE_RENAME_WARNING
//
// MessageText:
//
//  This new drive letter assignment will happen immediately.
//  
//  Do you wish to continue?
//
#define MSG_DRIVE_RENAME_WARNING         0x000026B5L

//
// MessageId: MSG_NO_COMMIT
//
// MessageText:
//
//  Not all of the affected disks can be changed without restarting the NT system.
//
#define MSG_NO_COMMIT                    0x000026B6L

//
// MessageId: MSG_CANT_BREAK_WHILE_INITIALIZING
//
// MessageText:
//
//  The mirror set cannot be broken at this time.
//
#define MSG_CANT_BREAK_WHILE_INITIALIZING 0x000026B7L

//
// MessageId: MSG_INTERNAL_LETTER_ASSIGN_ERROR
//
// MessageText:
//
//  An internal error occurred and some drive letters could not be assigned.
//
#define MSG_INTERNAL_LETTER_ASSIGN_ERROR 0x000026B8L

//
// MessageId: MSG_CANNOT_LOCK_FOR_COMMIT
//
// MessageText:
//
//  Disk Administrator could not lock all of the volumes affected by the changes selected.  Please exit any applications holding references to the affected volumes and try again.
//
#define MSG_CANNOT_LOCK_FOR_COMMIT       0x000026B9L

//
// MessageId: MSG_ERROR_DURING_COMMIT
//
// MessageText:
//
//  Disk Administrator encountered an unknown error while making the requested changes.  Some of the requested actions may not have occurred.
//
#define MSG_ERROR_DURING_COMMIT          0x000026BAL

#endif // _FDISKMSG_
