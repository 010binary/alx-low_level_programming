#include <stdio.h>

/**
 * main - main function
 * Return: zero always
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
