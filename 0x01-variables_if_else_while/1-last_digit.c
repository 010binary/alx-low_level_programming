#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - program entry point
 * Return: zero returned in this program
*/
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5", n, y);
	else if (y == 0)
		printf("Last digit of %d is %d and is 0", n, y);
	else if (y < 6 && y != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, y);
	printf("\n");
	return (0);
}
