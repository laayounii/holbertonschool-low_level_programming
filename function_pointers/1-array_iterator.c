#include "function_pointers.h"

/**
 * void array_iterator - function that executes a function given as a parameter on each element of an array.
 * @array:  array of integers
 * @action: a pointer to the function you need to use
 * @size: the size of the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
