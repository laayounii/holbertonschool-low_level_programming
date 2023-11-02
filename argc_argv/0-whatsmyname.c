#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: the number of command-line arguments
 * @argv: the array of strings that contains these arguments.
 * Rretur: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
