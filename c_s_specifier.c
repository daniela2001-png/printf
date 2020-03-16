#include "holberton.h"
/**
 * specifier - print a %
 * @ap:size of %
 * Return:1
 */
int specifier(va_list ap)
{
  (void) ap;
  _putchar('%');
    return (1);
}
/**
 * character - print a c
 * @ap: size of c
 * Return: 1
 */
int character(va_list ap)
{
  char c;
  c = (va_arg(ap, int));
	_putchar(c);
	return (1);
}
/**
 * strings - printf string
 * @ap: size of s
 * Return: numbers of chars printed
 */
int strings(va_list ap)
{
  char *string;
  int i = 0;

  string = va_arg(ap, char *);

  if (string == NULL)
    string = "(null)";

  for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
