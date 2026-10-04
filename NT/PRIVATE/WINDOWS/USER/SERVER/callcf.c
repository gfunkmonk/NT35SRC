/**************************************************************************\
* Module Name: callcf.c
*
* Copyright (c) 1985-91, Microsoft Corporation
*
* Template C file for server simple call table generation.
*
* History:
* 10-Dec-1993 JerrySh   Created.
*
\**************************************************************************/

#include "precomp.h"
#pragma hdrstop


PROC apfnSimpleCall[] = {
    (PROC)_BeginDeferWindowPos,
    (PROC)_CountClipboardFormats,
    (PROC)_CreateMenu,
    (PROC)_CreatePopupMenu,
    (PROC)_CsDdeUninitialize,
    (PROC)_DestroyCaret,
    (PROC)_EnumClipboardFormats,
    (PROC)_GetCaretBlinkTime,
    (PROC)_GetClipboardOwner,
    (PROC)_GetClipboardViewer,
    (PROC)_GetDialogBaseUnits,
    (PROC)_GetDoubleClickTime,
    (PROC)_GetForegroundWindow,
    (PROC)_GetInputDesktop,
    (PROC)_GetInputState,
    (PROC)_GetKeyboardType,
    (PROC)_GetMenuCheckMarkDimensions,
    (PROC)_GetMessagePos,
    (PROC)_GetOpenClipboardWindow,
    (PROC)_GetQueueStatus,
    (PROC)_IsClipboardFormatAvailable,
    (PROC)_KillSystemTimer,
    (PROC)_MessageBeep,
    (PROC)_PostQuitMessage,
    (PROC)_ReleaseCapture,
    (PROC)_ReleaseDC,
    (PROC)_ReplyMessage,
    (PROC)_SetCaretBlinkTime,
    (PROC)_SetCaretPos,
    (PROC)_SetCursorPos,
    (PROC)_SetDoubleClickTime,
    (PROC)_ShowCursor,
    (PROC)_ShowStartGlass,
    (PROC)_SwapMouseButton,
    (PROC)_UnhookWindowsHook,
    (PROC)_WindowFromDC,
    (PROC)CurrentTaskLock,
    (PROC)LW_LoadFonts,
    (PROC)xxxArrangeIconicWindows,
    (PROC)xxxCalcChildScroll,
    (PROC)xxxCascadeChildWindows,
    (PROC)xxxCloseWindow,
    (PROC)xxxDirectedYield,
    (PROC)xxxDrawMenuBar,
    (PROC)xxxEmptyClipboard,
    (PROC)xxxEnableWindow,
    (PROC)xxxEndDialog,
    (PROC)xxxFlashWindow,
    (PROC)xxxIsDlgButtonChecked,
    (PROC)xxxOpenIcon,
    (PROC)xxxRealizePalette,
    (PROC)xxxRegisterUserHungAppHandlers,
    (PROC)xxxServerCloseClipboard,
    (PROC)xxxSetForegroundWindow,
    (PROC)xxxSetWindowFullScreenState,
    (PROC)xxxShowOwnedPopups,
    (PROC)xxxTileChildWindows,
    (PROC)xxxUpdateWindow,
    (PROC)xxxValidateRgn,
    (PROC)xxxExitWindowsEx,
    (PROC)_RegisterSystemThread
};

#ifdef DEBUG
ULONG ulMaxSimpleCall = sizeof(apfnSimpleCall) / sizeof(PROC);
#endif
