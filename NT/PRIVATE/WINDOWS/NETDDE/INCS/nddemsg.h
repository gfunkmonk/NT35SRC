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
// MessageId: MSG001
//
// MessageText:
//
//  NetDDE Service on node "%1" started.
//
#define MSG001                           0x00000001L

//
// MessageId: MSG002
//
// MessageText:
//
//  NetDDE Service on node "%1" has been stopped.
//
#define MSG002                           0x00000002L

//
// MessageId: MSG003
//
// MessageText:
//
//  Invalid COPYDATA size %1 received.
//
#define MSG003                           0x00000003L

//
// MessageId: MSG004
//
// MessageText:
//
//  Invalid COPYDATA command %1 received.
//
#define MSG004                           0x00000004L

//
// MessageId: MSG005
//
// MessageText:
//
//  Failed creating new server packetizer for connection id %d
//
#define MSG005                           0x00000005L

//
// MessageId: MSG007
//
// MessageText:
//
//  NetDDE Agent %1 Coming Alive
//
#define MSG007                           0x00000006L

//
// MessageId: MSG008
//
// MessageText:
//
//  NetDDE Agent %1 Dying
//
#define MSG008                           0x00000007L

//
// MessageId: MSG009
//
// MessageText:
//
//  Cannot load function address of "%1" from "%2" DLL
//
#define MSG009                           0x00000008L

//
// MessageId: MSG010
//
// MessageText:
//
//  Error loading "%1" DLL: %2
//
#define MSG010                           0x00000009L

//
// MessageId: MSG011
//
// MessageText:
//
//  Error loading "%1" DLL functions
//
#define MSG011                           0x0000000AL

//
// MessageId: MSG012
//
// MessageText:
//
//  Wrong version of "%1" DLL: %2
//  Disabling this interface.
//
#define MSG012                           0x0000000BL

//
// MessageId: MSG013
//
// MessageText:
//
//  Initialization of "%1" DLL failed
//
#define MSG013                           0x0000000CL

//
// MessageId: MSG015
//
// MessageText:
//
//  Cannot close while DDE conversations are in progress. WM_CLOSE ignored.
//
#define MSG015                           0x0000000DL

//
// MessageId: MSG016
//
// MessageText:
//
//  DdeGetQualityOfService() failed: %1
//
#define MSG016                           0x0000000EL

//
// MessageId: MSG017
//
// MessageText:
//
//  WM_DDE_ACK received, WinInfo in unknown state: %1
//
#define MSG017                           0x0000000FL

//
// MessageId: MSG018
//
// MessageText:
//
//  Too many terminates received or wrong window:
//  %1
//  %2
//
#define MSG018                           0x00000010L

//
// MessageId: MSG019
//
// MessageText:
//
//  Invalid network node name: "%1" from "%2"
//
#define MSG019                           0x00000011L

//
// MessageId: MSG020
//
// MessageText:
//
//  No application name: "%1"
//
#define MSG020                           0x00000012L

//
// MessageId: MSG021
//
// MessageText:
//
//  Invalid application name: "%1" from "%2"
//
#define MSG021                           0x00000013L

//
// MessageId: MSG022
//
// MessageText:
//
//  Could not create client-side agent window for "%1" client
//
#define MSG022                           0x00000014L

//
// MessageId: MSG023
//
// MessageText:
//
//  Extraneous %1 from DDE Client "%2"
//
#define MSG023                           0x00000015L

//
// MessageId: MSG024
//
// MessageText:
//
//  WM_DDE_ACK from DDE Client "%1" not matching DATA: %2
//
#define MSG024                           0x00000016L

//
// MessageId: MSG025
//
// MessageText:
//
//  Extraneous WM_DDE_DATA response from DDE Server "%1"
//
#define MSG025                           0x00000017L

//
// MessageId: MSG026
//
// MessageText:
//
//  %1 from DDE Server "%2" not matching %3: %4
//
#define MSG026                           0x00000018L

//
// MessageId: MSG027
//
// MessageText:
//
//  NULL hData from WM_DDE_ADVISE Client: "%1"
//
#define MSG027                           0x00000019L

//
// MessageId: MSG028
//
// MessageText:
//
//  Overflow of queue (%1) while waiting for initial advise
//
#define MSG028                           0x0000001AL

//
// MessageId: MSG029
//
// MessageText:
//
//  Error adding atom: "%1" ==> %2,
//  Atom retrieved: "%3"
//
#define MSG029                           0x0000001BL

//
// MessageId: MSG030
//
// MessageText:
//
//  Unable to add atom "%1" ==> NULL
//
#define MSG030                           0x0000001CL

//
// MessageId: MSG031
//
// MessageText:
//
//  RequestExec(): Command Line non-existent.
//
#define MSG031                           0x0000001DL

//
// MessageId: MSG032
//
// MessageText:
//
//  GetShareInfo Error: %1
//
#define MSG032                           0x0000001EL

//
// MessageId: MSG033
//
// MessageText:
//
//  Share "%1" not shareable with remote nodes
//
#define MSG033                           0x0000001FL

//
// MessageId: MSG034
//
// MessageText:
//
//  GetShareInfo "%1" Size Error: %2 / %3
//
#define MSG034                           0x00000020L

//
// MessageId: MSG035
//
// MessageText:
//
//  Access Denied. Granted access = %1, Error code: %2
//
#define MSG035                           0x00000021L

//
// MessageId: MSG036
//
// MessageText:
//
//  Unknown Share Type: %1
//
#define MSG036                           0x00000022L

//
// MessageId: MSG037
//
// MessageText:
//
//  Could not create server-side agent window
//  for client app "%1" on node "%2"
//
#define MSG037                           0x00000023L

//
// MessageId: MSG038
//
// MessageText:
//
//  IpcInitConversation: null App "%1" or Topic "%2" atoms
//
#define MSG038                           0x00000024L

//
// MessageId: MSG039
//
// MessageText:
//
//  EXEC of "%1" failed: status = %2
//
#define MSG039                           0x00000025L

//
// MessageId: MSG040
//
// MessageText:
//
//  EXEC of "%1" failed: unknown status!
//
#define MSG040                           0x00000026L

//
// MessageId: MSG041
//
// MessageText:
//
//  Message: %1 to a non-existent window: %2
//
#define MSG041                           0x00000027L

//
// MessageId: MSG042
//
// MessageText:
//
//  INTERNAL ERROR -- DDE ACK to an unknown DDE Command: %1
//
#define MSG042                           0x00000028L

//
// MessageId: MSG043
//
// MessageText:
//
//  INTERNAL ERROR -- IpcXmitPacket %1 hDder handle should match %2
//
#define MSG043                           0x00000029L

//
// MessageId: MSG044
//
// MessageText:
//
//  Lock failed for %1 memory alloc
//
#define MSG044                           0x0000002AL

//
// MessageId: MSG045
//
// MessageText:
//
//  Not enough memory for %1 bytes msg: WM_DDE_EXECUTE
//
#define MSG045                           0x0000002BL

//
// MessageId: MSG046
//
// MessageText:
//
//  IpcXmitPacket(%1): null Item atom for "%2"
//
#define MSG046                           0x0000002CL

//
// MessageId: MSG047
//
// MessageText:
//
//  Extraneous ACK apparently to an %1
//  From "%2" client -> "%3" app
//
#define MSG047                           0x0000002DL

//
// MessageId: MSG048
//
// MessageText:
//
//  %1 ACK not to an %1 [%2]
//  From "%3" client -> "%4" app
//
#define MSG048                           0x0000002EL

//
// MessageId: MSG049
//
// MessageText:
//
//  IpcXmitPkt() UNKNOWN CMD: %1
//
#define MSG049                           0x0000002FL

//
// MessageId: MSG050
//
// MessageText:
//
//  Not enough memory for metafile copy: %1
//
#define MSG050                           0x00000030L

//
// MessageId: MSG051
//
// MessageText:
//
//  No metafile in metafilepict
//
#define MSG051                           0x00000031L

//
// MessageId: MSG052
//
// MessageText:
//
//  Could not lock metafilepict
//
#define MSG052                           0x00000032L

//
// MessageId: MSG053
//
// MessageText:
//
//  Could not lock memory for metafile handle
//
#define MSG053                           0x00000033L

//
// MessageId: MSG055
//
// MessageText:
//
//  Not enough memory for metafilepict: %1
//
#define MSG055                           0x00000034L

//
// MessageId: MSG056
//
// MessageText:
//
//  Not enough memory for bitmap copy: %1
//
#define MSG056                           0x00000035L

//
// MessageId: MSG057
//
// MessageText:
//
//  Could not lock bitmap
//
#define MSG057                           0x00000036L

//
// MessageId: MSG058
//
// MessageText:
//
//  Could not lock memory for bitmap handle
//
#define MSG058                           0x00000037L

//
// MessageId: MSG059
//
// MessageText:
//
//  Unable to add to DDE msg queue. Newest: %1, Oldest: %2, Entries: %3
//
#define MSG059                           0x00000038L

//
// MessageId: MSG060
//
// MessageText:
//
//  DDEQFree() releasing invalid msg handle %1
//
#define MSG060                           0x00000039L

//
// MessageId: MSG061
//
// MessageText:
//
//  Internal Error -- Unknown Security Type %1
//
#define MSG061                           0x0000003AL

//
// MessageId: MSG062
//
// MessageText:
//
//  Could not create password dialog box: %1
//
#define MSG062                           0x0000003BL

//
// MessageId: MSG063
//
// MessageText:
//
//  Invalid share type request: %1
//
#define MSG063                           0x0000003CL

//
// MessageId: MSG064
//
// MessageText:
//
//  Unable to open current thread or process token: %1
//
#define MSG064                           0x0000003DL

//
// MessageId: MSG065
//
// MessageText:
//
//  Unable to get user account info from open token: %1
//
#define MSG065                           0x0000003EL

//
// MessageId: MSG066
//
// MessageText:
//
//  Unable to get user token info: %1
//
#define MSG066                           0x0000003FL

//
// MessageId: MSG068
//
// MessageText:
//
//  Unable to impersonate DDE client: %1
//
#define MSG068                           0x00000040L

//
// MessageId: MSG069
//
// MessageText:
//
//  Cannot add "%1" DLL.
//  Already have maximum number of network interface DLLs
//
#define MSG069                           0x00000041L

//
// MessageId: MSG070
//
// MessageText:
//
//  Cannot add "%1" DLL.
//  Network Interface DLL table exceeded maximum
//
#define MSG070                           0x00000042L

//
// MessageId: MSG071
//
// MessageText:
//
//  Unable to launch NetDDE main thread from service: %1
//
#define MSG071                           0x00000043L

//
// MessageId: MSG072
//
// MessageText:
//
//  Unable to launch DSDM main thread from service: %1
//
#define MSG072                           0x00000044L

//
// MessageId: MSG074
//
// MessageText:
//
//  StartServiceCtrlDispatcher() Failed: %1
//
#define MSG074                           0x00000045L

//
// MessageId: MSG075
//
// MessageText:
//
//  SetServiceStatus() Failed: %1
//
#define MSG075                           0x00000046L

//
// MessageId: MSG076
//
// MessageText:
//
//  ServiceControlManagerStop() to NetDDE
//
#define MSG076                           0x00000047L

//
// MessageId: MSG077
//
// MessageText:
//
//  ServiceControlManagerStop() to NetDDEdsdm
//
#define MSG077                           0x00000048L

//
// MessageId: MSG078
//
// MessageText:
//
//  NetDDE Agent is not running in user context.
//  Cannot initiate conversation.
//
#define MSG078                           0x00000049L

//
// MessageId: MSG079
//
// MessageText:
//
//  GetMetaFileBitsEx() failed: %1
//
#define MSG079                           0x0000004AL

//
// MessageId: MSG080
//
// MessageText:
//
//  SetMetaFileBitsEx() failed: %1
//
#define MSG080                           0x0000004BL

//
// MessageId: MSG081
//
// MessageText:
//
//  GetEnhMetaFileBits() failed: %1
//
#define MSG081                           0x0000004CL

//
// MessageId: MSG082
//
// MessageText:
//
//  SetEnhMetaFileBits() failed: %1
//
#define MSG082                           0x0000004DL

//
// MessageId: MSG083
//
// MessageText:
//
//  GetPaletteEntries() failed: %1
//
#define MSG083                           0x0000004EL

//
// MessageId: MSG084
//
// MessageText:
//
//  CreatePalette() failed: %1
//
#define MSG084                           0x0000004FL

//
// MessageId: MSG085
//
// MessageText:
//
//  Unable to allocate enough memory [%1] for %2 conversion: %3
//
#define MSG085                           0x00000050L

//
// MessageId: MSG086
//
// MessageText:
//
//  GlobalSize() for indirect object failed: %1
//
#define MSG086                           0x00000051L

//
// MessageId: MSG100
//
// MessageText:
//
//  Unable to allocate enough (%2) memory for a %1 packet
//
#define MSG100                           0x00000064L

//
// MessageId: MSG101
//
// MessageText:
//
//  Unable to allocate enough (%1) memory for packet copy
//
#define MSG101                           0x00000065L

//
// MessageId: MSG102
//
// MessageText:
//
//  SECURITY VIOLATION: %1 on "%2"
//
#define MSG102                           0x00000066L

//
// MessageId: MSG103
//
// MessageText:
//
//  SECURITY VIOLATION: DDE_EXECUTE
//
#define MSG103                           0x00000067L

//
// MessageId: MSG105
//
// MessageText:
//
//  %1 will not auto-close ... not enough timers
//
#define MSG105                           0x00000068L

//
// MessageId: MSG106
//
// MessageText:
//
//  Packet out of sequence from "%1"
//  Received: %2, Expecting %3, Status: %4
//
#define MSG106                           0x00000069L

//
// MessageId: MSG107
//
// MessageText:
//
//  Transmit timeout (%2 secs) to "%1" ... closing connection
//
#define MSG107                           0x0000006AL

//
// MessageId: MSG108
//
// MessageText:
//
//  No connect commnad for (%2 secs) from "%1" ... closing connection
//
#define MSG108                           0x0000006BL

//
// MessageId: MSG109
//
// MessageText:
//
//  No connect commnad response for (%2 secs) from "%1" ... closing connection
//
#define MSG109                           0x0000006CL

//
// MessageId: MSG110
//
// MessageText:
//
//  Pausing (%2 secs) for remote side "%1" to get memory ... retrying
//
#define MSG110                           0x0000006DL

//
// MessageId: MSG111
//
// MessageText:
//
//  No response %2/%3 from remote side "%1" for pktid %4
//
#define MSG111                           0x0000006EL

//
// MessageId: MSG112
//
// MessageText:
//
//  Too many no response retries (%2) for same packet from "%1" ... closing connection
//
#define MSG112                           0x0000006FL

//
// MessageId: MSG113
//
// MessageText:
//
//  "%1" node does not speak any of our protocols
//
#define MSG113                           0x00000070L

//
// MessageId: MSG114
//
// MessageText:
//
//  "%1" node selected an invalid protocol: %2
//
#define MSG114                           0x00000071L

//
// MessageId: MSG115
//
// MessageText:
//
//  "%1" their name was not "%2"
//
#define MSG115                           0x00000072L

//
// MessageId: MSG116
//
// MessageText:
//
//  Unusual connect name error %2 from %1
//
#define MSG116                           0x00000073L

//
// MessageId: MSG117
//
// MessageText:
//
//  Unusual connect error from %1. Class: %2, Error: %3
//
#define MSG117                           0x00000074L

//
// MessageId: MSG118
//
// MessageText:
//
//  Too many transmit retries (%2) for same packet to "%1" ... closing connection
//
#define MSG118                           0x00000075L

//
// MessageId: MSG119
//
// MessageText:
//
//  Transmit error on pktid %2 to "%1"
//
#define MSG119                           0x00000076L

//
// MessageId: MSG120
//
// MessageText:
//
//  Too many retries to "%1" for xmit errors (%2) ... closing connection
//
#define MSG120                           0x00000077L

//
// MessageId: MSG121
//
// MessageText:
//
//  Memory error on pktid %2 xmitted to "%1"
//
#define MSG121                           0x00000078L

//
// MessageId: MSG122
//
// MessageText:
//
//  Too many xmit retries to "%1" for memory errors (%2) ... closing connection
//
#define MSG122                           0x00000079L

//
// MessageId: MSG123
//
// MessageText:
//
//  Out of timers to start a memory pause for a xmit to "%1"
//
#define MSG123                           0x0000007AL

//
// MessageId: MSG124
//
// MessageText:
//
//  Unexpectedly got a NULL router in ProcessHopBroken!
//
#define MSG124                           0x0000007BL

//
// MessageId: MSG125
//
// MessageText:
//
//  Exceeded 100 expands in routing lookup!
//  Route info bogus: %1
//
#define MSG125                           0x0000007CL

//
// MessageId: MSG130
//
// MessageText:
//
//  ROUTE ERROR %1: "%2"->"%3" @ "%4":
//  Unknown route error!
//
#define MSG130                           0x00000082L

//
// MessageId: MSG142
//
// MessageText:
//
//  "%1" their name is the same as ours "%2"
//
#define MSG142                           0x00000083L

//
// MessageId: MSG200
//
// MessageText:
//
//  Connect failed to "%1": %2
//
#define MSG200                           0x000000C8L

//
// MessageId: MSG201
//
// MessageText:
//
//  Receive error. Session to %1 closed abnormally: %2
//
#define MSG201                           0x000000C9L

//
// MessageId: MSG202
//
// MessageText:
//
//  Send error. Session to %1 closed abonormally: %2
//
#define MSG202                           0x000000CAL

//
// MessageId: MSG203
//
// MessageText:
//
//  Not enough memory for Listen NCB
//
#define MSG203                           0x000000CBL

//
// MessageId: MSG204
//
// MessageText:
//
//  Attempt to determine the number of Lanas failed.
//
#define MSG204                           0x000000CCL

//
// MessageId: MSG205
//
// MessageText:
//
//  Unable to delete our name "%1" from interface: status = %2
//
#define MSG205                           0x000000CDL

//
// MessageId: MSG206
//
// MessageText:
//
//  Listen failed: %1
//
#define MSG206                           0x000000CEL

//
// MessageId: MSG207
//
// MessageText:
//
//  Node name too long for connect on NetBIOS: "%1"
//
#define MSG207                           0x000000CFL

//
// MessageId: MSG208
//
// MessageText:
//
//  Local node name too long for use on NetBIOS: "%1"
//
#define MSG208                           0x000000D0L

//
// MessageId: MSG209
//
// MessageText:
//
//  NetBIOS Reset Adapter Command on Lana number %1 failed: %2
//
#define MSG209                           0x000000D1L

//
// MessageId: MSG210
//
// MessageText:
//
//  Int 5C Vector set but NetBIOS not installed.
//
#define MSG210                           0x000000D2L

//
// MessageId: MSG211
//
// MessageText:
//
//  NetBIOS Adapter Status Query on Lana number %1 failed: %2
//
#define MSG211                           0x000000D3L

//
// MessageId: MSG212
//
// MessageText:
//
//  Node name "%1" already in use on Lana number %2
//
#define MSG212                           0x000000D4L

//
// MessageId: MSG213
//
// MessageText:
//
//  Unknown Error Code returned by Lana number %1 while adding node name to network: %2
//
#define MSG213                           0x000000D5L

//
// MessageId: MSG214
//
// MessageText:
//
//  Setting up initial listen failed.
//
#define MSG214                           0x000000D6L

//
// MessageId: MSG400
//
// MessageText:
//
//  Cannot impersonate client: %1
//
#define MSG400                           0x00000190L

//
// MessageId: MSG402
//
// MessageText:
//
//  NDdeShareDel RegDeleteKey error (%1)(%2) LE:%3
//
#define MSG402                           0x00000191L

//
// MessageId: MSG405
//
// MessageText:
//
//  NDdeApiInit - could not build the ShareDatabase SD
//
#define MSG405                           0x00000192L

//
// MessageId: MSG406
//
// MessageText:
//
//  LocalAlloc failed: %1
//
#define MSG406                           0x00000193L

//
// MessageId: MSG407
//
// MessageText:
//
//  InitializeAcl failed: %1
//
#define MSG407                           0x00000194L

//
// MessageId: MSG408
//
// MessageText:
//
//  AddAccessAllowedAce failed: %1
//
#define MSG408                           0x00000195L

//
// MessageId: MSG409
//
// MessageText:
//
//  GetAce failed: %1
//
#define MSG409                           0x00000196L

//
// MessageId: MSG410
//
// MessageText:
//
//  AllocateAndInitializeSid failed: %1
//
#define MSG410                           0x00000197L

//
// MessageId: MSG411
//
// MessageText:
//
//  SetSecurityDescriptorOwner failed: %1
//
#define MSG411                           0x00000198L

//
// MessageId: MSG412
//
// MessageText:
//
//  SetSecurityDescriptorGroup failed: %1
//
#define MSG412                           0x00000199L

//
// MessageId: MSG413
//
// MessageText:
//
//  SetSecurityDescriptorDacl failed: %1
//
#define MSG413                           0x0000019AL

//
// MessageId: MSG414
//
// MessageText:
//
//  MakeSelfRelative failed: %1
//
#define MSG414                           0x0000019BL

//
// MessageId: MSG415
//
// MessageText:
//
//  Could not read the ShareName Security Descriptor: %1
//
#define MSG415                           0x0000019CL

