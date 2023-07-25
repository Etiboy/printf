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
	char ch;

	ch = va_arg(*args, int);

	if (ch == 0)
		return (-1);
	count = _putchar(ch);
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

	char *str = va_arg(*args, char *);

	if (str == NULL)
		return (-1);
	count = _putstr(str);
	return (count);
}

/**
 *print_digit - iterate through a digit
 *@args: an integer
 *
 *Return: number of digits printed
 */

int print_digit(va_list *args)
{
	int result, count = 0;

	result = va_arg(*args, int);

	count = get_int(result);
	return (count);
}
