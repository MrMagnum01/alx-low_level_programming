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
gcc -std=gnu89 main.c -L. -lmy -o quote

2. Run the compiled program:
./quote


The program will output a quote to the standard output.

## Static Library Functions

The static library, `libmy.a`, includes several functions that can be utilized in C programs. These functions provide various functionalities such as character manipulation, string operations, and more. Here is a list of the functions available:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);




## Repository Information

- GitHub repository: [alx-low_level_programming](https://github.com/MrMagnum01/alx-low_level_programming)
- Directory: 0x09-static_libraries
