#include "main.h"
#include <unistd.h>

/**
  *print_bin - print binary number
  *
  *@num: number to convert
  *
  *@print: printed characters
  *Return: printed binary
  */
int print_bin(unsigned int num, int print)
{
	int bin[32] = {0};

	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		print++;
		return (print);
	}

	for(; num > 0; i++)
	{
		bin[i] = num % 2;
		num /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar('0' + bin[i]);
		print++;
	}
	return (print);
}
