#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int userChoice;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: 0\n");
	printf("Bye!\n");

	scanf("%d", &userChoice);

	if (userChoice > '4')
	{
		printf("Invalid choice");
	}
	else if (userChoice == '0')
	{
		printf("Bye!");
	}

return (0);
}
