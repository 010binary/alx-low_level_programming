#include <stdio.h>

/**
 * main - function to print no of argument
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	int index, sum;

	sum = 0;
	for (index = 1; index < argc; index++)
	{
		sum = sum + 1;
	}
	printf("%d\n", sum);
	return (0);
}
