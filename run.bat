@echo off
g++ main.cpp src/CPU/cpu.cpp src/utils/utils.cpp src/interpreter/interpreter.cpp -o main -I"C:\Users\mezia\Documents\Libs\SDL3\x86_64-w64-mingw32\include" -L"C:\Users\mezia\Documents\Libs\SDL3\x86_64-w64-mingw32\lib" -lSDL3
main
del main.exe