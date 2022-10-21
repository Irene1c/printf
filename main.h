#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct f - defines the structure
 *
 * @str: operator type
 * @f: function associated
 */
typedef struct f
{
	char str;
	int (*f)(va_list);
} f_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char s))(va_list);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int base_convert(unsigned int n, int base);
int base_lower_convert(unsigned int n, int base);
int print_b(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_o(va_list args);
int print_u(va_list args);

#endif
