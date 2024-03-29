#include "main.h"
#include <unistd.h>

/**
 * print_unknown - prints unknown format specifiers
 * @format: string format
 * @i: index
 * Return: 0
 */
int print_unknown(const char *format, int i)
{
	_putchar(format[i]);
	if (format[i + 1] != '\0')
	{
		_putchar(format[i + 1]);
		return (2);
	}
	return (1);
}
