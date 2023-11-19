#include "main.h"
/**
 * calc_root - calculate the square root
 * @n: the number for which to calculate the square root
 * @i: the the currect guess for the root
 * Return: the square root of n , If n does not have a natural square root, the function should return -1
 */
int calc_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return calc_root (n, i + 1);
}
/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n : number for which to compute the square root
 * Return:  if n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return calc_root (n, 0);
}
