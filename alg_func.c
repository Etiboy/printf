#include "main.h"
#include <stdarg.h>

/**
 * print_char - count character
 * @args: string arguments
 *
 * Return: number of characters
 */

int print_char(va_list *args)
{
	int count = 0;

	count = _putchar(va_arg(*args, int));
	return (count);
}

/**
 * print_string - count strind characters
 * @args: string arguments
 *
 * Return: number of string characters
 */

int print_string(va_list *args)
{
	int count = 0;

	count = _putstr(va_arg(*args, char *));
	return (count);
}

/**
 *print_digit - iterate through a digit
 *@args: an integer
 */

int print_digit(va_list *args)
{
	int count = 0;

	count = get_int(va_arg(*args, int));
	return (count);
}
