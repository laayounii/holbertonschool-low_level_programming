#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: the string of address s
 * return: void
 */
void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
