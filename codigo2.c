#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/** Prototipos de las funciones
 * utilizadas en la función _printf
 */
void print_char(va_list args);
int _printf(const char *format, ...);
int print_string(va_list args);

/** Definir la estructura convert
 * que contiene el tipo de
 * formato y una función asociada
 */
typedef struct {
    const char *type;
    void (*f)(va_list);
} convert;

typedef struct {
    const char *type2;
    int (*f)(va_list);
} convert2;

/** Función que imprime un solo carácter
 */
void print_char(va_list args)
{
    char c = va_arg(args, int);
    putchar(c);
}

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int cant = 0;

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		cant++;
	}
	return (cant);
}


/** Implementación de la función _printf
 */
int _printf(const char *format, ...)
{
    /** Definir los tipos de formato y las funciones asociadas
	 */
    convert types[] = {
        {"%c", print_char}
	};
	convert2 types2[] = {
		{"%s", print_string}
    };

    va_list ap;
    int i = 0, j = 0;
    int chars_printed = 0;
/** Contador de caracteres impresos
 */

    va_start(ap, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            j = 0;
            while (types[j].type)
            {
                if (format[i + 1] == types[j].type[1])
                {
                    types[j].f(ap);
                    chars_printed++;
                    break;
                }
                j++;
            }
            i++;
        }
        else
        {
            putchar(format[i]);
            chars_printed++;
        }
        i++;
    }

    va_end(ap);

    return chars_printed;
}

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
