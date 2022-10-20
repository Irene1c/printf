#include "main.h"
/**
 * base_convert - converts a number to the base specifiers
 * @n: the number
 * @base: the base
 * Return: number of characters printed
*/
int base_convert(unsigned int n, int base)
{
    char rep1[] = "123456789ABCDEF";
    char rep2[] = "123456789abcdef";
    char array[100];
    char *ptr;
    int i = 99;
    int p = 0;

    ptr = &array[99];
    *ptr = '\0';

    while (n != 0)
    {
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
    }
    for (p = 1; array[p] != 0; p++)
    {
        _putchar(array[p]);
    }
    return (99 - i);
}