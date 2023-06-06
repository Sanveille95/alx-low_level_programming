#include "lists.h"

/**
  * nsert_nodeint_at_index -  inserts a new node at a given position
  * @head: head of the list
  * @idx: the index of the list where the new node should be added
  * @n: integer element
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (c = 0; c < idx - 1 && h != NULL; c++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
