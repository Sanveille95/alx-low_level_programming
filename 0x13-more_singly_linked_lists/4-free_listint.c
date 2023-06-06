#include "lists.h"

/**
  * free_listint - frees a listint_t list
  * @head: head of the list
  * Return: no return
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
