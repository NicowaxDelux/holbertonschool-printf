#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_int - print a int.
 * @args: arguments.
 *
 * Return: 1
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len3 = 0;
	int temp = n;
	int digits[12];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len3++;
	}

	while (temp != 0)
	{
		temp /= 10;
		len3++;
	}

	while (n != 0)
	{
		digits[i++] = n % 10;
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}

	return (len3);
}
