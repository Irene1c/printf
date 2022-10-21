#include "main.h"

/**
 * print_o - prints number to base 8
 * @args: the argument
 * Return: number count
 */
int print_o(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, unsigned int);
	count = base_convert(i, 8);

	return (count);
}
