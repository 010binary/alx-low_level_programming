#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
