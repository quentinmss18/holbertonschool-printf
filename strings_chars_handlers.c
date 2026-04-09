#include "main.h"

/**
 *
 *
 *
 */

int print_single_char(va_list ap)
{
	char c = (char)va_arg(ap, int);
	_putchar(c);
	return (1);
}

int print_s_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
		return (_puts("(null)"));
	return (_puts(str));
}

int print_percent(va_list ap)
{
	(void)ap;

	return (_putchar('%'));
}

int print_R_rot13(va_list ap)
{
	int sum = 0;
	char *str;
	char *s;

	str = va_arg(ap, char *); /*entrée originale a ne pas modifier */

	if (!str)
		return (_puts("(null)"));

	s = rot13_conversion(str);
	if (!s)
		return (0);
	sum += _puts(s);
	free(s);
	return (sum);
}

int print_S_unprintable(va_list ap)
{
	char *s = va_arg(ap, char *);

	return (_puts_unprintable(s));
}
