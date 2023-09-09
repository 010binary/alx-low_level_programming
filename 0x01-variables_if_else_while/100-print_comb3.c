#include <stdio.h>

/**
 * main - main function
 * Return: always zero
*/

int main(void)
{
	int i = 0;
	int h = 1;

	while (i < 10)
	{
		while (h < 10)
		{
			putchar('0' + i);
			putchar('0' + h);
			if (i != 8 || h != 9)
			{
				putchar(',');
				putchar(' ');
			}
			h++;
		}
		i++;
		h = i + 1;
	}
	putchar('\n');
	return (0);
}
