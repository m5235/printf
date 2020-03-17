#include "holberton.h"
#include <unistd.h>
#include <limits.h>





/**
 * pr_char - prints a character
 * @ap: va_list at location of thing that needs to be printed
 *
 * Return: length of char
 */

int pr_char(va_list ap)
{
	char c_hold = (char)va_arg(ap, int);

	write(1, &c_hold, 1);

	return (1);
}

/**
 * pr_str - prints a string
 * @ap: va_list at location of thing that needs to be printed
 *
 * Return: length of string
 */

int pr_str(va_list ap)
{
	char *c_ptr = va_arg(ap, char *);
	int i = 0;

	if (c_ptr == NULL)
		return (0);
	while (*c_ptr != '\0')
	{
		write(1, c_ptr, 1);
		c_ptr++;
		i++;
	}

	return (i);
}

/**
 * pr_int - prints an int
 * @ap: va_list at location of thing that needs to be printed
 *
 * Return: length of int
 */
int pr_int(va_list ap)
{
	int i = va_arg(ap, int), j = 1000000000, digit, _bool = 0, k = 0;
	char buffer[2] = {'0', '\0'};

	if (i == INT_MIN)
	{
		i++;
		_bool = 1;
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i / j < 1)
	{
		j = j / 10;
	}
	while (i > 0)
	{
			k++;
			digit = i / j;
			i = i % j;
			j = j / 10;
			buffer[0] = digit + '0';
		if (_bool == 1)
			i++;
		_bool = 0;
		write(1, buffer, 1);
	}
	if (i == 0 && j == 1)
	{
		k++;
		write(1, "0", 1);
	}
	return (k);
}
