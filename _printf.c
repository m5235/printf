#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - print a given string and its arguments
 * @format: string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0;
	int (*print)(va_list);
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;

				if (print == 0)
				{
					_putchar('%');
					_putchar(format[i]);
					count += 2;
				}
				else
					count += print(list);
			}
		}
		else
			return (-1);
		i++;
	}
	va_end(list);
	return (count);
}
