set _NTDRIVE=D:
set _NTROOT=\nt
set BASEDIR=%_NTDRIVE%%_NTROOT%
set CPUTYPE=I386
set PLATFORM=i386
REM set NTDEBUG=
set NTDEBUG=retail
set RETAIL=TRUE
set NODEBUG=1
set NTDBGFILES=0
set NTCD=1
set 386=1

REM Just want I386, dude
set PPC=0
set MIPS=0
set ALPHA=0

set TMP=%_NTDRIVE%\TMP
mkdir %TMP%

REM shit can't handle two cpus.. 1998 called.
set NT_UP=1
set BUILD_MULTIPROCESSOR=
set BUILD_MULTIPROCESSOR_COUNT=1
set NUMBER_OF_PROCESSORS=1

REM ALL GET SET BY 'NTENV.CMD' WHICH IS CALLED BY RAZZLE
REM set BUILD_DEFAULT_TARGETS=-386
REM set NTMAKEENV=%_NTBINDIR%\PUBLIC\OAK\BIN
REM set _NTBINDIR=%_NTDRIVE%%_NTROOT%

REM GEMINI INSISTED ON THIS, HOWEVER, DOESN'T EXIST ANYWHERE
REM set NT_ARCH=x86

REM Add MSTOOLS, IDW and PUBLIC\TOOLS to the path if not in system directory.
REM
REM if exist %_NTDrive%%_NTRoot%\public\mstools (
REM     set MSTOOLS_DIR=%_NTDrive%%_NTRoot%\public\mstools
REM     set REM PATH=%PATH%;%_NTDrive%%_NTRoot%\public\mstools;%_NTDrive%%_NTRoot%\public\mstools\%CPUTYPE%
REM )
REM if exist %_NTDrive%%_NTRoot%\public\idw (
REM     set IDW_DIR=%_NTDrive%%_NTRoot%\public\idw
REM     set PATH=%PATH%;%_NTDrive%%_NTRoot%\public\idw
REM )
REM if exist %_NTDrive%%_NTRoot%\public\tools (
REM     set PATH=%PATH%;%_NTDrive%%_NTRoot%\public\tools
REM )


cd /d %BASEDIR%\PRIVATE\
        TITLE [Ready] RaZZlE - WinBuildEnv
call %BASEDIR%\PUBLIC\TOOLS\razzle.cmd

