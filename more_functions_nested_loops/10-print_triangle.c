#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: is the size of the triangle
 *
 */

void print_triangle(int size)
{
int line, space, sharp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 0; space < (size - line); space++)
			{
				_putchar(' ');
			}

			for (sharp = 0; sharp < line; sharp++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
