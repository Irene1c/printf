#include "main.h"

/**
 * print_i - prints integer to base 10
 * @args: the argument
 * Return: integer count
 */
int print_i(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, int);
	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	count = base_convert(i, 10);

	return (count);
}
