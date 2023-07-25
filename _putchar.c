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
	int count = 0, index = 0;

	while (str[index] != '\0')
	{
		_putchar(*(str + index));
		count += 1;
		index++;
	}
	return (count);
}

/**
 *get_int - access individual digit of an integer
 *@num: an integer
 *Return: number of charactetrs printed
 */

int get_int(int num)
{
	unsigned int abs, abs_num, count = 0, count_num;

	if (num < 0)
	{
		count += _putchar('-');
		abs = (num * -1);
	}
	else
	{
		abs = num;
	}
	abs_num = abs;
	count_num = 1;
	while (abs_num >= 10)
	{
		abs_num /= 10;
		count_num *= 10;
	}
	while (count_num >= 1)
	{
		count += _putchar(((abs / count_num) % 10) + '0');
		count_num /= 10;
	}
	return (count);
}
