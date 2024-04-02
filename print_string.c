#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - print pf the string.
 * @args: the string.
 * Return: return string
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int cant = 0;

	if (str == NULL)
	{
		str = "(null)";
		while (str[cant])
		{
			_putchar(str[cant]);
			cant++;
		}
		return (6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		cant++;
	}
	return (cant);
}

int (va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len)
{
	char *str, *null = "(null)";
	int size;
	unsigned int ret = 0;

	(void)flags;
	(void)len;

	str = va_arg(args, char *);
	if (str == NULL)
		return (_memcpy(output, null, 6));

	for (size = 0; *(str + size);)
		size++;

	ret += print_string_width(output, flags, wid, prec, size);

	prec = (prec == -1) ? size : prec;
	while (*str != '\0' && prec > 0)
	{
		ret += _memcpy(output, str, 1);
		prec--;
		str++;
	}

	ret += print_neg_width(output, ret, flags, wid);

	return (ret);
}
