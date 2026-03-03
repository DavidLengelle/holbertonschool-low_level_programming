#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: value of the pointer
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int h;

	while (str[i] != '\0')
	{
		i++;
	}

	h = (i + 1) / 2;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
		_putchar(str[h]);

	_putchar('\n');
}
