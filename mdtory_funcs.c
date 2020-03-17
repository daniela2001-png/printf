#include "holberton.h"
#include <stdio.h>

/**
 * print_char - adds a char to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_char(va_list ap, char *buffer, int bsize)
{
        int a = va_arg(ap, int);
        buffer[bsize] = a;
        return (1);
}

/**
 * print_string - adds a string to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_string(va_list ap, char *buffer, int bsize)
{
        int it;
        char *str;

        str = va_arg(ap, char *);
        if (str == NULL)
                str = "(null)";
        for (it = 0; str[it] != '\0'; it++, bsize++)
                buffer[bsize] = str[it];
        return (it);
}

/**
 * print_pctg - adds a string to the buffer.
 * @ap: list of arguments to receive.
 * @buffer: buffer storage.
 * @bsize: buffer counter.
 * Return: ammount added to buffer.
 */

int print_pctg(va_list ap, char *buffer, int bsize)
{
        (void) ap;
        buffer[bsize] = '%';
        return (1);
}
