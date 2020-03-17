#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct options - creates he structure to call functions.
 * @s: defines the parameter to call the function.
 * @f: stores the names of functions to call.
 */

typedef struct options
{
	char s;

	void (*f)(va_list, char *, unsigned int *);
} opt;

int _printf(const char *format, ...);
void print_char(va_list data, char *buffer, unsigned int *size);
void print_string(va_list data, char *buffer, unsigned int *size);
void print_pctg(va_list data, char *buffer, unsigned int *size);

#endif
