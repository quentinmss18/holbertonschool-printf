#include "main.h"

/**
 * rot13_conversion - convert string with rot13 algorithm
 * @str: string to convert
 * Return: converted string
 */
char *rot13_conversion(char *str)
{
	char *rot;
	int i = 0;
	int size = _strlen(str);

	rot = malloc(sizeof(char) * size + 1);
	if (!rot)
		return (NULL);

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
				(str[i] >= 'A' && str[i] <= 'M'))
			rot[i] = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
			rot[i] = str[i] - 13;
		else
			rot[i] = str[i];
		i++;
	}
	rot[i] = '\0';
	return (rot);
}

/**
 * convert_int_to_c - convert int value to char value
 * @n: int value
 * @maj: upper or lower case indicator
 * Return: converted int
 */
int convert_int_to_c(int n, int maj)
{
	if (n >= 10)
	{
	if (maj == 1)
		return (n - 10 + 'A');
	else
		return (n - 10 + 'a');
	}
	else
		return (n + '0');
}

/**
 * convert_base - convert a number to a string using a base
 * @n: int to conv
 * @b: base to use
 * @maj: upper or lower indicator
 * Return: converted final string
 */
char *convert_base(unsigned long n, unsigned int b, int maj)
{
	unsigned long tmp = n;
	int len = 1;
	char *str;

	while (tmp >= b)
	{
		tmp /= b;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = convert_int_to_c(n % b, maj);
		n /= b;
	}
	return (str);
}
