#include "main.h"

/**
 * _strncat - convert a string to an integer.
 *@n: bytes from src
 *@dest: destination of the characters
 *@src: sources of the characters
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
