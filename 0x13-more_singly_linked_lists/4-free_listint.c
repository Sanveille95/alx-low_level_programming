#include "lists.h"

/**
  * free_listint - frees a listint_t list
  * @head: head of the list
  * Return: no return
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);

	}
}
