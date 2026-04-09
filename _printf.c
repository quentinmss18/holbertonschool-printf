#include "main.h"

/**
 * get_flag - compare the char after % with s from struct
 * @s: string after % to compare
 * Return: pointer to function that match the string
 */
int (*get_flag(const char *s))(va_list)
{
	f_ptf flag[] = {
		{"c", print_single_char},
		{"s", print_s_string},
		{"%", print_percent},
		{"d", print_di_nbr},
		{"i", print_di_nbr},
		{"u", print_u_nbr},
		{"R", print_R_rot13},
		{"S", print_S_unprintable},
		{"b", print_b_nbr},
		{"o", print_o_nbr},
		{"x", print_x_nbr},
		{"X", print_X_nbr},
		{NULL, NULL}
	};
	int i = 0;

	while (flag[i].s != NULL)
	{
		if (flag[i].s[0] == *s)
			return (flag[i].f);
		i++;
	}
	return (NULL);
}

/**
 * _printf - Main loop exploring the argument to _printf
 * @format: the string given to _printf
 * Return: count of the printed chars
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*f)(va_list);

	if ((!format) || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			f = NULL;
			if (format[i + 1] != '\0')
				f = get_flag(&format[i + 1]);
			if (f == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += f(ap);
				i += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
	}
	va_end(ap);
	return (sum);
}
