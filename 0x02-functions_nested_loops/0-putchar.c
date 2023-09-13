#include <main.h>

/**
 * main: Entry point of the program
 *
 * Return: zero for this program
*/

int main(void)
{
	char text[] = "_putchar\n";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	return (0);
}
