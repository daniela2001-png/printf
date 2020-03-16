#include "holberton.h"
/**
 * get_print_funct - select the function
 * @identifier: format to print
 * @ap:pointer to struct
 * Return: function
 */
int get_printf_funct(char identifier, va_list ap)
{
	fmt array[] = {
		{"c", character},
		{"s", strings},
		{"%", specifier},
		{NULL, NULL}
	};

	int i = 0, lenght = 0;

	while(array[i].cmp !=NULL)
	{
		if (array[i].cmp[0] == identifier)
		{
			lenght += array[i].f(ap);
			return (lenght);
		}
		i++;
	}
	if (array[0].cmp[0] != identifier)
	{
		_putchar('%');
		_putchar(identifier);
		return (2);
	}
	return (0);
}
