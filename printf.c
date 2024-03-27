#include "main.h"
#include <stdarg.h>
/**
  * _printf - function that produces output according to a format.
  *
  *@format: argument to print
  *
  *Return: 
  *
  */
int _printf(const char *format, ...)
{
	Convert types[] = {
		{"%c",print_char}
	};

	va_list ap;

	int i = 0, j = 0 ;

	va_start(ap, format);

	if(format == NULL || (format[0] == '%' && format[1] == '\0'))

		return (-1);

	while (format[i] != '\0')
	{
		while ()
		{

		}

		j = 0;
		i++;

	}
	_putchar('\n');
	va_end(ap)
}
