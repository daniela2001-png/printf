#include "holberton.h"

/**
 * _printf - pseudo printf function.
 * @format: ammount of parameters received.
 * Return: length of buffer.
 */
int _printf(const char *format, ...)
{
        int fcount, bsize = 0, a, holder = 0;
        char *buffer;
        va_list ap;
        fcall funcs[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_pctg},
                {NULL, NULL}
        };

        buffer = malloc(1024);

        if (format == NULL)
                return (-1);

        va_start(ap, format);

        for (fcount = 0; format[fcount] != '\0'; fcount++)
        {
                if (format[fcount] != '%')
                {
                        buffer[bsize] = format[fcount];
                        bsize++;
                }
                else
                        if (format[fcount + 1] != '\0')
                        {
                                for (a = 0; a < 3; a++)
                                {
                                        if (format[fcount + 1] == funcs[a].n[0])
                                        {
                                                holder = funcs[a].f(ap, buffer, bsize);
                                                fcount++;
                                                break;
                                        }
                                }
                                bsize = bsize + holder;
                        }
        }
        write(1, buffer, bsize);
        free(buffer), va_end(ap);
        return (bsize);
}
