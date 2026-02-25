#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
	_putchar(lettre);
}
_putchar('\n');

}
