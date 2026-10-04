 //***************************************************************************
 //
 // Name: ipxroute.mc
 //
 // Description:  Message file for ipxroute.exe
 //
 // History:
 //  07/14/94	AdamBa   Created.
 //
 //***************************************************************************

 //***************************************************************************
 //
 // Copyright (c) 1994 by Microsoft Corp.  All rights reserved.
 //
 //***************************************************************************
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
// MessageId: MSG_USAGE
//
// MessageText:
//
//  
//  Display and modify information about the source routing tables
//  used by IPX.
//  
//  %1 board=n clear def gbr mbr remove=xxxxxxxxxxxx
//  %1 config
//  
//    board=n       Specify the board number to check.
//    clear         Clear the source routing table.
//    def           Send packets that are destined for an
//                  unknown address to the ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    gbr           Send packets that are destined for the
//                  broadcast address (FFFF FFFF FFFF) to the
//                  ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    mbr           Send packets that are destined for a
//                  multicast address (C000 xxxx xxxx) to the
//                  ALL ROUTES broadcast
//                  (Default is SINGLE ROUTE broadcast).
//    remove=xxxx   Remove the given mac address from the
//                  source routing table.
//  
//    config        Displays information on all the bindings
//                  that IPX is configured for.
//  
//  All parameters should be separated by spaces.
//
#define MSG_USAGE                        0x00002710L

//
// MessageId: MSG_INTERNAL_ERROR
//
// MessageText:
//
//  Invalid parameters (internal error).
//
#define MSG_INTERNAL_ERROR               0x00002711L

//
// MessageId: MSG_INVALID_BOARD
//
// MessageText:
//
//  Invalid board number.
//
#define MSG_INVALID_BOARD                0x00002712L

//
// MessageId: MSG_ADDRESS_NOT_FOUND
//
// MessageText:
//
//  Address not in table.
//
#define MSG_ADDRESS_NOT_FOUND            0x00002713L

//
// MessageId: MSG_UNKNOWN_ERROR
//
// MessageText:
//
//  Unknown error.
//
#define MSG_UNKNOWN_ERROR                0x00002714L

//
// MessageId: MSG_OPEN_FAILED
//
// MessageText:
//
//  Unable to open transport %1.
//
#define MSG_OPEN_FAILED                  0x00002715L

//
// MessageId: MSG_VERSION
//
// MessageText:
//
//  NWLink Source Routing Control Program v2.00
//
#define MSG_VERSION                      0x00002716L

//
// MessageId: MSG_DEFAULT_NODE
//
// MessageText:
//
//    DEFault Node     (Unknown) Addresses are sent %1
//
#define MSG_DEFAULT_NODE                 0x00002717L

//
// MessageId: MSG_BROADCAST
//
// MessageText:
//
//    Broadcast (FFFF FFFF FFFF) Addresses are sent %1
//
#define MSG_BROADCAST                    0x00002718L

//
// MessageId: MSG_MULTICAST
//
// MessageText:
//
//    Multicast (C000 xxxx xxxx) Addresses are sent %1
//
#define MSG_MULTICAST                    0x00002719L

//
// MessageId: MSG_ALL_ROUTE
//
// MessageText:
//
//  ALL ROUTE BROADCAST%0
//
#define MSG_ALL_ROUTE                    0x0000271AL

//
// MessageId: MSG_SINGLE_ROUTE
//
// MessageText:
//
//  SINGLE ROUTE BROADCAST%0
//
#define MSG_SINGLE_ROUTE                 0x0000271BL

//
// MessageId: MSG_INVALID_REMOVE
//
// MessageText:
//
//  Invalid value for the remove node number.
//
#define MSG_INVALID_REMOVE               0x0000271CL

//
// MessageId: MSG_BAD_PARAMETERS
//
// MessageText:
//
//  Error getting parameters from IPX (%1): %0
//
#define MSG_BAD_PARAMETERS               0x0000271DL

//
// MessageId: MSG_SET_DEFAULT_ERROR
//
// MessageText:
//
//  Error setting DEFAULT flag to IPX (%1): %0
//
#define MSG_SET_DEFAULT_ERROR            0x0000271EL

//
// MessageId: MSG_SET_BROADCAST_ERROR
//
// MessageText:
//
//  Error setting BROADCAST flag to IPX (%1): %0
//
#define MSG_SET_BROADCAST_ERROR          0x0000271FL

//
// MessageId: MSG_SET_MULTICAST_ERROR
//
// MessageText:
//
//  Error setting MULTICAST flag to IPX (%1): %0
//
#define MSG_SET_MULTICAST_ERROR          0x00002720L

//
// MessageId: MSG_REMOVE_ADDRESS_ERROR
//
// MessageText:
//
//  Error removing address from source routing table (%1): %0
//
#define MSG_REMOVE_ADDRESS_ERROR         0x00002721L

//
// MessageId: MSG_CLEAR_TABLE_ERROR
//
// MessageText:
//
//  Error clearing source routing table (%1): %0
//
#define MSG_CLEAR_TABLE_ERROR            0x00002722L

//
// MessageId: MSG_QUERY_CONFIG_ERROR
//
// MessageText:
//
//  Error querying config (%1): %0
//
#define MSG_QUERY_CONFIG_ERROR           0x00002723L

//
// MessageId: MSG_SHOW_INTERNAL_NET
//
// MessageText:
//
//  IPX internal network number %1
//
#define MSG_SHOW_INTERNAL_NET            0x00002724L

//
// MessageId: MSG_SHOW_NET_NUMBER
//
// MessageText:
//
//  net %1: network number %2, frame type %3, device %4 (%5)%6
//
#define MSG_SHOW_NET_NUMBER              0x00002725L

//
// MessageId: MSG_ETHERNET_II
//
// MessageText:
//
//  ethernet ii%0
//
#define MSG_ETHERNET_II                  0x00002726L

//
// MessageId: MSG_802_3
//
// MessageText:
//
//  802.3%0
//
#define MSG_802_3                        0x00002727L

//
// MessageId: MSG_802_2
//
// MessageText:
//
//  802.2%0
//
#define MSG_802_2                        0x00002728L

//
// MessageId: MSG_SNAP
//
// MessageText:
//
//  snap%0
//
#define MSG_SNAP                         0x00002729L

//
// MessageId: MSG_ARCNET
//
// MessageText:
//
//  arcnet%0
//
#define MSG_ARCNET                       0x0000272AL

//
// MessageId: MSG_UNKNOWN
//
// MessageText:
//
//  unknown%0
//
#define MSG_UNKNOWN                      0x0000272BL

//
// MessageId: MSG_LEGEND_BINDING_SET
//
// MessageText:
//
//  * binding set member  %0
//
#define MSG_LEGEND_BINDING_SET           0x0000272CL

//
// MessageId: MSG_LEGEND_ACTIVE_WAN
//
// MessageText:
//
//  + active wan line  %0
//
#define MSG_LEGEND_ACTIVE_WAN            0x0000272DL

//
// MessageId: MSG_LEGEND_DOWN_WAN
//
// MessageText:
//
//  - down wan line  %0
//
#define MSG_LEGEND_DOWN_WAN              0x0000272EL

