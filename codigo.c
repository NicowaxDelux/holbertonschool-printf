#include <stdio.h>
#include <stdarg.h>

void _string(va_list navegar)
{
	char *str;

	str = va_arg(navegar, char *);

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
