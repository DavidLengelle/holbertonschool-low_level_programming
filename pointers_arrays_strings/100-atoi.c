#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *@s: value of s
 *
 * Return: (s)
 */

int _atoi(char *s)
{

int i = 0;
int res = 0;
int sign = 1;
int found = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
found = 1;


}
else if (found)
{
break;
}
i++;
}

return (res * sign);
}
