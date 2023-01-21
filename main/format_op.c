#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_char- This is a function that prints character
 * @list: list of arguments
 * Return: number of char printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: will return number of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;
	/*checks for NULL string*/
	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints the percent symbol
 * @list: list of arguements
 * Return: return number of characters printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - prints an integer
 * @list: list of arguments
 * Return: return number of arguments
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
