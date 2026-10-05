rd /s /q %BASEDIR%\PRIVATE\NTOS\BOOT\LIB\obj
rd /s /q %BASEDIR%\PRIVATE\NTOS\BOOT\obj
rd /s /q %BASEDIR%\PRIVATE\NTOS\DLL\obj

set BUILD_OPTIONS=ntos\dll ntos\boot
set NT_UP=1
set NTDEBUG=retail

cd /d %BASEDIR%\PRIVATE\
echo Starting build.
build -cZP
