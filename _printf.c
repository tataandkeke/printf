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

	for(scan = format; *scan != '\0'; scan++)
	{
		while (*scan != '%')
		{
			_putchar(*scan);
			scan++;
		}

		scan++;

		switch(*scan)
		{
			case 'c' : i = va_arg(list,int);
				   _putchar(i);
				   break;

			case 'd' : i = va_arg(list,int);
				   if(i < 0)
				   {
					   i = -i;
					   _putchar('-');
				   }
				   _puts(convert(i,10));
				   break;

			case 'o' : i = va_arg(list,unsigned int);
				   _puts(convert(i,8));
				   break;

			case 's' : s = va_arg(list,char *);
				   _puts(s);
				   break;

			case 'x' : i = va_arg(list, unsigned int);
				   _puts(convert(i,16));
				   break;
		}
	}

	va_end(list);

}
