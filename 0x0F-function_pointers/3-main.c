#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point, performs calculations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int first, second;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	op = argv[2];
	second = atoi(argv[3]);


	if ((*op == '/' || *op == '%') && (second == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(first, second));
	return (0);
}
