#include "main.h"

/**
 * more_numbers - print numbers ten times
 *
 *
 */

void more_numbers(void)
{

	int loop;
	int number;

	for (loop = 0; loop < 10; loop++)
	{
		for (number = 0; number < 15; number++)
		{

		if (number > 9)
		{
			_putchar((number / 10) + '0');
		}
		{
			_putchar((number % 10) + '0');
		}
		}
	_putchar('\n');
	}
}
