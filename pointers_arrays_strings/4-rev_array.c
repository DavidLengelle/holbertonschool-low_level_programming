#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *@a: the array pointer
 *@n: is the number of elements of the array
 * Return: (n)
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (a[i] < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;

		i++;
	}
}
