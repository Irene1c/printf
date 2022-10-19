#include "main.h"

/**
 * print_s - prints a string
 * @args: arguments
 * Return: 0
 */
int print_s(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char*);
	if (s == NULL)
	{
		s = "(nil)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
