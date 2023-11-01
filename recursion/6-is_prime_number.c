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
		return (0); // 0 and 1 are not prime numbers
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0); // n is divisible by a number other than 1 and itself, so it's not prime
		}
	}

	return (1);
}
