#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int pr_char(va_list ap);
int pr_str(va_list ap);
int pr_int(va_list ap);
int _printf(const char *format, ...);

#endif
