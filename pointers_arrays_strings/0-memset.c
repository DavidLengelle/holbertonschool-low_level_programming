#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: the constant byte
 * @n: bytes of the memory area pointed
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
