#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct formats - struct formats
 * @cmp: option to select
 * @f:pointer to a function
 * Return:nothing
 */
typedef struct formats
{
	char cmp;
	int(*f)(va_list, char *, int);
} fmt;
int _printf(const char *format, ...);
int character(va_list ap, char *p, int n);
int strings(va_list ap,  char *p, int n);
int modulo(va_list ap, char *p, int n);

#endif
