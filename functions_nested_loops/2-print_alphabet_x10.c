#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
	_putchar(lettre);
}
_putchar('\n');

}
