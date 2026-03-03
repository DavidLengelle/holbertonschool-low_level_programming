#include "main.h"

/**
 * swap_int - swap the values of two integers
 *@a: value of the first pointer
 *@b: value of the second pointer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
