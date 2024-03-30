#include "main.h"
#include <stdarg.h>
/**
  * _printf - function that produces output according to a format.
  *
  *@format: argument to print
  *
  *Return: print convert
  *
  */
int _printf(const char *format, ...)
{
	convert types[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_percent},
		{"%d", print_int}, {"%i", print_int}, {"%b", print_bin},
		{NULL, NULL}
	};

	va_list ap;
	int i = 0, j = 0;
	int len = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			while (types[j].type)
			{
				if (format[i + 1] == types[j].type[1])
				{
					len = len + types[j].f(ap);
					break;
				}
				j++;
			}
			if (types[j].type == NULL && format[i + 1] != '\0')
				len += print_unknown(format, i);

			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
