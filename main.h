#ifndef	MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct print_convert
{
	char *type;
	void (*f)();

} Convert ;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list character);

#endif
