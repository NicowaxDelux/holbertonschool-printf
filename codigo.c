#include <stdio.h>
#include <stdarg.h>

void _string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}


int _printf(const char *format, ...)
{
	while (*format)
	{
		va_list navegar;

		va_start(navegar, format);

		switch


	}
}
