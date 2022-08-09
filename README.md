# **_printf()** : Recreating the printf function

**printf** is the C language function to do formatted printing.

This project **_printf()** aim is to aide ones understanding of how this the function work.

**#include "main.h"**
**int _printf(const char** *format* **, ...);**

## Description
The **_printf** is a variadic( takes variable number of arguments) function the writes its output to the standard output using some specified control format.

The function maybe both be called with a single argument, as in 

**_printf("Hello, World"); **// returns: Hello, World

 or with variable number of arguments, as in 

**_printf("Hey, [%s]", "Saviour"); **// returns: Hey, Saviour. The character **%** is a special character, specificing that the corresponding argument be print to the output. **s** is a conversion specifier, and in this case requires a string type.
The other conversion specifiers are; **c** of the  type char, **%** use to escape the percent sign **%**, **d** or **i** for the integer type, **f** for float type.

## The functions

## int _format(const char *format, va_list fmt)
Takes the pointer to the first argument of our variable argument and a list containing all the other arguments as its parameters. Does most of the formating, output is written to standard output stream and returns the format length.

## int _putchar(char c)
Takes a char character and write it to the standard output, the standard output stream.

## int c_spec(va_list fmt)
takes the va_list as argument, and make a call for the next uncalled entry in the list. If successfull, write the character and returns the length of the character.

## int s_spec(va_list fmt)
takes the va_list as argument, and make a call for the next uncalled entry in the list. If successfull, write each character of the string, and returns the length of the string.

## Author
This project is written by **ZIHCO** (chizobajames21@gmail.com) and **sayv-xo**.
