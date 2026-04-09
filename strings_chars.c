#include<unistd.h>
#include "main.h"

/**
 * _putchar - Uses write to print a char c
 * @c: char to prnt
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _puts - Uses a loop _putchar to print a string
 * @str: string to print
 * Return: sum of chars printed
 */
int _puts(char *str)
{
	int i = 0;
	int sum = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		sum++;
	}
	return (sum);
}

/**
 * _puts_unprintable - print special char with \\xHH format
 * @str: string to print
 * Return: sum of printed chars
 */
int _puts_unprintable(char *str)
{
	int i = 0, sum = 0;
	char *hex;

	if (!str)
		return (_puts("(null)"));

	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] >= 127) /* bloc format \xHH */
		{
			hex = convert_base((unsigned char)str[i], 16, 1);/*valeur ascii du char*/
			sum += _puts("\\x");      /* format \x */
			if (str[i] < 16)
				sum += _putchar('0'); /* ajout 0 pour char < 16 */
			sum += _puts(hex);
			free(hex);
		}
		else
			sum += _putchar(str[i]);
		i++;
	}
	return (sum);
}

/**
 * _strlen - lenght of string
 * @s: string
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
