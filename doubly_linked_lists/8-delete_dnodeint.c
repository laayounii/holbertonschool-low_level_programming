#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 
 * @head: pointer to a pointer to the head of the doubly linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	prev = temp->prev;
	prev->next = temp->next;

	if (temp->next)
		temp->next->prev = prev;

	free(temp);
	return (1);
}
