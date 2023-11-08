#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: char
 * @size: the size of the array
 * Return: NULL or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
