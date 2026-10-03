/*++

Copyright (c) 1991-1992  Microsoft Corporation

Module Name:

    DosPrint.h

Abstract:

    This contains prototypes for the DosPrint routines

Author:

    Dave Snipp (DaveSn) 16-Apr-1991

Environment:


Revision History:

    22-Apr-1991 JohnRo
        Use constants from <lmcons.h>.
    18-Jun-1992 JohnRo
        RAID 10324: net print vs. UNICODE.

--*/

#ifndef _DosPRINT_
#define _DosPRINT_

#include "rxprint.h"

/****************************************************************
 *                                                              *
 *              Function prototypes                             *
 *                                                              *
 ****************************************************************/

SPLERR SPLENTRY DosPrintDestEnum(
            LPWSTR pszServer,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PUSHORT pcReturned,
            PUSHORT pcTotal
            );

SPLERR SPLENTRY DosPrintDestControl(
            LPWSTR pszServer,
            LPWSTR pszDevName,
            WORD    uControl
            );

SPLERR SPLENTRY DosPrintDestGetInfo(
            LPWSTR pszServer,
            LPWSTR pszName,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PUSHORT pcbNeeded
            );

SPLERR SPLENTRY DosPrintDestAdd(
            LPWSTR pszServer,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf
            );

SPLERR SPLENTRY DosPrintDestSetInfo(
            LPWSTR pszServer,
            LPWSTR pszName,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            WORD    uParmNum
            );

SPLERR SPLENTRY DosPrintDestDel(
            LPWSTR pszServer,
            LPWSTR pszPrinterName
            );

SPLERR SPLENTRY DosPrintQEnum(
            LPWSTR pszServer,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PUSHORT pcReturned,
            PUSHORT pcTotal
            );

SPLERR SPLENTRY DosPrintQGetInfo(
            LPWSTR pszServer,
            LPWSTR pszQueueName,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PUSHORT pcbNeeded
            );

SPLERR SPLENTRY DosPrintQSetInfo(
            LPWSTR pszServer,
            LPWSTR pszQueueName,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            WORD    uParmNum
            );

SPLERR SPLENTRY DosPrintQPause(
            LPWSTR pszServer,
            LPWSTR pszQueueName
            );

SPLERR SPLENTRY DosPrintQContinue(
            LPWSTR pszServer,
            LPWSTR pszQueueName
            );

SPLERR SPLENTRY DosPrintQPurge(
            LPWSTR pszServer,
            LPWSTR pszQueueName
            );

SPLERR SPLENTRY DosPrintQAdd(
            LPWSTR pszServer,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf
            );

SPLERR SPLENTRY DosPrintQDel(
            LPWSTR pszServer,
            LPWSTR pszQueueName
            );

SPLERR SPLENTRY DosPrintJobGetInfo(
            LPWSTR pszServer,
            WORD    uJobId,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PUSHORT pcbNeeded
            );

SPLERR SPLENTRY DosPrintJobSetInfo(
            LPWSTR pszServer,
            WORD    uJobId,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            WORD    uParmNum
            );

SPLERR SPLENTRY DosPrintJobPause(
            LPWSTR pszServer,
            WORD    uJobId
            );

SPLERR SPLENTRY DosPrintJobContinue(
            LPWSTR pszServer,
            WORD    uJobId
            );

SPLERR SPLENTRY DosPrintJobDel(
            LPWSTR pszServer,
            WORD    uJobId
            );

SPLERR SPLENTRY DosPrintJobEnum(
            LPWSTR pszServer,
            LPWSTR pszQueueName,
            WORD    uLevel,
            PBYTE   pbBuf,
            WORD    cbBuf,
            PWORD   pcReturned,
            PWORD   pcTotal
            );

SPLERR SPLENTRY DosPrintJobGetId(
            HANDLE      hFile,
            PPRIDINFO   pInfo,
            WORD        cbInfo
            );

#endif // ndef _DosPRINT_
