#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function that prints opcodes
 * @func: ptr to the function
 * @num_bytes: number of bytes to print
*/

void print_opcodes(void *func, size_t num_bytes)
{
	unsigned char *ptr;
	size_t i;

	ptr = (unsigned char *)func;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02x", *ptr++);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successfull or 1 if error is printed
*/

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, num_bytes);

	return (0);
}
