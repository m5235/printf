#include "holberton.h"	
#include <unistd.h>
/**	
 * _printf - prints a formatted string from input	
 * @format: string to be printed	
 *	
 * Return: length of string	
 */	
int _printf(const char *format, ...)	
{	
	va_list ap;	
	int j = 0, k = 0;	

	va_start(ap, format);
	if (format == NULL)
	{
		 return(-1);
	}
		
	while (format[j] != '\0')	
	{	
		if (format[j] == '%')	
		{	
			j++;	
			while (format[j] == ' ')	
				j++;
				if (format[j] == '\0')
				return (-1);		

				k += pr_str(ap)(ap, format);
				k++
		}	
		else
		{
			putchar(format[j]);
			k++
		}
	}

			
	va_end(ap);	
	return (k);	
} 