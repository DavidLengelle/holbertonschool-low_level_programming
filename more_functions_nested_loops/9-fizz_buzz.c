#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1-100, replaces multiples of 3 with Fizz,
 * multiples of 5 with Buzz and multiples of both with FizzBuzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int num;

for (num = 0; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
    printf("FizzBuzz");
}
else if (num % 3 == 0)
{
    printf("Fizz");
}
else if (num % 5 == 0)
{
    printf("Buzz");
}
else
{
printf("%d", num);
}

if (num < 100)
{
			printf(" ");
}
}
return (0);
}
