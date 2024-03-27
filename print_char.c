#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
  *print_char - print a char
  *
  *@args: arguments
  *
  *Return: 1
  */
int print_char(va_list character)
{
	char c;

	c = va_arg(character, int);

	_putchar(c);

	return (1);
}
