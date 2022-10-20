#include "main.h"

/**
 * get_func - chooses the correct function
 * @s: type of variable to print
 * Return: 0
 */
int (*get_func(char s))(va_list)
{
	f_t fn[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'b', print_b},
		{'x', print_x},
		{'X', print_X},
		{'o', print_o},
		{'u', print_u},
		{'\0', NULL}
	};
	int j = 0;

	while (fn[j].str)
	{
		if (fn[j].str == s)
		{
			return (fn[j].f);
		}
		j++;
	}
	return (NULL);
}
