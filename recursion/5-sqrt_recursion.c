#include "main.h"

/**
 * sqrt_calc - calculating the square.
 * @n: number to be printind
 * @i: number to be calculate
 *
 * Return: n
 */

int sqrt_calc(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_calc(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be printind
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_calc(n, 0));
}
