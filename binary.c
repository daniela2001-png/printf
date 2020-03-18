#include "holberton.h"

/**
 * binary_2 - convert int to bin
 * @ap: list of arguments
 * @p: pointer to buffer
 * @n: counter to format
 * Return: integer
 */
int binary_2(va_list ap, char *p, int n)
{
	unsigned int w = va_arg(ap, int);
	int i = 0;
	int j = 0;
	char *digit = malloc(1000);

	while (w >= 2)
	{
		*(digit + i) = w % 2 + '0';
		w /= 2;
		i++;
	}
	if (w == 1)
	{
		*(digit + i) = w + '0';
	}
	for (j = 0; j >= 0; j++, i--)
	{
		p[n + j] = digit[i];
	}
	free(digit);
	return (j);
}
