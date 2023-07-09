# 0x09-static_libraries

This repository contains the source code and files for the project "0x09-static_libraries" in the ALX Low-Level Programming curriculum. The project focuses on creating and utilizing static libraries in C programming.

## Project Files

The project directory includes the following files:

- `libmy.a`: A static library containing various functions implemented in separate source files.
- `main.h`: A header file containing function prototypes for the functions in the static library.
- `main.c`: A sample code file demonstrating the usage of functions from the static library.
- `create_static_lib.sh`: A script that creates a static library from the .c files in the current directory.

## Usage

To use the static library and execute the sample code:

1. Compile the code using the following command:
   
`gcc -std=gnu89 main.c -L. -lmy -o quote`

3. Run the compiled program:
   
`./quote`


The program will output a quote to the standard output.

## Repository Information

- GitHub repository: [alx-low_level_programming](https://github.com/MrMagnum01/alx-low_level_programming)
- Directory: 0x09-static_libraries
