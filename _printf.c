#include "holberton.h"
/**
 * _printf - prints according to format
 * @format: pointer to a string
 * Return: type select
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0, w = 0, buffercounter = 0;
	char *buffer = malloc(2048);

	fmt array[] = {
		{'%', modulo},
		{'c', character},
		{'s', strings}
	};

	va_start(ap, format);

	if (format == NULL)
		return (0);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == array[j].cmp)
				{
					w = array[j].f(ap, buffer, buffercounter);
					buffercounter += w;
					w = 0;
					i++;
				}
			}
		}
		else
		{
			buffer[buffercounter] = format[i];
			buffercounter++;
		}
	}
	buffer[buffercounter] = '\0';
	write(1, buffer, buffercounter);
	free(buffer);
	return (buffercounter);
}
