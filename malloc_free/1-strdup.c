#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: string of characters to copy
 * Return: (char *)
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;
	unsigned int sizestr = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != 0)
	{
		i++;
	}
	sizestr = i;

	copy = malloc((sizestr + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < sizestr; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';

return (copy);

}
