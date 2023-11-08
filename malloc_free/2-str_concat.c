#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: a string.
 */
char *str_concat(char *s1, char *s2)
{
	int s, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = strlen(s1) + strlen(s2);
	string = (char *)malloc(sizeof(char) * (s + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		string[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';
	return (string);
}
