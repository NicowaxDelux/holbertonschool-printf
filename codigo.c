#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	while (*format)
	{
		va_list navegar;

		va_start(navegar, format);

		for (; *string != '\0'; string++)
		{
			putchar(*string);
		}
	}
}
