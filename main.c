#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	/* simple string with no flag */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	printf("%d\n", len2);
	/* flag %c */
	len = _printf("hello, %c, %c, salut\n", 'o', 'a');
	len2 = printf("hello, %c, %c, salut\n", 'o', 'a');
	_printf("%d\n", len);
	printf("%d\n", len2);

	/* flag %s */

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("len = %d et len2 = %d\n", len, len2);

	/* %% */ 
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("len = %d et len 2 = %d\n", len, len2);

	/* int and unsigned */
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	/* rot13 */

	_printf("hello%R\n", "hello");

	/* unprintable */
       char s[] = "Hi\n\tOK\x01\x7F!";

	_printf("With %%S      : %S\n", s);

	/* binary */
	_printf("%b\n", 55);
	/* octal and hexa */
	_printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    return (0);
}
