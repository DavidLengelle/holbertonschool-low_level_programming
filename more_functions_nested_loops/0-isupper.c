#include "main.h"

/**
 * _isupper - checks for upper character c
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
