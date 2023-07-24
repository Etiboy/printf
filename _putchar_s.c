#include "main.h"
#include <string.h>

/**
 * string - print string
 * @s: string character
 *
 * Return: number of characters
 */

int string(char *s)
{
	int length, index = 0, counter = 0;

	length = strlen(s);
	while (index < length)
	{
		_putchar(s[index]);
		counter += 1;
		index++;
	}
	return (counter);
}
