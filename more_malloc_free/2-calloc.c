#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array in the same way that calloc would,
 * but using malloc.
 * @nmemb: nb of elements in array
 * @size: size of array
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i;
unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

total_size = nmemb * size;

array = malloc(total_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		array[i] = 0;
	}

return (array);
}
