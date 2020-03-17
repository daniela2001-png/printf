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
	int a = va_arg(ap, int), b = 0, c = a, tmp;

	if (a >= 0)
	{
		while ((c / 10) > 0)
		{
			b++;
			c = (c / 10);
		}
		b++;
		tmp = b;
		while (b > 0)
		{
			p[n + b - 1] = (a % 10) + '0';
			b--;
			a = (a / 10);
		}
	}

	else if (a < 0)
	{
		while ((c / 10) > 0)
		{
			b++;
			c = (c / 10);
		}
		b++;
		tmp = b;
		while (b > 0)
		{
			p[n + b - 1] = (-a % 10) + '0';
			b--;
			a = (-a / 10);
		}
	}
	n += tmp;
	return (tmp);
}
