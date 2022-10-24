#include "main.h"

/**
 * print_u - prints unsigned integer to base 10
 * @args: the argument
 * Return: number count
 */
int print_u(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, unsigned int);
	count = base_convert(i, 10);

	return (count);
}
