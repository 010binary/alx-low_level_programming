#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, k, Low = 0, High = size - 1;

	while (Low <= High)
	{
		printf("Searching in array:");
		for (k = Low; k <= High; k++)
		{
			printf(" %d", array[k]);
			if (k != High)
				printf(",");
		}
		printf("\n");

		mid = Low + (High - Low) / 2;

		if (array[mid] < value)
			Low = mid + 1;
		else if (array[mid] > value)
			High = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
