@echo off
setlocal
title Installing Montserrat Fonts...

:: --- Check for Admin Permissions ---
net session >nul 2>&1
if %errorLevel% == 0 (
    echo Success: Running with administrative privileges.
) else (
    echo Requesting administrative privileges...
    goto UACPrompt
)

:: --- Go to the directory of this script ---
cd /d "%~dp0"

echo.
echo Installing Montserrat Fonts...
echo -----------------------------

:: --- 1. Copy Font Files to Windows Directory ---
if exist "Montserrat-VariableFont_wght.ttf" (
    copy /Y "Montserrat-VariableFont_wght.ttf" "%WINDIR%\Fonts"
    echo [OK] Copied Montserrat-VariableFont_wght.ttf
) else (
    echo [ERROR] Montserrat-VariableFont_wght.ttf not found!
)

if exist "Montserrat-Italic-VariableFont_wght.ttf" (
    copy /Y "Montserrat-Italic-VariableFont_wght.ttf" "%WINDIR%\Fonts"
    echo [OK] Copied Montserrat-Italic-VariableFont_wght.ttf
) else (
    echo [ERROR] Montserrat-Italic-VariableFont_wght.ttf not found!
)

:: --- 2. Update Registry to Activate Fonts ---
echo.
echo Registering fonts...

:: Register Normal/Variable
reg add "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Fonts" /v "Montserrat (TrueType)" /t REG_SZ /d "Montserrat-VariableFont_wght.ttf" /f >nul

:: Register Italic/Variable
reg add "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Fonts" /v "Montserrat Italic (TrueType)" /t REG_SZ /d "Montserrat-Italic-VariableFont_wght.ttf" /f >nul

echo.
echo -----------------------------
echo Installation Complete! 
echo You may need to restart open applications (like Word) to see the fonts.
pause
exit /b

:: --- UAC Prompt Routine ---
:UACPrompt
echo Set UAC = CreateObject^("Shell.Application"^) > "%temp%\getadmin.vbs"
echo UAC.ShellExecute "%~s0", "", "", "runas", 1 >> "%temp%\getadmin.vbs"
"%temp%\getadmin.vbs"
del "%temp%\getadmin.vbs"
exit /B