#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs that prints the minimum no of coin
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents, ncoins = 0;
	int i = 0;

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < (int)(sizeof(coins) / sizeof(coins[0])); i++)
	{
		ncoins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", ncoins);
	return (0);
}
