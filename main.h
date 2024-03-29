#ifndef	MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print_convert - match the conversion specifiers for printf
 * @type: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */


typedef struct print_convert
{
	const char *type;
	int (*f)();

} convert;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_bin(unsigned int num, int print);
#endif
