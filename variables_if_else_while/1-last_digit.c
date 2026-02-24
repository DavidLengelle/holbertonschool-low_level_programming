#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	l_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", l_digit, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", l_digit, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", l_digit, n);
	}
return (0);
}
