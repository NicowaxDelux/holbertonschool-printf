#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0;

	va_start(args, format);

	while (*format)
	{
		switch (*format)
		{
		case 's':
			chars_printed += _string(args);
			break;
		}
	}
	va_end(args);

	return (chars_printed);
}

int main(void)
{
    int chars_printed;

	chars_printed = _printf("The answer is: %s\n", "42");

	printf("\nNumber of characters printed: %d\n", chars_printed);

    return 0;
}
