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
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
