#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *@s: pointer
 *Return: (s)
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	i++;
	}
return (s);
}
