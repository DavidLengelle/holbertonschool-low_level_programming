#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char b;
char B;
for (b = 'a'; b <= 'z'; b++)
for (B = 'a'; B <= 'z'; B++)
{
	putchar(b);
	putchar(B);
}
putchar('\n');

return (0);
}
