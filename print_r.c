#include "main.h"

/**
 * print_r - prints a string in reverse
 * @args: arguments
 * Return: 0
 */
int print_r(va_list args)
{
	char *s;
	int i;
	int j;
	int count = 0;

	s = va_arg(args, char*);
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = (count - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (count);
}
