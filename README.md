# Windows Command Shell in C

This project is a simple custom shell written in **C** that leverages the Windows Command Prompt (`cmd.exe`) to execute system commands.

## Features
- Accepts user input and passes it to the Windows Command Prompt
- Executes common commands like:
  - `dir` (list directory)
  - `cd` (change directory)
  - `cls` (clear screen)
  - `copy`, `del`, etc.
- Provides a custom shell prompt
- Supports multi-word commands

## How It Works
The shell reads user input and uses the Windows system API (via `system()` or process calls) to forward commands to the built-in Command Prompt.

## Build Instructions
You can compile using MinGW (Windows GCC) or Visual Studio.

### MinGW (GCC)
```bash
gcc shell.c -o my_shell.exe
