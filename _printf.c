#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * _printf - a function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, j = 0, counter = 0, length;
	fmt format_s[10] = {{'c', print_char}, {'s', print_string}};

	if (format == NULL)
		return (-1);

	length = strlen(format);
	while (index < length)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			counter += 1;
		}
		else
		{
			va_start(args, format);
			if (format[index + 1] == '%')
			{
				_putchar('%');
				counter += 1;
			}
			while (format_s[j].spec)
			{
				if (format[index + 1] == format_s[j].spec)
				{
					counter += format_s[j].print(&args);
					index++;
					break;
				}
				j++;
			}
			va_end(args);
		}
		index++;
	}
	return (counter);
}
