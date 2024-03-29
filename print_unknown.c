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
	_putchar(format[i + 1]);
	return (2);
}
