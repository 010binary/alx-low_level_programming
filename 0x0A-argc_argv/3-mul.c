#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0 if successful or 1 if argument is incomplete
*/

int main(int argc, char *argv[])
{
	int digit1, digit2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	digit1 = atoi(argv[1]);
	digit2 = atoi(argv[2]);
	{
		printf("%d\n", digit1 * digit2);
	}
	return (0);
}
