#include "holberton.h"
/**
 * _printf - prints according to format
 * @format: the given format
 * Return: success 1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, lenght = 0;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			lenght += get_printf_funct(format[i + 1], ap);
			i++;
		}
		else
			lenght += _putchar(format[i]);
	}
	va_end(ap);
	return (lenght);
}
