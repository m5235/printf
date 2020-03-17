#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

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

#endif
