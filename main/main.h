#ifndef MAIN_H_HEADER
#define MAIN_H_HEADER

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbol
 *
 * @syn: The Operator
 * @f: The function
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*this is the printing function*/
int _printf(const char *format, ...);

/* putchar function for printing*/
int _putchar(char c);
int _puts(char *str);
int scanner(const char *format, conver_t f_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);

#endif
