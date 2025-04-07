@echo off
echo Compiling...

gcc bitwise.c utils.c -o myprogram.exe

if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b
)

echo Compilation successful.
echo Running program...

myprogram.exe

pause
