/**************************************************************************\
* Module Name: dipscb.tpl
*
* Template C file for server dispatch generation.
*
* Copyright (c) Microsoft Corp. 1990 All Rights Reserved
*
* Created: 10-Dec-90
*
* History:
* 10-Dec-90 created by SMeans
*
\**************************************************************************/

#include "precomp.h"
#pragma hdrstop

ULONG __ClientCopyDDEIn1(PCSR_API_MSG ReplyMsg);
ULONG __ClientCopyDDEIn2(PCSR_API_MSG ReplyMsg);
ULONG __ClientCopyDDEOut1(PCSR_API_MSG ReplyMsg);
ULONG __ClientCopyDDEOut2(PCSR_API_MSG ReplyMsg);
ULONG __ClientDeleteDC(PCSR_API_MSG ReplyMsg);
ULONG __ClientEventCallback(PCSR_API_MSG ReplyMsg);
ULONG __ClientFindClose(PCSR_API_MSG ReplyMsg);
ULONG __ClientFindFirstFile(PCSR_API_MSG ReplyMsg);
ULONG __ClientFindNextFile(PCSR_API_MSG ReplyMsg);
ULONG __ClientFreeDDEHandle(PCSR_API_MSG ReplyMsg);
ULONG __ClientFreeLibrary(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetCurrentDirectory(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetDDEFlags(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetDDEHookData(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetListboxString(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetLogicalDrives(PCSR_API_MSG ReplyMsg);
ULONG __ClientGetThreadLocale(PCSR_API_MSG ReplyMsg);
ULONG __ClientLoadCreateCursorIcon(PCSR_API_MSG ReplyMsg);
ULONG __ClientLoadCreateMenu(PCSR_API_MSG ReplyMsg);
ULONG __ClientLoadLibrary(PCSR_API_MSG ReplyMsg);
ULONG __ClientSetCurrentDirectory(PCSR_API_MSG ReplyMsg);
ULONG __ClientWinExec(PCSR_API_MSG ReplyMsg);
ULONG __fnCOPYDATA(PCSR_API_MSG ReplyMsg);
ULONG __fnCOPYGLOBALDATA(PCSR_API_MSG ReplyMsg);
ULONG __fnDWORD(PCSR_API_MSG ReplyMsg);
ULONG __fnDWORDOPTINLPMSG(PCSR_API_MSG ReplyMsg);
ULONG __fnDrag(PCSR_API_MSG ReplyMsg);
ULONG __fnGDIHANDLE(PCSR_API_MSG ReplyMsg);
ULONG __fnGETTEXTLENGTHS(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINDWORD(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPCBTACTIVATESTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPCBTCSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPCBTMDICCSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPDEBUGHOOKSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPMOUSEHOOKSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPMSG(PCSR_API_MSG ReplyMsg);
ULONG __fnHkINLPRECT(PCSR_API_MSG ReplyMsg);
ULONG __fnHkOPTINLPEVENTMSG(PCSR_API_MSG ReplyMsg);
ULONG __fnINCNTOUTSTRING(PCSR_API_MSG ReplyMsg);
ULONG __fnINCNTOUTSTRINGNULL(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPCLIENTCREATESTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPCOMPAREITEMSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPDELETEITEMSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPDRAWITEMSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPDROPSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPMDICHILDCREATESTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPMDICREATESTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPMEASUREITEMSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPNORMALCREATESTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPWINDOWPOS(PCSR_API_MSG ReplyMsg);
ULONG __fnINOUTLPPOINT5(PCSR_API_MSG ReplyMsg);
ULONG __fnINOUTLPRECT(PCSR_API_MSG ReplyMsg);
ULONG __fnINOUTNCCALCSIZE(PCSR_API_MSG ReplyMsg);
ULONG __fnINOUTLPWINDOWPOS(PCSR_API_MSG ReplyMsg);
ULONG __fnINPAINTCLIPBRD(PCSR_API_MSG ReplyMsg);
ULONG __fnINSIZECLIPBRD(PCSR_API_MSG ReplyMsg);
ULONG __fnINDESTROYCLIPBRD(PCSR_API_MSG ReplyMsg);
ULONG __fnINSTRING(PCSR_API_MSG ReplyMsg);
ULONG __fnINSTRINGNULL(PCSR_API_MSG ReplyMsg);
ULONG __fnINWPARAMCHAR(PCSR_API_MSG ReplyMsg);
ULONG __fnOUTLPRECT(PCSR_API_MSG ReplyMsg);
ULONG __fnOUTSTRING(PCSR_API_MSG ReplyMsg);
ULONG __fnPAINT(PCSR_API_MSG ReplyMsg);
ULONG __fnPOPTINLPUINT(PCSR_API_MSG ReplyMsg);
ULONG __fnPOUTLPINT(PCSR_API_MSG ReplyMsg);
ULONG __fnSENTDDEMSG(PCSR_API_MSG ReplyMsg);
ULONG __fnINLPHLPSTRUCT(PCSR_API_MSG ReplyMsg);
ULONG __GetEditDS(PCSR_API_MSG ReplyMsg);
ULONG __ReleaseEditDS(PCSR_API_MSG ReplyMsg);
ULONG __WOWDlgInit(PCSR_API_MSG ReplyMsg);
ULONG __fnOUTDWORDDWORD(PCSR_API_MSG ReplyMsg);
ULONG __fnOUTDWORDINDWORD(PCSR_API_MSG ReplyMsg);
ULONG __fnOPTOUTLPDWORDOPTOUTLPDWORD(PCSR_API_MSG ReplyMsg);
ULONG __fnNEXTMENU(PCSR_API_MSG ReplyMsg);
ULONG __CopyFromClient(PCSR_API_MSG ReplyMsg);
ULONG __CopyToClient(PCSR_API_MSG ReplyMsg);
ULONG __SetFakeDialogClass(PCSR_API_MSG ReplyMsg);

PCSR_CALLBACK_ROUTINE apfnDispatch[] = {
    __ClientCopyDDEIn1,
    __ClientCopyDDEIn2,
    __ClientCopyDDEOut1,
    __ClientCopyDDEOut2,
    __ClientDeleteDC,
    __ClientEventCallback,
    __ClientFindClose,
    __ClientFindFirstFile,
    __ClientFindNextFile,
    __ClientFreeDDEHandle,
    __ClientFreeLibrary,
    __ClientGetCurrentDirectory,
    __ClientGetDDEFlags,
    __ClientGetDDEHookData,
    __ClientGetListboxString,
    __ClientGetLogicalDrives,
    __ClientGetThreadLocale,
    __ClientLoadCreateCursorIcon,
    __ClientLoadCreateMenu,
    __ClientLoadLibrary,
    __ClientSetCurrentDirectory,
    __ClientWinExec,
    __fnCOPYDATA,
    __fnCOPYGLOBALDATA,
    __fnDWORD,
    __fnDWORDOPTINLPMSG,
    __fnDrag,
    __fnGDIHANDLE,
    __fnGETTEXTLENGTHS,
    __fnHkINDWORD,
    __fnHkINLPCBTACTIVATESTRUCT,
    __fnHkINLPCBTCSTRUCT,
    __fnHkINLPCBTMDICCSTRUCT,
    __fnHkINLPDEBUGHOOKSTRUCT,
    __fnHkINLPMOUSEHOOKSTRUCT,
    __fnHkINLPMSG,
    __fnHkINLPRECT,
    __fnHkOPTINLPEVENTMSG,
    __fnINCNTOUTSTRING,
    __fnINCNTOUTSTRINGNULL,
    __fnINLPCLIENTCREATESTRUCT,
    __fnINLPCOMPAREITEMSTRUCT,
    __fnINLPDELETEITEMSTRUCT,
    __fnINLPDRAWITEMSTRUCT,
    __fnINLPDROPSTRUCT,
    __fnINLPMDICHILDCREATESTRUCT,
    __fnINLPMDICREATESTRUCT,
    __fnINLPMEASUREITEMSTRUCT,
    __fnINLPNORMALCREATESTRUCT,
    __fnINLPWINDOWPOS,
    __fnINOUTLPPOINT5,
    __fnINOUTLPRECT,
    __fnINOUTNCCALCSIZE,
    __fnINOUTLPWINDOWPOS,
    __fnINPAINTCLIPBRD,
    __fnINSIZECLIPBRD,
    __fnINDESTROYCLIPBRD,
    __fnINSTRING,
    __fnINSTRINGNULL,
    __fnINWPARAMCHAR,
    __fnOUTLPRECT,
    __fnOUTSTRING,
    __fnPAINT,
    __fnPOPTINLPUINT,
    __fnPOUTLPINT,
    __fnSENTDDEMSG,
    __fnINLPHLPSTRUCT,
    __GetEditDS,
    __ReleaseEditDS,
    __WOWDlgInit,
    __fnOUTDWORDDWORD,
    __fnOUTDWORDINDWORD,
    __fnOPTOUTLPDWORDOPTOUTLPDWORD,
    __fnNEXTMENU,
    __CopyFromClient,
    __CopyToClient,
    __SetFakeDialogClass
};

BOOLEAN afServerFuncValid[] = {
    FALSE, // ClientCopyDDEIn1
    FALSE, // ClientCopyDDEIn2
    FALSE, // ClientCopyDDEOut1
    FALSE, // ClientCopyDDEOut2
    FALSE, // ClientDeleteDC
    FALSE, // ClientEventCallback
    FALSE, // ClientFindClose
    FALSE, // ClientFindFirstFile
    FALSE, // ClientFindNextFile
    FALSE, // ClientFreeDDEHandle
    FALSE, // ClientFreeLibrary
    FALSE, // ClientGetCurrentDirectory
    FALSE, // ClientGetDDEFlags
    FALSE, // ClientGetDDEHookData
    FALSE, // ClientGetListboxString
    FALSE, // ClientGetLogicalDrives
    FALSE, // ClientGetThreadLocale
    FALSE, // ClientLoadCreateCursorIcon
    FALSE, // ClientLoadCreateMenu
    FALSE, // ClientLoadLibrary
    FALSE, // ClientSetCurrentDirectory
    FALSE, // ClientWinExec
    FALSE, // fnCOPYDATA
    FALSE, // fnCOPYGLOBALDATA
    FALSE, // fnDWORD
    FALSE, // fnDWORDOPTINLPMSG
    FALSE, // fnDrag
    FALSE, // fnGDIHANDLE
    FALSE, // fnGETTEXTLENGTHS
    FALSE, // fnHkINDWORD
    FALSE, // fnHkINLPCBTACTIVATESTRUCT
    FALSE, // fnHkINLPCBTCSTRUCT
    FALSE, // fnHkINLPCBTMDICCSTRUCT
    FALSE, // fnHkINLPDEBUGHOOKSTRUCT
    FALSE, // fnHkINLPMOUSEHOOKSTRUCT
    FALSE, // fnHkINLPMSG
    FALSE, // fnHkINLPRECT
    FALSE, // fnHkOPTINLPEVENTMSG
    FALSE, // fnINCNTOUTSTRING
    FALSE, // fnINCNTOUTSTRINGNULL
    FALSE, // fnINLPCLIENTCREATESTRUCT
    FALSE, // fnINLPCOMPAREITEMSTRUCT
    FALSE, // fnINLPDELETEITEMSTRUCT
    FALSE, // fnINLPDRAWITEMSTRUCT
    FALSE, // fnINLPDROPSTRUCT
    FALSE, // fnINLPMDICHILDCREATESTRUCT
    FALSE, // fnINLPMDICREATESTRUCT
    FALSE, // fnINLPMEASUREITEMSTRUCT
    FALSE, // fnINLPNORMALCREATESTRUCT
    FALSE, // fnINLPWINDOWPOS
    FALSE, // fnINOUTLPPOINT5
    FALSE, // fnINOUTLPRECT
    FALSE, // fnINOUTNCCALCSIZE
    FALSE, // fnINOUTLPWINDOWPOS
    FALSE, // fnINPAINTCLIPBRD
    FALSE, // fnINSIZECLIPBRD
    FALSE, // fnINDESTROYCLIPBRD
    FALSE, // fnINSTRING
    FALSE, // fnINSTRINGNULL
    FALSE, // fnINWPARAMCHAR
    FALSE, // fnOUTLPRECT
    FALSE, // fnOUTSTRING
    FALSE, // fnPAINT
    FALSE, // fnPOPTINLPUINT
    FALSE, // fnPOUTLPINT
    FALSE, // fnSENTDDEMSG
    FALSE, // fnINLPHLPSTRUCT
    FALSE, // GetEditDS
    FALSE, // ReleaseEditDS
    FALSE, // WOWDlgInit
    FALSE, // fnOUTDWORDDWORD
    FALSE, // fnOUTDWORDINDWORD
    FALSE, // fnOPTOUTLPDWORDOPTOUTLPDWORD
    FALSE, // fnNEXTMENU
    FALSE, // CopyFromClient
    FALSE, // CopyToClient
    FALSE, // SetFakeDialogClass
};

PSZ apszDispatchNames[] = {
    "ClientCopyDDEIn1",
    "ClientCopyDDEIn2",
    "ClientCopyDDEOut1",
    "ClientCopyDDEOut2",
    "ClientDeleteDC",
    "ClientEventCallback",
    "ClientFindClose",
    "ClientFindFirstFile",
    "ClientFindNextFile",
    "ClientFreeDDEHandle",
    "ClientFreeLibrary",
    "ClientGetCurrentDirectory",
    "ClientGetDDEFlags",
    "ClientGetDDEHookData",
    "ClientGetListboxString",
    "ClientGetLogicalDrives",
    "ClientGetThreadLocale",
    "ClientLoadCreateCursorIcon",
    "ClientLoadCreateMenu",
    "ClientLoadLibrary",
    "ClientSetCurrentDirectory",
    "ClientWinExec",
    "fnCOPYDATA",
    "fnCOPYGLOBALDATA",
    "fnDWORD",
    "fnDWORDOPTINLPMSG",
    "fnDrag",
    "fnGDIHANDLE",
    "fnGETTEXTLENGTHS",
    "fnHkINDWORD",
    "fnHkINLPCBTACTIVATESTRUCT",
    "fnHkINLPCBTCSTRUCT",
    "fnHkINLPCBTMDICCSTRUCT",
    "fnHkINLPDEBUGHOOKSTRUCT",
    "fnHkINLPMOUSEHOOKSTRUCT",
    "fnHkINLPMSG",
    "fnHkINLPRECT",
    "fnHkOPTINLPEVENTMSG",
    "fnINCNTOUTSTRING",
    "fnINCNTOUTSTRINGNULL",
    "fnINLPCLIENTCREATESTRUCT",
    "fnINLPCOMPAREITEMSTRUCT",
    "fnINLPDELETEITEMSTRUCT",
    "fnINLPDRAWITEMSTRUCT",
    "fnINLPDROPSTRUCT",
    "fnINLPMDICHILDCREATESTRUCT",
    "fnINLPMDICREATESTRUCT",
    "fnINLPMEASUREITEMSTRUCT",
    "fnINLPNORMALCREATESTRUCT",
    "fnINLPWINDOWPOS",
    "fnINOUTLPPOINT5",
    "fnINOUTLPRECT",
    "fnINOUTNCCALCSIZE",
    "fnINOUTLPWINDOWPOS",
    "fnINPAINTCLIPBRD",
    "fnINSIZECLIPBRD",
    "fnINDESTROYCLIPBRD",
    "fnINSTRING",
    "fnINSTRINGNULL",
    "fnINWPARAMCHAR",
    "fnOUTLPRECT",
    "fnOUTSTRING",
    "fnPAINT",
    "fnPOPTINLPUINT",
    "fnPOUTLPINT",
    "fnSENTDDEMSG",
    "fnINLPHLPSTRUCT",
    "GetEditDS",
    "ReleaseEditDS",
    "WOWDlgInit",
    "fnOUTDWORDDWORD",
    "fnOUTDWORDINDWORD",
    "fnOPTOUTLPDWORDOPTOUTLPDWORD",
    "fnNEXTMENU",
    "CopyFromClient",
    "CopyToClient",
    "SetFakeDialogClass"
};

ULONG ulMaxApiIndex = sizeof(apfnDispatch) / sizeof(PCSR_CALLBACK_ROUTINE);
