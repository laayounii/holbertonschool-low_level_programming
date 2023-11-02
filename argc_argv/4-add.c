#include <stdio.h>
#include <stdlib.h>
/**
 *checknumbers - check for numbers
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0 or 1
 */
int checknumbers(int argc, char **argv)
{
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < 47) || (argv[i][j] > 58))
			{
				return (0);
			}
			j++;
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (checknumbers(argc, argv) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
