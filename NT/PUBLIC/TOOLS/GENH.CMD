@echo off
echo Scanning for makefil0 files and generating NT 3.5 headers...
echo.

for /r %BASEDIR%\PRIVATE %%i in (makefil0) do (
    if exist "%%i" (
        echo ----------------------------------------------------
        echo Processing: %%i
        echo ----------------------------------------------------
        cd /d "%%~dpi"
        nmake -f makefil0
    )
)

echo.
echo Header preprocessing complete!
