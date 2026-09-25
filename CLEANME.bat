echo "ARE YOU SURE???"
PAUSE

:: Nuke the main target build cache databases
del /s /q /f d:\nt\build.dat d:\nt\build.log d:\nt\build.wrn d:\nt\build.err 2>nul

:: Recursively shred intermediate compiler object and precompiled header assets
del /s /q /f *.obj *.res *.pch *.log *.lnk *.map *.sym *.pbi *.pbo *.pbt 2>nul

:: Wipe out the architecture-specific object output folders completely
for /r %%i in (obj) do @if exist "%%i" rmdir /s /q "%%i" 2>nul
