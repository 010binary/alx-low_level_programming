#include "main.h"

/**
 * reverse_array - function to reverse an array of integer
 * @a: arrary to be reversed
 * @n: number of elements to be reversed
*/

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		int temp = a[first];

		a[first] = a[last];
		a[last] = temp;

		first++;
		last--;
	}
}
