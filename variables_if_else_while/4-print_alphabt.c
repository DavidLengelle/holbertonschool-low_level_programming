#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)

if (lettre != 'q' && lettre != 'e')
{
	putchar(lettre);
}
putchar('\n');

return (0);
}
