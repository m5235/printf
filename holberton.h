#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int pr_char(va_list ap);

int pr_str(va_list ap);

int pr_int(va_list ap);

int _printf(const char *format, ...);

int pr_rot13(va_list ap);

int pr_rev(va_list ap);

int convert(va_list ap, int base);

int convertU(va_list ap, int base);

int non_prting(va_list ap);

int pr_ptr(va_list ap);

int _putchar(char c);

int execute_function_call(char, va_list);
#endif
