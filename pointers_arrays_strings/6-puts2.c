#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *@str: value of the pointer
 *
 */

void puts2(char *str)
{
	int i = 0;

if (str == NULL)
{
_putchar('\n');
return;
}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;

if (str[i - 1] == '\0')
{
break;
}
	}
	_putchar('\n');
}
