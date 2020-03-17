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
	char c;

	c = va_arg(ap, int);
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
	char *string;
	int i = 0;

	string = va_arg(ap, char*);

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
	(void) ap;
	p[n] = '%';
	return (1);
}
