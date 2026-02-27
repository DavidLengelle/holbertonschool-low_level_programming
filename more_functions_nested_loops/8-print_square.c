#include "main.h"

/**
 * print_square - prints a square
 *@size: is the size of the square
 *
 */

void print_square(int size)
{
int i;
int square;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	if (size <= 0)
	{
	_putchar('\n');
	}

}
