#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	convert types[] = {
		{"%c", print_char},
		{"%s", print_char},
		{NULL, NULL}
	};

	va_list ap;
	int i = 0, j = 0;
	int chars_printed = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (types[j].type)
			{
				if (format[i + 1] == types[j].type[1])
				{
					types[j].f(ap);
					chars_printed++;
					break;
				}
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			chars_printed++;
		}
		i++;
	}
	va_end(ap);

	return (chars_printed);
}

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
