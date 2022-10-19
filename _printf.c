#include "main.h"

/**
 * _printf - function to do formatted printing
 * @format: character string
 * Return: total count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;
	int (*fmt)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count = count + 1;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else if (format[i + 1] != '\0')
			{
				fmt = get_func(format[i + 1]);
				if (fmt != NULL)
				{
					count += fmt(args);
					i++;
				}
				else
				{
					_putchar(format[i]);
					count++;
				}
			}
		}
	}
	va_end(args);
	return (count);
}
