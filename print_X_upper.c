#include "main.h"

/**
 * print_X - prints the number to base 16 in uppercase
 * @args: the arguments
 * Return: number count
*/
int print_X(va_list args)
{
	int i = 0;
	int count = 0;

	i = va_arg(args, unsigned int);
	count = base_convert(i, 16);
	return (count);
}
