#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_list(const list_t *h);
int _putchar(char c)

#endif