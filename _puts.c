#include <unistd.h>
#include "main.h"

/**
 * _puts - writes the string to stdout
 * @str: The string to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
