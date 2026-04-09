#include "main.h"

/**
 * print_di_nbr - handle d and i flag
 * @ap: list of arg
 * Return: numbers of printed chars
 */
int print_di_nbr(va_list ap)
{
	return (print_nbr(va_arg(ap, int)));
}

/**
 * print_u_nbr - handle u flag
 * @ap: list of arg
 * Return: numbers of printed chars
 */

int print_u_nbr(va_list ap)
{
	return (print_unsigned_nbr(va_arg(ap, unsigned int)));
}

/**
 * print_b_nbr - handle b flag
 * @ap: list of arg
 * Description: use convert base to convert value to binary
 * Return: number of printed chars
 */
int print_b_nbr(va_list ap)
{
	int sum = 0;
	unsigned int n = va_arg(ap, unsigned int);
	char *s;

	if (n == 0)
		return (_puts("0"));
	s = convert_base(n, 2, 0);
	if (!s)
		return (0);
	sum += _puts(s);
	return (sum);
}

/**
 * print_o_nbr - handle o flag
 * @ap: list of arg
 * Description: convert value to octal
 * Return: number of printed chars
 */
int print_o_nbr(va_list ap)
{
	int sum = 0;
	char *s;
	unsigned int n = va_arg(ap, unsigned int);

	s = convert_base(n, 8, 0);
	if (!s)
		return (0);
	sum += _puts(s);
	return (sum);
}

/**
 * print_x_nbr - handle x flag
 * @ap: list of arg
 * Description: convert value to hexa
 * Return: number of printed chars
 */
int print_x_nbr(va_list ap)
{
	int sum = 0;
	char *s;
	unsigned int n = va_arg(ap, unsigned int);

	s = convert_base(n, 16, 0);
	if (!s)
		return (0);
	sum += _puts(s);
	return (sum);
}
