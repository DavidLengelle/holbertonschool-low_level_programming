#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int boucle;
char lettre;

for (boucle = 0; boucle < 10; boucle++)
{
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
	_putchar(lettre);
}
_putchar('\n');
}
}
