#include "holberton.h"

/**
 * print_char - stores a char in buffer.
 * @ap: list of arguments to print.
 * @buffer: arguments in buffer.
 * @size: size of data.
 * Returns: void.
 */
void print_char(va_list ap, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(ap, int);
	*size = *size + 1;
}
/**
 * print_string - stores a string in buffer.
 * @ap: list of arguments to print.
 * @buffer: arguments in buffer.
 * @size: size of data.
 * Returns: void.
 */
void print_string(va_list ap, char *buffer, unsigned int *size)
{
	int i;
	char *toprint = va_arg(ap, char*);

	for (i = 0; toprint[i]; i++)
	{
		buffer[*size] = toprint[i];
		*size = *size + 1;
	}
}
/**
 * print_pctg - stores a % in buffer.
 * @ap: list of arguments to print.
 * @buffer: arguments in buffer.
 * @size: size of data.
 * Returns: void.
 */
void print_pctg(va_list ap, char *buffer, unsigned int *size)
{
	(void)ap;
	buffer[*size] = '%';
	*size = *size + 1;
}
