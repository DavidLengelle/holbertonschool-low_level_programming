#include "main.h"

/**
 * _strncpy - copy a string to an integer.
 *@n: bytes from src
 *@dest: destination of the characters
 *@src: sources of the characters
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
