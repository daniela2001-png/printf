#include "holberton.h"

/**
 * print_bi - converts and adds a binary to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_bi(va_list ap, char *buffer, int bsize)
{
	unsigned int a = va_arg(ap, int);
	int b = 0;
	int c = 0;
	char *digit = malloc(1000);

	while (a >= 2)
	{
		*(digit + b) = a % 2 + '0';
		a /= 2;
		b++;
	}
	if (a == 1)
	{
		*(digit + b) = a + '0';
	}
	for (c = 0; c >= 0; c++, b--)
	{
		buffer[bsize + c] = digit[b];
	}
	free(digit);
	return (c);
}
