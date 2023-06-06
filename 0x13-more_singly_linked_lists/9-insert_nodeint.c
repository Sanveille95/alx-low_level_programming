#include "lists.h"

/**
  * insert_nodeint_at_index -  inserts a new node at a given position
  * @head: head of the list
  * @idx: the index of the list where the new node should be added
  * @n: integer element
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; c < idx - 1; c++)
	{
		h = h->next;

		if (h == NULL && idx - c > 0)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
