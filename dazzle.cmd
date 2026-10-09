:: mode con: cols=120 lines=5000

@ECHO OFF

echo.
for %%A in ("     /#######            /########           /##       /########") do echo %%~A
for %%A in ("    | ##__  ##          |_____ ##           | ##      | ##_____/") do echo %%~A
for %%A in ("    | ##  \ ##  /######      /##/  /########| ##      | ##      ") do echo %%~A
for %%A in ("    | ##  | ## |____  ##    /##/  |____ /##/| ##      | #####   ") do echo %%~A
for %%A in ("    | ##  | ##  /#######   /##/      /####/ | ##      | ##__/   ") do echo %%~A
for %%A in ("    | ##  | ## /##__  ##  /##/      /##__/  | ##      | ##      ") do echo %%~A
for %%A in ("    | #######/|  ####### /######## /########| ########| ########") do echo %%~A
for %%A in ("    |_______/  \_______/|________/|________/|________/|________/") do echo %%~A
echo.
echo.


IF "%~1"=="" GOTO END

echo %~1| findstr /r /i "^[a-z]:$" >nul
if errorlevel 1 GOTO END

set _NTDRIVE=%1
set _NTROOT=\nt
set BASEDIR=%_NTDRIVE%%_NTROOT%
set NTDEBUG=retail
set NT_UP=1
set BUILD_OPTIONS=

for %%I in (.) do set CURDIR=%%~fI

cd /d %BASEDIR%\PRIVATE\

color 8B
TITLE        [ Ready ]   R a Z z L e  --- WinBuildEnv
prompt [RAZZLE] $p$g

call %BASEDIR%\PUBLIC\TOOLS\razzle.cmd

cd /d %CURDIR%
color 07
TITLE C:\WINNT\System32\cmd.exe
prompt $p$g

:END

echo You must provide the drive letter.
echo Example: DAZZLE.CMD G:
exit /b
