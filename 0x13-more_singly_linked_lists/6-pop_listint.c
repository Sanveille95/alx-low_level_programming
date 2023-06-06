#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: head of the list
  * Return: the head node’s data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int pop_n;

	if (*head == NULL)
		return (0);

	pop_n = (*head)->n;
	h = *head;
	*head = (*head)->next;
	free(h);
	return (pop_n);
}
