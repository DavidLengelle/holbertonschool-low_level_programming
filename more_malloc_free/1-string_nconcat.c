#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first part of string to copy
 * @s2: second part of string to copy
 * @n: lenght from s2 to concatenate
 * Return: A pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i;
unsigned int j;
unsigned int len1 = 0;
unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

return (concat);

}
