#include "holberton.h"

/**
 * character - Entry point
 * @ap: is a list of character
 * Return: a char
 */

int character(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * strings - Entry point
 * @ap: is a list of arguments
 * Return: a string
 */
int strings(va_list ap)
{
	char *string = va_arg(ap, char *);
	int i;
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	return (i - 1);
}

int ints(va_list ap)
{
	int a;
	int b;

	a = va_arg(ap, int);

	for (b = 0; b < a; b)
}
/**
 * _printf - Entry point
 * @format: is a list of strings
 * Return: list of numbers
 */
int _printf(const char *format, ...)
{

	va_list ap;

	int i = 0;
	int j = 0;

	fmt array[] = {
		{'%', specifier}
		{'c', character,},
		{'s', strings},
		{'i', ints},
		{'d', ints},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 2)
			{
				if (format[i + 1] == array[j].cmp)
				{
					array[j].f(ap);
				}
				j++;
			}
		}
		i++;
	}
	va_end(ap);
	return (12);
}
