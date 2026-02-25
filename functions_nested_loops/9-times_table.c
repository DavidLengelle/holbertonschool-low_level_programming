#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */

void times_table(void)

{
	int c, l, result;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			result = (c * l);

			if (c == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}


			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
