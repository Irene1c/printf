#include "main.h"

/**
 * print_x - prints number to base 16 in lowecase
 * @args: the argument
 * Return: number count
 */
int print_x(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, unsigned int);
	count = base_convert(i, 16);

	return (count);
}
