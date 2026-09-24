set _NTDRIVE=D:
set _NTROOT=\nt
set _NTBINDIR=%_NTDRIVE%%_NTROOT%
REM set NTMAKEENV=%_NTBINDIR%\PUBLIC\OAK\BIN
REM set NT_ARCH=x86
REM set BUILD_DEFAULT_TARGETS=-386
REM set CPUTYPE=I386
REM set NTDEBUG=retail
REM set BASEDIR=%NTBINDIR%
REM set 386=1

REM
REM Add MSTOOLS, IDW and PUBLIC\TOOLS to the path if not in system directory.
REM
if exist %_NTDrive%%_NTRoot%\public\mstools (
    set MSTOOLS_DIR=%_NTDrive%%_NTRoot%\public\mstools
    set PATH=%PATH%;%_NTDrive%%_NTRoot%\public\mstools
)
if exist %_NTDrive%%_NTRoot%\public\idw (
    set IDW_DIR=%_NTDrive%%_NTRoot%\public\idw
    set PATH=%PATH%;%_NTDrive%%_NTRoot%\public\idw
)
if exist %_NTDrive%%_NTRoot%\public\tools (
    set PATH=%PATH%;%_NTDrive%%_NTRoot%\public\tools
)

cd /d d:\NT\PUBLIC\TOOLS\
        TITLE [Ready] RAZZLE - Windows Build Environment
call razzle.cmd
