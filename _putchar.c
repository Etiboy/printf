#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - print string
 * @str: character string
 *
 * Return: number of character printed
 */

int _putstr(char *str)
{
	int length = 0, count = 0, index = 0;

	length = strlen(str);

	while (index < length)
	{
		_putchar(str[index]);
		count += 1;
		index++;
	}
	return (count);
}
