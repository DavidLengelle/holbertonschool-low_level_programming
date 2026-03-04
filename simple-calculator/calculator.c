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
double addition(double a, double b)
{
	return (a + b);
}

/**
 * subtraction - substract two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
double subtraction(double a, double b)
{
	return (a - b);
}

/**
 * multiplication - multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
double multiplication(double a, double b)
{
	return (a * b);
}

/**
 * division - divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Result
 */
double division(double a, double b)
{
	return (a / b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int userChoice = -1;
double num1 = 0, num2 = 0, result = 0;

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
		result = addition(num1, num2);
	else if (userChoice == 2)
		result = subtraction(num1, num2);
	else if (userChoice == 3)
		result = multiplication(num1, num2);
	else if (userChoice == 4)
	{
		if (num2 == 0)
			printf("Error: division by zero\n");
		else
		result = division(num1, num2);
	}
	printf("Result: %f\n", result);
	}
	else
		printf("Invalid choice");
}
return (0);
}
