#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _string - print pf the string.
 * @args: the string.
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int cant = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		cant++;
	}
	return (cant);
}
