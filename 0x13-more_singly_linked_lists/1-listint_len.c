#include "lists.h"

/**
  * listint_len - prints the number of elements in a list
  * @h: head of the list
  * Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
