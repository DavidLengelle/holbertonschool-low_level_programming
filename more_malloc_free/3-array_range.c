#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: nb minimum
 * @max: nb maximum
 * Return: A pointer to the allocated memory.
 */

int *array_range(int min, int max)
{
int *array;
unsigned int i;
unsigned int dif_minmax;

	if (min > max)
		return (NULL);

dif_minmax = (max - min + 1);

array = malloc((dif_minmax) *sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < dif_minmax; i++, min++)
		array[i] = min;

return (array);

}
