#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_numbers - This is a function that prints diferent numbers
 * @args: list of arguements
 * Return: return the number of arguements
 */
int print_numbers(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
