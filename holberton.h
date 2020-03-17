#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct function_caller - struct to call functions.
 * @n: character to compare with incoming data.
 * @f: body of functions to call.
 *Description: Struc for fmt
 */
typedef struct function_caller
{
	char *n;
	int (*f)(va_list, char*, int);
} fcall;
int print_char(va_list, char *, int);
int print_string(va_list, char *, int);
int print_pctg(va_list, char *, int);
int _printf(const char *format, ...);

#endif
