#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
double main(void)
{
	/*
	Betty ne veux pas plus de 5 fonctions par fichier et 40 par fonction. 
	Donc il faut que je condense tout ça.
	*/ 

	int userChoice, A, B, result;

while (userChoice != 0)
{

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	scanf("%d", &userChoice);

	if (userChoice > 4)
	{
		printf("Invalid choice");
	}
	else if (userChoice == 0)
	{
		printf("Bye!");
	}
	else if (userChoice == 1)
	{
		printf("A: ");
		scanf("%d", &A);
		printf("B: ");
		scanf("%d", &B);
		result = A + B;
		printf("Result: %d\n", result);
	}
	else if (userChoice == 2)
	{
		printf("A: ");
		scanf("%d", &A);
		printf("B: ");
		scanf("%d", &B);
		result = A - B;
		printf("Result: %d\n", result);
	}
	else if (userChoice == 3)
	{
		printf("A: ");
		scanf("%d", &A);
		printf("B: ");
		scanf("%d", &B);
		result = A * B;
		printf("Result: %d\n", result);
	}
	else if (userChoice == 4)
	/*
	Betty ne veux pas plus de 5 fonctions par fichier et 40 par fonction. 
	Donc il faut que je condense tout ça et terminer le projet.
	*/ 
	{
		printf("A: ");
		scanf("%d", &A);
		printf("B: ");
		scanf("%d", &B);
		result = A / B;

		if (B == 0)
		{
			printf("Error: division by zero");
		}
		printf("Result: %d\n", result);
	}
}

return (0);
}
