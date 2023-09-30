long sqrt_help(long n, long low, long high);
/**
 * _sqrt_recursion - function to calculate sqrt of n
 * @n: the number
 * Return: the sqrt of the given number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return ((sqrt_help(n, 0, n)));
}

/**
 * sqrt_help - function to use binary search to find the sqrt
 * @n: the number pass
 * @low: lowest number
 * @high: highest number
 * Return: sqrt
 */
long sqrt_help(long n, long low, long high)
{
	long mid, square;


	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (sqrt_help(n, low, mid - 1));
	}
	else
	{
		return (sqrt_help(n, mid + 1, high));
	}
}
