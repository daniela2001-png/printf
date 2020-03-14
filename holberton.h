#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct formats
{
	char cmp;
	int(*f)(va_list);
} fmt;

int _printf(const char *format, ...);
int _putchar(char);
#endif
