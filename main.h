#ifndef	MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    const char *type;
    void (*f)(va_list);
} convert;

void print_char(va_list args);
int _putchar(char c);
int _string(va_list args);
int _printf(const char *format, ...);


#endif
