#include "holberton.h"
/**
 * specifier - Entry point
 * @ap: is a list of arguments
 * Return: a string
 */
int specifier(va_list ap)
{
  char spec = va_arg(ap, int);

  if (spec == '%')
    {
      _putchar(spec);
    }
  else
    {
      _putchar('%');
    }
  return (1);
}
/**
 * character - Entry point
 * @ap: is a name
 * Return: Always 0
 */
int character(va_list ap)
{
  char c;
  c = (va_arg(ap, int));
	_putchar(c);
	return (1);
}
/**
 * strings - Entry point
 * @ap: is a list of arguments
 * Return: a string
 */
int strings(va_list ap)
{
  char *string;
  int i;

  string = va_arg(ap, char *);

  if (string == NULL)
    string = "(null)";
    
  for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
/**
 * ints - function to i and d
 * @ap: is a name of ma list
 * Return: 1
 */
int ints(va_list ap)
{
  _putchar(va_arg(ap, int));
  return(1);
}
/**
 * _printf - Entry point
 * @format: is a list of strings
 * Return: list of numbers
 */
int _printf(const char *format, ...)
{

	va_list ap;

	int i = 0;
	int j = 0;

	fmt array[] = {
	        {'%', specifier},
		{'c', character},
		{'s', strings},
		{'i', ints},
		{'d', ints},
		{'b', print_my_binary},
		{'\0', '\0'}
	};
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 2)
			{
				if (format[i + 1] == array[j].cmp)
				{
					array[j].f(ap);
				}
				j++;
			}
		}
		i++;
	}
	va_end(ap);
	return (5);
}
