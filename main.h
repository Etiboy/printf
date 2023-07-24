#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/**
 * struct formatter - format specifier
 * @spec: sprcifier character
 * @print: functions
 */
typedef struct formatter
{
	char spec;
	int (*print)(va_list *);
} fmt;

int _putchar(char c);
int _putstr(char *str);
int print_char(va_list *args);
int print_string(va_list *args);
int _printf(const char *format, ...);

#endif