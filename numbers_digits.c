#include "main.h"

/**
 * print_nbr - print a number using recursion
 * @n: number to print
 * Return: number of printed chars
 */
int print_nbr(int n)
{
	unsigned int x;
	int sum = 0;

	x = n;
	if (n < 0)
	{
		sum += _putchar('-');
		x = -n;
	}
	if (x >= 10)
		sum += print_nbr(x / 10);
	_putchar(x % 10 + '0');
	sum++;
	return (sum);
}

/**
 * print_unsigned_nbr - print unsigned int
 * @n: unsigned to print
 * Return: numbers of printed chars
 */
int print_unsigned_nbr(unsigned int n)
{
	unsigned int x = n;
	int sum = 0;

	if (x >= 10)
		sum += print_unsigned_nbr(x / 10);
	_putchar(x % 10 + '0');
	sum++;
	return (sum);
}
