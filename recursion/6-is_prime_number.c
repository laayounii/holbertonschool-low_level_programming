#include "main.h"
/**
 * is_prime_number - func that returns 1 if a num is a prime num, 0 otherwise
 * @n: number for input
 * @i: for the increment
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
