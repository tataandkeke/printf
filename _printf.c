#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printf - This is a function that prints formatted output
 * @format: This is the string that need to printed out
 * Return: -1 if fail, 0 for success
 */
int _printf(const char *format, ...)
{
	int p_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	p_chars = scanner(format, f_list, list);
	va_end(list);
	return (p_chars);
}
