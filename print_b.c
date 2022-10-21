#include "main.h"

/**
 * print_b - prints number to base 2
 * @args: the argument
 * Return: number count
 */
int print_b(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, unsigned int);
	count = base_convert(i, 2);

	return (count);
}
