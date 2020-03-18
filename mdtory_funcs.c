#include "holberton.h"
#include <stdio.h>

/**
 * print_char - adds a char to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_char(va_list ap, char *buffer, int bsize)
{
	int a = va_arg(ap, int);

	buffer[bsize] = a;
	return (1);
}

/**
 * print_string - adds a string to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_string(va_list ap, char *buffer, int bsize)
{
	int it;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (it = 0; str[it] != '\0'; it++, bsize++)
		buffer[bsize] = str[it];
	return (it);
}

/**
 * print_pctg - adds a string to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_pctg(va_list ap, char *buffer, int bsize)
{
	(void) ap;
	buffer[bsize] = '%';
	return (1);
}

/**
 * print_int - adds a string of int to buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_int(va_list ap, char *buffer, int bsize)
{
	long int a = va_arg(ap, int), b = 0;
	long int temp = a, itos = 0;

	if (a < 0)
	{
		temp = a *= -1;
		buffer[bsize] = '-';
		b++;
	}

	while (temp / 10 > 0)
	{
		temp = temp / 10;
		b++;
	}
	itos = b;
	while (a / 10 > 0)
	{
		buffer[bsize + b] = a % 10 + '0';
		a = a / 10;
		b--;
	}
	buffer[bsize + b] = a % 10 + '0';
	itos++;
	return (itos);
}
