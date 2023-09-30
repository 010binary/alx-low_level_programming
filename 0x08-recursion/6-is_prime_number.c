int is_prime_help(int n, int i);
/**
 * is_prime_number - function to check for prime number
 * @n: the number to check
 * Return: 0 for not prime and 1 for prime
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_help(n, 3));
}

/**
 * is_prime_help - function to help with the prime
 * @n: number pass
 * @i: iterator
 * Return: recursive
 */
int is_prime_help(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_help(n, i + 2));
}
