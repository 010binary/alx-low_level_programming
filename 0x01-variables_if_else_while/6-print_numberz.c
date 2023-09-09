#include <stdio.h>
#include <unistd.h>
/**
 *main function
 *prints numbers less than 10
 *main function always returns 0
 */


int main(void)
{
	int x;
	for(x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return(0);
}
