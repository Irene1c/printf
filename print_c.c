#include "main.h"

/**
 * print_c - prints a character
 * @args: arguments
 * Return: 0
 */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
