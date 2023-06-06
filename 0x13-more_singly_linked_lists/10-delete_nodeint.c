#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *prev = *head;
	listint_t *next;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (prev)
	{
		if (c == index - 1)
		{
			next = prev->next;
			prev->next = next->next;
			free(next);
			return (1);
		}
		prev = prev->next;
		c++;
	}
	return (-1);
}
