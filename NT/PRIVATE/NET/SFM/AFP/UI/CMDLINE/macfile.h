//
// Net error file for basename MACFILE_IDS_BASE = 1000
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


//
// MessageId: IDS_AFPERR_InvalidVolumeName
//
// MessageText:
//
//  The Macintosh-Accessible volume name specified is invalid.
//  Please specify a valid volume name without colons.
//
#define IDS_AFPERR_InvalidVolumeName     0x000003E9L

//
// MessageId: IDS_AFPERR_InvalidId
//
// MessageText:
//
//  An internal error -6002 occurred.
//
#define IDS_AFPERR_InvalidId             0x000003EAL

//
// MessageId: IDS_AFPERR_InvalidParms
//
// MessageText:
//
//  An internal error -6003 occurred.
//
#define IDS_AFPERR_InvalidParms          0x000003EBL

//
// MessageId: IDS_AFPERR_CodePage
//
// MessageText:
//
//  An internal error -6004 occurred.
//
#define IDS_AFPERR_CodePage              0x000003ECL

//
// MessageId: IDS_AFPERR_InvalidServerName
//
// MessageText:
//
//  
//  The server name specified is invalid.
//  Specify a valid server name without colons.
//
#define IDS_AFPERR_InvalidServerName     0x000003EDL

//
// MessageId: IDS_AFPERR_DuplicateVolume
//
// MessageText:
//
//  A volume with this name already exists.
//  Please use another name for the new volume.
//
#define IDS_AFPERR_DuplicateVolume       0x000003EEL

//
// MessageId: IDS_AFPERR_VolumeBusy
//
// MessageText:
//
//  The selected Macintosh-Accessible volume is currently in use by Macintoshes. 
//  The selected volume may be removed only when no Macintosh workstations are 
//  connected to it.
//
#define IDS_AFPERR_VolumeBusy            0x000003EFL

//
// MessageId: IDS_AFPERR_VolumeReadOnly
//
// MessageText:
//
//  An internal error -6008 occurred.
//
#define IDS_AFPERR_VolumeReadOnly        0x000003F0L

//
// MessageId: IDS_AFPERR_DirectoryNotInVolume
//
// MessageText:
//
//  The selected directory does not belong to a Macintosh-Accessible volume.
//  The Macintosh view of directory permissions is only available for 
//  directories that are part of a Macintosh-Accessible volume.
//
#define IDS_AFPERR_DirectoryNotInVolume  0x000003F1L

//
// MessageId: IDS_AFPERR_SecurityNotSupported
//
// MessageText:
//
//  The Macintosh view of directory permissions is not available for directories 
//  on CD-ROM disks.
//
#define IDS_AFPERR_SecurityNotSupported  0x000003F2L

//
// MessageId: IDS_AFPERR_BufferSize
//
// MessageText:
//
//  An internal error -6011 occurred.
//
#define IDS_AFPERR_BufferSize            0x000003F3L

//
// MessageId: IDS_AFPERR_DuplicateExtension
//
// MessageText:
//
//  This file extension is already associated with a Creator/Type item.
//
#define IDS_AFPERR_DuplicateExtension    0x000003F4L

//
// MessageId: IDS_AFPERR_UnsupportedFS
//
// MessageText:
//
//  File Server for Macintosh service only supports NTFS partitions.
//  Please choose a directory on an NTFS partition.
//
#define IDS_AFPERR_UnsupportedFS         0x000003F5L

//
// MessageId: IDS_AFPERR_InvalidSessionType
//
// MessageText:
//
//  The message has been sent, but not all of the connected workstations have 
//  received it. Some workstations are running an unsupported version of 
//  System software.
//
#define IDS_AFPERR_InvalidSessionType    0x000003F6L

//
// MessageId: IDS_AFPERR_InvalidServerState
//
// MessageText:
//
//  An internal error -6015 occurred.
//
#define IDS_AFPERR_InvalidServerState    0x000003F7L

//
// MessageId: IDS_AFPERR_NestedVolume
//
// MessageText:
//
//  Cannot create a Macintosh-Accessible volume within another volume.
//  Please choose a directory that is not within a volume.
//
#define IDS_AFPERR_NestedVolume          0x000003F8L

//
// MessageId: IDS_AFPERR_InvalidComputername
//
// MessageText:
//
//  The target server is not setup to accept Remote Procedure Calls.
//
#define IDS_AFPERR_InvalidComputername   0x000003F9L

//
// MessageId: IDS_AFPERR_DuplicateTypeCreator
//
// MessageText:
//
//  The selected Creator/Type item already exists.
//
#define IDS_AFPERR_DuplicateTypeCreator  0x000003FAL

//
// MessageId: IDS_AFPERR_TypeCreatorNotExistant
//
// MessageText:
//
//  The selected Creator/Type item no longer exists.
//  This item was deleted by an other administrator.
//
#define IDS_AFPERR_TypeCreatorNotExistant 0x000003FBL

//
// MessageId: IDS_AFPERR_CannotDeleteDefaultTC
//
// MessageText:
//
//  The default Creator/Type item cannot be deleted.
//
#define IDS_AFPERR_CannotDeleteDefaultTC 0x000003FCL

//
// MessageId: IDS_AFPERR_CannotEditDefaultTC
//
// MessageText:
//
//  The default Creator/Type item may not be edited.
//
#define IDS_AFPERR_CannotEditDefaultTC   0x000003FDL

//
// MessageId: IDS_AFPERR_InvalidTypeCreator
//
// MessageText:
//
//  The Creator/Type item is invalid.
//
#define IDS_AFPERR_InvalidTypeCreator    0x000003FEL

//
// MessageId: IDS_AFPERR_InvalidExtension
//
// MessageText:
//
//  The file extension is invalid.
//
#define IDS_AFPERR_InvalidExtension      0x000003FFL

//
// MessageId: IDS_AFPERR_TooManyEtcMaps
//
// MessageText:
//
//  An internal error -6024 occurred.
//
#define IDS_AFPERR_TooManyEtcMaps        0x00000400L

//
// MessageId: IDS_AFPERR_InvalidPassword
//
// MessageText:
//
//  The password specified is invalid. Please specify a valid password.
//
#define IDS_AFPERR_InvalidPassword       0x00000401L

//
// MessageId: IDS_AFPERR_VolumeNonExist
//
// MessageText:
//
//  The selected Macintosh-Accessible volume no longer exists.
//  Another administrator has removed the selected volume.
//
#define IDS_AFPERR_VolumeNonExist        0x00000402L

//
// MessageId: IDS_AFPERR_NoSuchUserGroup
//
// MessageText:
//
//  Neither the Owner nor the Primary Group account names are valid.
//  Please specify valid account names for the Owner and Primary Group of 
//  this directory.
//
#define IDS_AFPERR_NoSuchUserGroup       0x00000403L

//
// MessageId: IDS_AFPERR_NoSuchUser
//
// MessageText:
//
//  The Owner account name is invalid. Please specify a valid account name 
//  or the Owner of this directory.
//
#define IDS_AFPERR_NoSuchUser            0x00000404L

//
// MessageId: IDS_AFPERR_NoSuchGroup
//
// MessageText:
//
//  The Primary Group account name is invalid. Please specify a valid account 
//  name for the Primary Group of this directory.
//
#define IDS_AFPERR_NoSuchGroup           0x00000405L

//
// MessageId: IDS_GENERAL_SYNTAX
//
// MessageText:
//
//  The syntax of this command is:                                         
//  
//  MACFILE  {VOLUME | DIRECTORY | SERVER | FORKIZE} options                
//  
//  The syntax for help on the options available in MACFILE is              
//  
//      MACFILE VOLUME      For syntax on managing volumes.                 
//      MACFILE DIRECTORY   For syntax on creating or changing directories. 
//      MACFILE SERVER      For syntax on configuring the SFM server.
//      MACFILE FORKIZE     For syntax on joining the data fork and         
//                          resource fork of a file into one file or        
//                          changing the type or creator of the file.       
//  
//  For complete help about options, see SFM online help in File Manager.
//
#define IDS_GENERAL_SYNTAX               0x00000406L

//
// MessageId: IDS_VOLUME_SYNTAX
//
// MessageText:
//
//  The syntax of this command is:                                         
//  
//      MACFILE VOLUME /ADD	                                                    
//          [/SERVER:\\computername]        The default is local.
//          /NAME:volumename                                                      
//          /PATH:root directory path                                             
//          [/READONLY:TRUE|FALSE]          The default is False.
//          [/GUESTSALLOWED:TRUE|FALSE]     The default is True.
//          [/PASSWORD:password]            The default is no password. 
//          [/MAXUSERS:number|UNLIMTED]     The default is unlimited.  
//  
//      MACFILE VOLUME /REMOVE                                                  
//          [/SERVER:\\computername]        The default is local.
//          /NAME:volumename                                                      
//  
//      MACFILE VOLUME /SET	                                                    
//          [/SERVER:\\computername]        The default is local.
//          /NAME:volumename                                                      
//          [/READONLY:TRUE|FALSE]                                                
//          [/GUESTSALLOWED:TRUE|FALSE]                                           
//          [/PASSWORD:password]                                                  
//          [/MAXUSERS:number|UNLIMITED]                     
//  
//  For complete help about options, see SFM online help in File Manager.
//
#define IDS_VOLUME_SYNTAX                0x00000407L

//
// MessageId: IDS_DIRECTORY_SYNTAX
//
// MessageText:
//
//  The syntax of this command is:                                         
//  
//      MACFILE DIRECTORY                                                       
//          [/SERVER:\\computername]        The default is local.         
//          /PATH:directory path                                                  
//          [/OWNER:ownername]                                                    
//          [/GROUP:groupname]                                                    
//          [/PERMISSIONS:string of eleven binary digits (e.g. 11111011011)]       
//  
//                        First (leftmost) digit controls OwnerSeeFiles permission.
//                        Second digit controls OwnerSeeFolders permission.  
//                        Third digit controls OwnerMakeChanges permission.      
//                        Fourth digit controls GroupSeeFiles permission.        
//                        Fifth digit controls GroupSeeFolders permission.       
//                        Sixth digit controls GroupMakeChanges permission.      
//                        Seventh digit controls WorldSeeFiles permission.       
//                        Eigth digit controls WorldSeeFolders permission.      
//                        Ninth digit controls WorldMakeChanges permission.      
//                        Tenth digit indicates that the directory cannot be 
//                        renamed, moved or deleted.                             
//                        Eleventh digit indicates if these changes are          
//                        to be recursively applied.                             
//  
//  For complete help about options, see SFM online help in File Manager.
//
#define IDS_DIRECTORY_SYNTAX             0x00000408L

//
// MessageId: IDS_SERVER_SYNTAX
//
// MessageText:
//
//  The syntax of this command is:                                         
//  
//      MACFILE SERVER 	                                                        
//          [/SERVER:\\computername]        The default is local. 
//          [/MAXSESSIONS:number|UNLIMITED]                                       
//          [/LOGINMESSAGE:message]                                               
//          [/GUESTSALLOWED:TRUE|FALSE]                                           
//  
//  For complete help about options, see SFM online help in File Manager.
//
#define IDS_SERVER_SYNTAX                0x00000409L

//
// MessageId: IDS_FORKIZE_SYNTAX
//
// MessageText:
//
//  The syntax of this command is:                                         
//  
//      MACFILE FORKIZE	                                                        
//          [/SERVER:\\computername]        The default is local.
//          [/TYPE:typename]                                                      
//          [/CREATOR:creatorname]                                                
//          [/DATAFORK:filepath]                                                  
//          [/RESOURCEFORK:filepath]                                              
//          /TARGETFILE:filepath                                                  
//  
//  For complete help about options, see SFM online help in File Manager.
//
#define IDS_FORKIZE_SYNTAX               0x0000040AL

//
// MessageId: IDS_AMBIGIOUS_SWITCH_ERROR
//
// MessageText:
//
//  Syntax Error: The switch %s is ambigious.                              
//  Type MACFILE /? for help about syntax.
//
#define IDS_AMBIGIOUS_SWITCH_ERROR       0x0000040BL

//
// MessageId: IDS_UNKNOWN_SWITCH_ERROR
//
// MessageText:
//
//  Syntax Error: The switch %s is unknown.                                
//  Type MACFILE /? for help about syntax.
//
#define IDS_UNKNOWN_SWITCH_ERROR         0x0000040CL

//
// MessageId: IDS_DUPLICATE_SWITCH_ERROR
//
// MessageText:
//
//  Syntax Error: The switch %s appears multiple times.                    
//  Type MACFILE /? for help about syntax.
//
#define IDS_DUPLICATE_SWITCH_ERROR       0x0000040DL

//
// MessageId: IDS_API_ERROR
//
// MessageText:
//
//  An error %s occurred while processing the command.
//
#define IDS_API_ERROR                    0x0000040EL

//
// MessageId: IDS_SUCCESS
//
// MessageText:
//
//  The command completed successfully.
//
#define IDS_SUCCESS                      0x0000040FL

