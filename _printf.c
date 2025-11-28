#include <stdarg.h>
#include "main.h"

/**
 * _printf - produit une sortie selon un format
 * @format: chaîne de format contenant des caractères et des spécificateurs de format
 *
 * Return: nombre de caractères imprimés, ou -1 si le format est NULL
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    if (format == NULL)
        return -1;

    va_start(args, format);
    count = 0;
    i = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;

            if (format[i] == '\0')
            {
                va_end(args);
                return -1;
            }

            if (format[i] == 'c')
                count += print_char(args);

            else if (format[i] == 's')
                count += print_string(args);

            else if (format[i] == 'd' || format[i] == 'i')
                count += print_int(va_arg(args, int));

            else if (format[i] == '%')
                count += _putchar('%');

            else
            {
                count += _putchar('%');
                count += _putchar(format[i]);
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(args);
    return count;
}
