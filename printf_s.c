#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _string - print pf the string.
 * @args: the string.
 */

int _string(va_list args)
{
	char *str;
	int cant = 0;

	str = va_arg(args, char *);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		cant++;
	}
	return (cant);
}
