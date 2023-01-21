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
	const char *scan;
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, format);

	/*This for loop scans the (format) for the '%' character */
	for (scan = format; *scan != '\0'; scan++)
	{
		while (*scan != '%')
		{
			_putchar(*scan);
			scan++;
		}

		scan++;

		/*This switch statement check each character found after the '%' character */
		switch (*scan)
		{
			case 'c':
				i = va_arg(list, int);
				_putchar(i);
				break;

			case 'd':
				i = va_arg(list, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
				}
				_puts(convert(i, 10));
				break;

			case 'o':
				i = va_arg(list, unsigned int);
				_puts(convert(i, 8));
				break;

			case 's':
				s = va_arg(list, char *);
				_puts(s);
				break;

			case 'x':
				i = va_arg(list, unsigned int);
				_puts(convert(i, 16));
				break;

			case '%':
				s = va_arg(list, char *);
				_puts(s);
				break;
		}
	}

	va_end(list);
	return (0);

}

/**
 * convert - this function convert int to dex, oct and others
 * @num: number variable
 * @base: base number
 * Return: return pointer
 */

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (nm != 0);

	return (ptr);
}
