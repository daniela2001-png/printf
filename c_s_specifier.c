#include "holberton.h"
/**
 * character - print a c
 * @ap: list of arguments
 * @p: pointer to buffer
 * @n: counter to return
 * Return: int or count
 */
int character(va_list ap, char *p, int n)
{
	char c = va_arg(ap, int);

	p[n] = c;
	return (1);
}
/**
 * strings - printf string
 * @ap: list of arguments
 * @p: pointer to buffer
 * @n: count to return
 * Return: int or count
 */
int strings(va_list ap, char *p, int n)
{
	int i = 0;
	char *string = va_arg(ap, char*);

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i]; i++)
	{
		p[n + i] = string[i];
	}
	return (i);
}
/**
 * modulo - printf modulo%
 * @ap: list of arguments
 * @p: pointer to buffer
 * @n: count to return
 * Return: int or count
 */
int modulo(va_list ap, char *p, int n)
{
	(void)ap;
	p[n] = 37;
	return (1);
}
/**
 * numero - printf ints and decimals
 * @ap: list of arguments
 * @p: pointer to buffer
 * @n: count to return
 * Return: int or count
 */
int numero(va_list ap, char *p, int n)
{
	int a = va_arg(ap, int), b = 0;
	int tmp = a, c = 0;

	if (a < 0)
	{
		tmp = a *= -1;
		p[n] = '-';
		b++;
	}

	while (tmp / 10 > 0)
	{
		tmp = tmp / 10;
		b++;
	}
	c = b;
	while (a / 10 > 0)
	{
		p[n + b] = a % 10 + '0';
		a = a / 10;
		b--;
	}
	p[n + b] = a % 10 + '0';
	c++;
	return (c);
}
