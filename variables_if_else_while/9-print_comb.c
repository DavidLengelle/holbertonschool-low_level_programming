#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int s_digit;
for (s_digit = 48; s_digit <= 57; s_digit++)
{
	putchar(s_digit);
	if (s_digit == 57)
	{
		putchar(' ');
	}
	else
	{
		putchar(',');
	}
}

putchar('\n');

return (0);
}
