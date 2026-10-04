/**************************************************************************\
* Module Name: dispcf.c
*
* Template C file for server dispatch generation.
*
* Copyright (c) Microsoft Corp.  1990 All Rights Reserved
*
* Created: 10-Dec-90
*
* History:
*   10-Dec-90 created by SMeans
*
\**************************************************************************/

#include "precomp.h"
#pragma hdrstop


ULONG FASTCALL __ChildWindowFromPoint(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsCreateCaret(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsEndPaint(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsExcludeUpdateRgn(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsGetCPD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DdeGetQualityOfService(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DdeSetQualityOfService(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DestroyWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetClassWord(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetInternalWindowPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetProp(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetSystemMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetWindowPlacement(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ImpersonateDdeClientWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __InternalGetWindowText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __MapDialogRect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RegisterTasklist(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RemoveProp(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetClassData(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetClassName(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetWindowLong(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSetClassLong(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSetWindowLong(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetClassWord(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetLogonNotifyWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetProp(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowWord(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndTranslateHwnd(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnDWORD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINWPARAMCHAR(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnPAINT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnSETLOCALE(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndTranslateCall(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ChangeClipboardChain(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CheckDlgButton(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CheckRadioButton(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsBeginPaint(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsGetUpdateRgn(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsInvalidateRgn(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DlgDirListComboBox(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DlgDirSelectComboBoxEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DlgDirSelectEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DragDetect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DragObject(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EnableScrollBar(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __FillWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnCOPYDATA(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnCOPYGLOBALDATA(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnDDEINIT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnDrag(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnDWORDOPTINLPMSG(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnGETTEXTLENGTHS(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINCNTOUTSTRINGNULL(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPCLIENTCREATESTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPCOMPAREITEMSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPDELETEITEMSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPDRAWITEMSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPDROPSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPHLPSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPMDICHILDCREATESTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPMDICREATESTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPMEASUREITEMSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPNORMALCREATESTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINLPWINDOWPOS(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINOUTLPPOINT5(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINOUTLPRECT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINOUTLPWINDOWPOS(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINOUTNCCALCSIZE(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINSTRING(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINSTRINGNULL(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnNEXTMENU(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnOPTOUTLPDWORDOPTOUTLPDWORD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnOUTDWORDDWORD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnOUTDWORDINDWORD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnOUTLPRECT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnOUTSTRING(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnPOPTINLPUINT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnPOUTLPINT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnSENTDDEMSG(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnWMCTLCOLOR(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetControlBrush(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetDlgItemInt(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetDlgItemText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetUpdateRect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetWindowTextLength(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __HiliteMenuItem(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __PaintRect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RedrawWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ScrollChildren(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ScrollWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ScrollWindowEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetListboxString(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetDlgItemInt(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetDlgItemText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetInternalWindowPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetParent(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetScrollPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetScrollRange(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetSystemMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetSystemTimer(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowPlacement(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ShowScrollBar(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallHwndLock(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallHwndParamLock(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndTranslateLock(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ActivateKeyboardLayout(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __AppendMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __AttachThreadInput(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __BringWindowToTop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CallMsgFilter(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ClipCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CopyAcceleratorTable(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CreateCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CreateIcon(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CreateIconIndirect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CreateMDIWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsCreateWindowEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsDdeInitialize(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsDrawIcon(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsEvent(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsGetDC(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsGetDCEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsGetWindowDC(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsScrollDC(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsSetMenuItemBitmaps(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __CsUpdateInstance(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DeferWindowPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DeleteMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DestroyAcceleratorTable(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DestroyCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DestroyMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DlgDirList(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DrawFrame(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __DrawText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndDeferWindowPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EndTask(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EnumDisplayDevices(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __EnumDisplayDeviceModes(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __FindWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetAsyncKeyState(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetClassInfo(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetClassWOWWords(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetClipCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetClipboardFormatName(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetIconInfo(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetInputEvent(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetKeyNameText(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetKeyboardLayoutName(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetMenuString(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetPriorityClipboardFormat(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetTabbedTextExtent(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __HideCaret(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __InitTask(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __InsertMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __InvalidateRect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __IsDialogMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __keybd_event(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __KillTimer(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __LoadKeyboardLayout(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __LockWindowStation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __LockWindowUpdate(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __MapVirtualKey(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __MessageBoxEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ModifyMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __mouse_event(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __MoveWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __OemKeyScan(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __OpenClipboard(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __QuerySendMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RegisterClassWOW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RegisterClipboardFormat(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RegisterHotKey(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RegisterWindowMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __RemoveMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerBuildHwndList(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerBuildPropList(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerBuildNameList(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerChangeMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCheckMenuItem(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerConvertMemHandle(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCreateAcceleratorTable(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCreateDialog(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCreateLocalMemHandle(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerDialogBox(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerDispatchMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerEnableMenuItem(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetClipboardData(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerGetMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerInitializeThreadInfo(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerLoadCreateBitmap(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerLoadCreateCursorIcon(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerLoadCreateMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerPeekMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerPostMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerPostThreadMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSendNotifyMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSendMessageCallback(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSetClipboardData(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerSetWindowsHookEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerTranslateAccelerator(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerWaitForInputIdle(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerWinHelp(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetActiveWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetCapture(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetClipboardViewer(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetCursorContents(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetFocus(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetKeyboardState(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetSysColors(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetSystemCursor(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __LoadCursorFromFile(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetCursorInfo(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetTimer(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowPos(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowsHookAW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SetWindowStationUser(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ShowCaret(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ShowWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SwitchDesktop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __SystemParametersInfo(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __TabbedTextOut(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ToUnicode(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __TrackPopupMenu(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __TranslateMDISysAccel(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __TranslateMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UnhookWindowsHookEx(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UnloadKeyboardLayout(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UnlockWindowStation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UnregisterClass(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UnregisterHotKey(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __UpdatePerUserSystemParameters(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ValidateRect(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __VkKeyScan(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __WaitMessage(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __WindowFromPoint(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __WOWCleanup(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __WOWFindWindow(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __YieldTask(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINDWORD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPCBTACTIVATESTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPDEBUGHOOKSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPMOUSEHOOKSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPMSG(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPRECT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkOPTINLPEVENTMSG(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINCNTOUTSTRING(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINPAINTCLIPBRD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnINSIZECLIPBRD(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPCBTCSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __fnHkINLPCBTMDICCSTRUCT(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __GetMenuIndex(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ResyncKeyState(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallNoParam(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallNoParamTranslate(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallOneParam(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallOneParamTranslate(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __ServerCallTwoParam(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG FASTCALL __WowWaitForMsgAndEvent(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __CloseDesktop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __CloseWindowStation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __CreateDesktopW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __CreateWindowStationW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __GetUserObjectInformation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __GetThreadDesktop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __GetProcessWindowStation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __SetDebugErrorLevel(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __OpenDesktopW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __OpenInputDesktop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __OpenWindowStationW(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __RegisterLogonProcess(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __ServerGetObjectSecurity(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __ServerSetObjectSecurity(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __SetProcessWindowStation(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __SetThreadDesktop(PCSR_API_MSG ApiMsg, PWND pwnd);
ULONG __SetUserObjectInformation(PCSR_API_MSG ApiMsg, PWND pwnd);

PUSER_API_ROUTINE apfnDispatch[] = {
    (PUSER_API_ROUTINE)__ChildWindowFromPoint,
    (PUSER_API_ROUTINE)__CsCreateCaret,
    (PUSER_API_ROUTINE)__CsEndPaint,
    (PUSER_API_ROUTINE)__CsExcludeUpdateRgn,
    (PUSER_API_ROUTINE)__CsGetCPD,
    (PUSER_API_ROUTINE)__DdeGetQualityOfService,
    (PUSER_API_ROUTINE)__DdeSetQualityOfService,
    (PUSER_API_ROUTINE)__DestroyWindow,
    (PUSER_API_ROUTINE)__GetClassWord,
    (PUSER_API_ROUTINE)__GetInternalWindowPos,
    (PUSER_API_ROUTINE)__GetProp,
    (PUSER_API_ROUTINE)__GetSystemMenu,
    (PUSER_API_ROUTINE)__GetWindowPlacement,
    (PUSER_API_ROUTINE)__ImpersonateDdeClientWindow,
    (PUSER_API_ROUTINE)__InternalGetWindowText,
    (PUSER_API_ROUTINE)__MapDialogRect,
    (PUSER_API_ROUTINE)__RegisterTasklist,
    (PUSER_API_ROUTINE)__RemoveProp,
    (PUSER_API_ROUTINE)__ServerGetClassData,
    (PUSER_API_ROUTINE)__ServerGetClassName,
    (PUSER_API_ROUTINE)__ServerGetWindowLong,
    (PUSER_API_ROUTINE)__ServerSetClassLong,
    (PUSER_API_ROUTINE)__ServerSetWindowLong,
    (PUSER_API_ROUTINE)__SetClassWord,
    (PUSER_API_ROUTINE)__SetLogonNotifyWindow,
    (PUSER_API_ROUTINE)__SetProp,
    (PUSER_API_ROUTINE)__SetWindowWord,
    (PUSER_API_ROUTINE)__fnDWORD,
    (PUSER_API_ROUTINE)__fnINWPARAMCHAR,
    (PUSER_API_ROUTINE)__fnPAINT,
    (PUSER_API_ROUTINE)__fnSETLOCALE,
    (PUSER_API_ROUTINE)__ChangeClipboardChain,
    (PUSER_API_ROUTINE)__CheckDlgButton,
    (PUSER_API_ROUTINE)__CheckRadioButton,
    (PUSER_API_ROUTINE)__CsBeginPaint,
    (PUSER_API_ROUTINE)__CsGetUpdateRgn,
    (PUSER_API_ROUTINE)__CsInvalidateRgn,
    (PUSER_API_ROUTINE)__DlgDirListComboBox,
    (PUSER_API_ROUTINE)__DlgDirSelectComboBoxEx,
    (PUSER_API_ROUTINE)__DlgDirSelectEx,
    (PUSER_API_ROUTINE)__DragDetect,
    (PUSER_API_ROUTINE)__DragObject,
    (PUSER_API_ROUTINE)__EnableScrollBar,
    (PUSER_API_ROUTINE)__FillWindow,
    (PUSER_API_ROUTINE)__fnCOPYDATA,
    (PUSER_API_ROUTINE)__fnCOPYGLOBALDATA,
    (PUSER_API_ROUTINE)__fnDDEINIT,
    (PUSER_API_ROUTINE)__fnDrag,
    (PUSER_API_ROUTINE)__fnDWORDOPTINLPMSG,
    (PUSER_API_ROUTINE)__fnGETTEXTLENGTHS,
    (PUSER_API_ROUTINE)__fnINCNTOUTSTRINGNULL,
    (PUSER_API_ROUTINE)__fnINLPCLIENTCREATESTRUCT,
    (PUSER_API_ROUTINE)__fnINLPCOMPAREITEMSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPDELETEITEMSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPDRAWITEMSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPDROPSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPHLPSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPMDICHILDCREATESTRUCT,
    (PUSER_API_ROUTINE)__fnINLPMDICREATESTRUCT,
    (PUSER_API_ROUTINE)__fnINLPMEASUREITEMSTRUCT,
    (PUSER_API_ROUTINE)__fnINLPNORMALCREATESTRUCT,
    (PUSER_API_ROUTINE)__fnINLPWINDOWPOS,
    (PUSER_API_ROUTINE)__fnINOUTLPPOINT5,
    (PUSER_API_ROUTINE)__fnINOUTLPRECT,
    (PUSER_API_ROUTINE)__fnINOUTLPWINDOWPOS,
    (PUSER_API_ROUTINE)__fnINOUTNCCALCSIZE,
    (PUSER_API_ROUTINE)__fnINSTRING,
    (PUSER_API_ROUTINE)__fnINSTRINGNULL,
    (PUSER_API_ROUTINE)__fnNEXTMENU,
    (PUSER_API_ROUTINE)__fnOPTOUTLPDWORDOPTOUTLPDWORD,
    (PUSER_API_ROUTINE)__fnOUTDWORDDWORD,
    (PUSER_API_ROUTINE)__fnOUTDWORDINDWORD,
    (PUSER_API_ROUTINE)__fnOUTLPRECT,
    (PUSER_API_ROUTINE)__fnOUTSTRING,
    (PUSER_API_ROUTINE)__fnPOPTINLPUINT,
    (PUSER_API_ROUTINE)__fnPOUTLPINT,
    (PUSER_API_ROUTINE)__fnSENTDDEMSG,
    (PUSER_API_ROUTINE)__fnWMCTLCOLOR,
    (PUSER_API_ROUTINE)__GetControlBrush,
    (PUSER_API_ROUTINE)__GetDlgItemInt,
    (PUSER_API_ROUTINE)__GetDlgItemText,
    (PUSER_API_ROUTINE)__GetUpdateRect,
    (PUSER_API_ROUTINE)__GetWindowTextLength,
    (PUSER_API_ROUTINE)__HiliteMenuItem,
    (PUSER_API_ROUTINE)__PaintRect,
    (PUSER_API_ROUTINE)__RedrawWindow,
    (PUSER_API_ROUTINE)__ScrollChildren,
    (PUSER_API_ROUTINE)__ScrollWindow,
    (PUSER_API_ROUTINE)__ScrollWindowEx,
    (PUSER_API_ROUTINE)__ServerGetListboxString,
    (PUSER_API_ROUTINE)__SetDlgItemInt,
    (PUSER_API_ROUTINE)__SetDlgItemText,
    (PUSER_API_ROUTINE)__SetInternalWindowPos,
    (PUSER_API_ROUTINE)__SetMenu,
    (PUSER_API_ROUTINE)__SetParent,
    (PUSER_API_ROUTINE)__SetScrollPos,
    (PUSER_API_ROUTINE)__SetScrollRange,
    (PUSER_API_ROUTINE)__SetSystemMenu,
    (PUSER_API_ROUTINE)__SetSystemTimer,
    (PUSER_API_ROUTINE)__SetWindowPlacement,
    (PUSER_API_ROUTINE)__SetWindowText,
    (PUSER_API_ROUTINE)__ShowScrollBar,
    (PUSER_API_ROUTINE)__ServerCallHwndLock,
    (PUSER_API_ROUTINE)__ServerCallHwndParamLock,
    (PUSER_API_ROUTINE)__ActivateKeyboardLayout,
    (PUSER_API_ROUTINE)__AppendMenu,
    (PUSER_API_ROUTINE)__AttachThreadInput,
    (PUSER_API_ROUTINE)__BringWindowToTop,
    (PUSER_API_ROUTINE)__CallMsgFilter,
    (PUSER_API_ROUTINE)__ClipCursor,
    (PUSER_API_ROUTINE)__CopyAcceleratorTable,
    (PUSER_API_ROUTINE)__CreateCursor,
    (PUSER_API_ROUTINE)__CreateIcon,
    (PUSER_API_ROUTINE)__CreateIconIndirect,
    (PUSER_API_ROUTINE)__CreateMDIWindow,
    (PUSER_API_ROUTINE)__CsCreateWindowEx,
    (PUSER_API_ROUTINE)__CsDdeInitialize,
    (PUSER_API_ROUTINE)__CsDrawIcon,
    (PUSER_API_ROUTINE)__CsEvent,
    (PUSER_API_ROUTINE)__CsGetDC,
    (PUSER_API_ROUTINE)__CsGetDCEx,
    (PUSER_API_ROUTINE)__CsGetWindowDC,
    (PUSER_API_ROUTINE)__CsScrollDC,
    (PUSER_API_ROUTINE)__CsSetMenuItemBitmaps,
    (PUSER_API_ROUTINE)__CsUpdateInstance,
    (PUSER_API_ROUTINE)__DeferWindowPos,
    (PUSER_API_ROUTINE)__DeleteMenu,
    (PUSER_API_ROUTINE)__DestroyAcceleratorTable,
    (PUSER_API_ROUTINE)__DestroyCursor,
    (PUSER_API_ROUTINE)__DestroyMenu,
    (PUSER_API_ROUTINE)__DlgDirList,
    (PUSER_API_ROUTINE)__DrawFrame,
    (PUSER_API_ROUTINE)__DrawText,
    (PUSER_API_ROUTINE)__EndDeferWindowPos,
    (PUSER_API_ROUTINE)__EndMenu,
    (PUSER_API_ROUTINE)__EndTask,
    (PUSER_API_ROUTINE)__EnumDisplayDevices,
    (PUSER_API_ROUTINE)__EnumDisplayDeviceModes,
    (PUSER_API_ROUTINE)__FindWindow,
    (PUSER_API_ROUTINE)__GetAsyncKeyState,
    (PUSER_API_ROUTINE)__GetClassInfo,
    (PUSER_API_ROUTINE)__GetClassWOWWords,
    (PUSER_API_ROUTINE)__GetClipCursor,
    (PUSER_API_ROUTINE)__GetClipboardFormatName,
    (PUSER_API_ROUTINE)__GetIconInfo,
    (PUSER_API_ROUTINE)__GetInputEvent,
    (PUSER_API_ROUTINE)__GetKeyNameText,
    (PUSER_API_ROUTINE)__GetKeyboardLayoutName,
    (PUSER_API_ROUTINE)__GetMenuString,
    (PUSER_API_ROUTINE)__GetPriorityClipboardFormat,
    (PUSER_API_ROUTINE)__GetTabbedTextExtent,
    (PUSER_API_ROUTINE)__HideCaret,
    (PUSER_API_ROUTINE)__InitTask,
    (PUSER_API_ROUTINE)__InsertMenu,
    (PUSER_API_ROUTINE)__InvalidateRect,
    (PUSER_API_ROUTINE)__IsDialogMessage,
    (PUSER_API_ROUTINE)__keybd_event,
    (PUSER_API_ROUTINE)__KillTimer,
    (PUSER_API_ROUTINE)__LoadKeyboardLayout,
    (PUSER_API_ROUTINE)__LockWindowStation,
    (PUSER_API_ROUTINE)__LockWindowUpdate,
    (PUSER_API_ROUTINE)__MapVirtualKey,
    (PUSER_API_ROUTINE)__MessageBoxEx,
    (PUSER_API_ROUTINE)__ModifyMenu,
    (PUSER_API_ROUTINE)__mouse_event,
    (PUSER_API_ROUTINE)__MoveWindow,
    (PUSER_API_ROUTINE)__OemKeyScan,
    (PUSER_API_ROUTINE)__OpenClipboard,
    (PUSER_API_ROUTINE)__QuerySendMessage,
    (PUSER_API_ROUTINE)__RegisterClassWOW,
    (PUSER_API_ROUTINE)__RegisterClipboardFormat,
    (PUSER_API_ROUTINE)__RegisterHotKey,
    (PUSER_API_ROUTINE)__RegisterWindowMessage,
    (PUSER_API_ROUTINE)__RemoveMenu,
    (PUSER_API_ROUTINE)__ServerBuildHwndList,
    (PUSER_API_ROUTINE)__ServerBuildPropList,
    (PUSER_API_ROUTINE)__ServerBuildNameList,
    (PUSER_API_ROUTINE)__ServerChangeMenu,
    (PUSER_API_ROUTINE)__ServerCheckMenuItem,
    (PUSER_API_ROUTINE)__ServerConvertMemHandle,
    (PUSER_API_ROUTINE)__ServerCreateAcceleratorTable,
    (PUSER_API_ROUTINE)__ServerCreateDialog,
    (PUSER_API_ROUTINE)__ServerCreateLocalMemHandle,
    (PUSER_API_ROUTINE)__ServerDialogBox,
    (PUSER_API_ROUTINE)__ServerDispatchMessage,
    (PUSER_API_ROUTINE)__ServerEnableMenuItem,
    (PUSER_API_ROUTINE)__ServerGetClipboardData,
    (PUSER_API_ROUTINE)__ServerGetMessage,
    (PUSER_API_ROUTINE)__ServerInitializeThreadInfo,
    (PUSER_API_ROUTINE)__ServerLoadCreateBitmap,
    (PUSER_API_ROUTINE)__ServerLoadCreateCursorIcon,
    (PUSER_API_ROUTINE)__ServerLoadCreateMenu,
    (PUSER_API_ROUTINE)__ServerPeekMessage,
    (PUSER_API_ROUTINE)__ServerPostMessage,
    (PUSER_API_ROUTINE)__ServerPostThreadMessage,
    (PUSER_API_ROUTINE)__ServerSendNotifyMessage,
    (PUSER_API_ROUTINE)__ServerSendMessageCallback,
    (PUSER_API_ROUTINE)__ServerSetClipboardData,
    (PUSER_API_ROUTINE)__ServerSetWindowsHookEx,
    (PUSER_API_ROUTINE)__ServerTranslateAccelerator,
    (PUSER_API_ROUTINE)__ServerWaitForInputIdle,
    (PUSER_API_ROUTINE)__ServerWinHelp,
    (PUSER_API_ROUTINE)__SetActiveWindow,
    (PUSER_API_ROUTINE)__SetCapture,
    (PUSER_API_ROUTINE)__SetClipboardViewer,
    (PUSER_API_ROUTINE)__SetCursor,
    (PUSER_API_ROUTINE)__SetCursorContents,
    (PUSER_API_ROUTINE)__SetFocus,
    (PUSER_API_ROUTINE)__SetKeyboardState,
    (PUSER_API_ROUTINE)__SetSysColors,
    (PUSER_API_ROUTINE)__SetSystemCursor,
    (PUSER_API_ROUTINE)__LoadCursorFromFile,
    (PUSER_API_ROUTINE)__GetCursorInfo,
    (PUSER_API_ROUTINE)__SetTimer,
    (PUSER_API_ROUTINE)__SetWindowPos,
    (PUSER_API_ROUTINE)__SetWindowsHookAW,
    (PUSER_API_ROUTINE)__SetWindowStationUser,
    (PUSER_API_ROUTINE)__ShowCaret,
    (PUSER_API_ROUTINE)__ShowWindow,
    (PUSER_API_ROUTINE)__SwitchDesktop,
    (PUSER_API_ROUTINE)__SystemParametersInfo,
    (PUSER_API_ROUTINE)__TabbedTextOut,
    (PUSER_API_ROUTINE)__ToUnicode,
    (PUSER_API_ROUTINE)__TrackPopupMenu,
    (PUSER_API_ROUTINE)__TranslateMDISysAccel,
    (PUSER_API_ROUTINE)__TranslateMessage,
    (PUSER_API_ROUTINE)__UnhookWindowsHookEx,
    (PUSER_API_ROUTINE)__UnloadKeyboardLayout,
    (PUSER_API_ROUTINE)__UnlockWindowStation,
    (PUSER_API_ROUTINE)__UnregisterClass,
    (PUSER_API_ROUTINE)__UnregisterHotKey,
    (PUSER_API_ROUTINE)__UpdatePerUserSystemParameters,
    (PUSER_API_ROUTINE)__ValidateRect,
    (PUSER_API_ROUTINE)__VkKeyScan,
    (PUSER_API_ROUTINE)__WaitMessage,
    (PUSER_API_ROUTINE)__WindowFromPoint,
    (PUSER_API_ROUTINE)__WOWCleanup,
    (PUSER_API_ROUTINE)__WOWFindWindow,
    (PUSER_API_ROUTINE)__YieldTask,
    (PUSER_API_ROUTINE)__fnHkINDWORD,
    (PUSER_API_ROUTINE)__fnHkINLPCBTACTIVATESTRUCT,
    (PUSER_API_ROUTINE)__fnHkINLPDEBUGHOOKSTRUCT,
    (PUSER_API_ROUTINE)__fnHkINLPMOUSEHOOKSTRUCT,
    (PUSER_API_ROUTINE)__fnHkINLPMSG,
    (PUSER_API_ROUTINE)__fnHkINLPRECT,
    (PUSER_API_ROUTINE)__fnHkOPTINLPEVENTMSG,
    (PUSER_API_ROUTINE)__fnINCNTOUTSTRING,
    (PUSER_API_ROUTINE)__fnINPAINTCLIPBRD,
    (PUSER_API_ROUTINE)__fnINSIZECLIPBRD,
    (PUSER_API_ROUTINE)__fnHkINLPCBTCSTRUCT,
    (PUSER_API_ROUTINE)__fnHkINLPCBTMDICCSTRUCT,
    (PUSER_API_ROUTINE)__GetMenuIndex,
    (PUSER_API_ROUTINE)__ResyncKeyState,
    (PUSER_API_ROUTINE)__ServerCallNoParam,
    (PUSER_API_ROUTINE)__ServerCallNoParamTranslate,
    (PUSER_API_ROUTINE)__ServerCallOneParam,
    (PUSER_API_ROUTINE)__ServerCallOneParamTranslate,
    (PUSER_API_ROUTINE)__ServerCallTwoParam,
    (PUSER_API_ROUTINE)__WowWaitForMsgAndEvent,
    (PUSER_API_ROUTINE)__CloseDesktop,
    (PUSER_API_ROUTINE)__CloseWindowStation,
    (PUSER_API_ROUTINE)__CreateDesktopW,
    (PUSER_API_ROUTINE)__CreateWindowStationW,
    (PUSER_API_ROUTINE)__GetUserObjectInformation,
    (PUSER_API_ROUTINE)__GetThreadDesktop,
    (PUSER_API_ROUTINE)__GetProcessWindowStation,
    (PUSER_API_ROUTINE)__SetDebugErrorLevel,
    (PUSER_API_ROUTINE)__OpenDesktopW,
    (PUSER_API_ROUTINE)__OpenInputDesktop,
    (PUSER_API_ROUTINE)__OpenWindowStationW,
    (PUSER_API_ROUTINE)__RegisterLogonProcess,
    (PUSER_API_ROUTINE)__ServerGetObjectSecurity,
    (PUSER_API_ROUTINE)__ServerSetObjectSecurity,
    (PUSER_API_ROUTINE)__SetProcessWindowStation,
    (PUSER_API_ROUTINE)__SetThreadDesktop,
    (PUSER_API_ROUTINE)__SetUserObjectInformation
};

ULONG ulMaxApiIndex = sizeof(apfnDispatch) / sizeof(PUSER_API_ROUTINE);
