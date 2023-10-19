#include "main.h"
/**
 *main- prints the alphabet, in lowercase, followed by a new line.
 * Return: Always (Success)
 */
void print_alphabet(void) int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
