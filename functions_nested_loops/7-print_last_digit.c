#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	putchar('0' + x);
	return (x);
}
