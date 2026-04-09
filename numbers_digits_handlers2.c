#include "main.h"

/**
 * print_X_nbr - handle o flag
 * @ap: list of arg
 * Description: convert value to hexa capital letters
 * Return: number of printed chars
 */
int print_X_nbr(va_list ap)
{
	int sum = 0;
	char *s;
	unsigned int n = va_arg(ap, unsigned int);

	s = convert_base(n, 16, 1);
	if (!s)
		return (0);
	sum += _puts(s);
	return (sum);
}
