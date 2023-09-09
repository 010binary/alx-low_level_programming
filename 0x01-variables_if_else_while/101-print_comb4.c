#include <stdio.h>

/**
 * main - Prints smallest of all possible combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				if (a != b && b != c && a != c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
