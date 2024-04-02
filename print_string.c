#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - print pf the string.
 * @args: the string.
 * Return: return string
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int cant = 0;

	if (str == NULL)
	{
		str = "(null)";
		while (str[cant])
		{
			_putchar(str[cant]);
			cant++;
		}
		return (6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		cant++;
	}
	return (cant);
}
