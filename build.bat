@ECHO off
REM madoodia@gmail.com
REM ..................

SET CPP_FILE_DIR=%1
SET FILE_NAME=%2

REM @ECHO %CPP_FILE_DIR%
REM @ECHO %FILE_NAME%


SET HOME_DIR=%~dp0
SET MADAPI_LOCATION=D:/madoodia/dev/madAPI
SET SDKS_LOCATION=D:/madoodia/sdks
SET PATH=%SDKS_LOCATION%/Qt5/bin;%PATH%

PUSHD %HOME_DIR%
REM for %%a in ("%cd%") do set "FILE_NAME=%%~na"

CALL "%VCVARS_LOCATION%/vcvarsall.bat" x64

CALL nmake -f Makefile.win

POPD

ECHO ---= Building is finished! =---

PAUSE
CLS

CALL "%CPP_FILE_DIR%\%FILE_NAME%.exe"

REM DEL "%CPP_FILE_DIR%\%FILE_NAME%.exe"
