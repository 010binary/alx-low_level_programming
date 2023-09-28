/**
 * _memset - function to fill block of memory with a specifield value
 * @s: pointer to the starting address
 * @b: value to be set
 * @n: number of byte to be set to value in memory block
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
