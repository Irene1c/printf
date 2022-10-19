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
int print_c(va_list);
int print_s(va_list);
int print_percent(va_list);

#endif
