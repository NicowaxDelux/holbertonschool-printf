#include "main.h"
#include <stdarg.h>

/**
  *print_char - print a char
  *
  *@args: arguments
  *
  *Return: 1
  */

void  print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}
