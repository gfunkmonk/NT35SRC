@echo off
echo ARE YOU SURE??? (Press 'Y' to continue, any other key to exit)

:: Generate a debug script to assemble our keystroke-reading COM file.
:: We use prefix redirection (>>file echo text) so CMD doesn't confuse numbers with file handles.
> "%temp%\_getkey.scr" echo a
>>"%temp%\_getkey.scr" echo mov ah, 08
>>"%temp%\_getkey.scr" echo int 21
>>"%temp%\_getkey.scr" echo mov ah, 4c
>>"%temp%\_getkey.scr" echo int 21
>>"%temp%\_getkey.scr" echo.
>>"%temp%\_getkey.scr" echo rcx
>>"%temp%\_getkey.scr" echo 8
>>"%temp%\_getkey.scr" echo n %temp%\_getkey.com
>>"%temp%\_getkey.scr" echo w
>>"%temp%\_getkey.scr" echo q

:: Compile the COM file silently using NT 4.0's native NTVDM/debug
debug < "%temp%\_getkey.scr" >nul 2>nul

:: Execute the COM file to capture one keystroke without requiring 'Enter'
"%temp%\_getkey.com"

:: IF ERRORLEVEL evaluates TRUE if the exit code is GREATER THAN OR EQUAL TO the specified value.
:: ASCII 'y' = 121, 'Y' = 89. Checks must cascade in strict descending order.
if errorlevel 122 goto Abort
if errorlevel 121 goto Continue
if errorlevel 90 goto Abort
if errorlevel 89 goto Continue
goto Abort

:Abort
echo.
echo Aborted.
goto End

:Continue
echo.
echo Proceeding...

:: Nuke the main target build cache databases
del /s /q /f d:\nt\build.dat d:\nt\build.log d:\nt\build.wrn d:\nt\build.err 2>nul

:: Recursively shred intermediate compiler object and precompiled header assets
del /s /q /f *.obj *.res *.pch *.log *.lnk *.map *.sym *.pbi *.pbo *.pbt 2>nul

:: Wipe out the architecture-specific object output folders completely
for /r %%i in (obj) do @if exist "%%i" rmdir /s /q "%%i" 2>nul

:End
:: Clean up the temporary key-capture binaries
del "%temp%\_getkey.scr" 2>nul
del "%temp%\_getkey.com" 2>nul
