#include "holberton.h"

/**
 * _printf - pseudo printf function.
 * @format: the ammount of arguments to receive.
 * Return: ammount of printed characters.
 */
int _printf(const char *format, ...)
{
        va_list ap;
        char *buffer = malloc(1024);

        int a = 0, b;
        unsigned int buffcount = 0, *size = 0;

        opt funcall[] = {
                {'c', print_char},
                {'s', print_string},
                {'%', print_pctg},
                {'\0', NULL}
        };

        size = &buffcount;
        va_start(ap, format);

        while (format[a])
        {
                if (format[a] == '%')
                {
                        a++;
                        b = 0;
                        while (funcall[b].s)
                        {
                                if (format[a] == funcall[b].s)
                                {
                                        funcall[b].f(ap, buffer, size);
                                }
                                b++;
                        }
                }
                else
                {
                        buffer[*size] = format[a];
                        *size = *size + 1;
                }
                a++;
        }
        write(1, buffer, *size);
        va_end(ap);
        free(buffer);
        return (*size);
}
