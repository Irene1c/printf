#include "main.h"

/**
 * base_convert - converts a number to the base specified
 * @n: the number
 * @base: the base
 * Return: number of characters printed
 */
int base_convert(unsigned int n, int base)
{
	char rep1[] = "0123456789ABCDEF";
	char rep2[] = "0123456789abcdef";
	char array[100];
	char *ptr;
	int i = 99;
	int p = 0;

	ptr = &array[99];
	*ptr = '\0';

	do {
		if (n != 0)
		{
			*--ptr = rep1[n % base];
		}
		else
		{
			*--ptr = rep2[n % base];
		}
		n = n / base;
		i--;
	} while (n != 0);

	for (p = i; array[p] != 0; p++)
	{
		_putchar(array[p]);
	}
	return (99 - i);
}
