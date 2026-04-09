#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _strlen(char *str);
	/* Chars and strings */
/* printing */
int _putchar(char c);
int _puts(char *str);
int _puts_unprintable(char *str);
/*handling va_arg */
int print_percent(va_list ap);
int print_single_char(va_list ap);
int print_s_string(va_list ap);
int print_R_rot13(va_list ap);
int print_S_unprintable(va_list ap);
/* special conversion */
char *rot13_conversion(char *str);
int convert_int_to_c(int n, int maj);
char *convert_base(unsigned long n, unsigned int b, int maj);

	/* numbers and digits */
/* printing */
int print_nbr(int n);
int print_unsigned_nbr(unsigned int n);
int print_b_nbr(va_list ap);
/*  handling va_arg */
int print_di_nbr(va_list ap);
int print_u_nbr(va_list ap);
int print_o_nbr(va_list ap);
int print_x_nbr(va_list ap);
int print_X_nbr(va_list ap);
/**
 * struct flag_ptf - struct to match %c with *f
 * @s: char to match
 * @f: *function
 */

typedef struct flag_ptf
{
	char *s;
	int (*f)(va_list);
} f_ptf;
#endif
