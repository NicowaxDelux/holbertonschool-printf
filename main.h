#ifndef	MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct print_convert
{
	const char *type;
	int (*f)();

} convert ;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_bin(unsigned int num, int print);
#endif
