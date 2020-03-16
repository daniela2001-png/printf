#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct formats - struct formats
 * @cmp: the operator
 * @f:the function associated
 */
typedef struct formats
{
	char *cmp;
	int(*f)(va_list ap);
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int get_printf_funct(char identifier, va_list ap);
int specifier(va_list ap);
int character(va_list ap);
int strings(va_list ap);
int print_my_binary(va_list ap);
int my_binary(unsigned int n, int lenght);
#endif
