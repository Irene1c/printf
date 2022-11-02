#include "main.h"

/**
 * print_d - prints number to base 10
 * @args: the argument
 * Return: number count
 */
int print_d(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, int);
	if (i < 0)
	{
		i = -i;
		count += _putchar('-');
	}
	count += base_convert(i, 10);

	return (count);
}
