#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * addition - adds two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
void addition(double a, double b)
{
	printf("Result: %f\n", a + b);
}

/**
 * subtraction - substract two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
void subtraction(double a, double b)
{
	printf("Result: %f\n", a - b);
}

/**
 * multiplication - multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
void multiplication(double a, double b)
{
	printf("Result: %f\n", a * b);
}

/**
 * division - divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
void division(double a, double b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return;
	}
	printf("Result: %f\n", a / b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int userChoice = -1;
	double num1 = 0, num2 = 0;

	while (userChoice != 0)
	{
		printf("Simple Calculator\n1) Add\n2) Subtract\n");
		printf("3) Multiply\n4) Divide\n0) Quit\n");
		printf("Make your choice:");
		scanf("%d", &userChoice);
		if (userChoice == 0)
		{
			printf("Bye!");
			break;
		}
		if (userChoice >= 1 && userChoice <= 4)
		{
			printf("A: ");
			scanf("%lf", &num1);
			printf("B: ");
			scanf("%lf", &num2);

			if (userChoice == 1)
				addition(num1, num2);
			else if (userChoice == 2)
				subtraction(num1, num2);
			else if (userChoice == 3)
				multiplication(num1, num2);
			else if (userChoice == 4)
				division(num1, num2);
		}
		else
			printf("Invalid choice\n");
	}
	return (0);
}
