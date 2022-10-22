#include "main.h"

/**
 * print_R - encodes a string using rot13
 * @args: The argument
 *
 * Return: Encoded string count
 */
int print_R(va_list args)
{
	char *str;
	int i = 0;
	int a;
	int count = 0;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	for (; str[i] != '\0'; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (str[i] == s[a])
			{
				count++;
				_putchar(rot13[a]);
				break;
			}
			else if (s[a + 1] == 0)
			{
				_putchar(str[i]);
				count++;
			}
		}
	}
	return (count);
}
