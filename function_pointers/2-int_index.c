#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp function does not return 0.
 *         If no element matches or size is 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	int i;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
