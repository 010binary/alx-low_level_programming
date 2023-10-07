#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - takes 2 arguments
 * @argc: argument count
 * @argv: argument vector containing to ints to be multiplied
 * Return: 0 at success
*/

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int i, num1D, num2D, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	for (i = 0; num2[i] != '\0'; i++)
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	/*convert to integer*/
	num1D = atoi(num1);
	num2D = atoi(num2);

	mul = num1D * num2D;

	printf("%d\n", mul);
	return (0);
}
