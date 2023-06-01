#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: parameter pointing to the head of the linked list
  */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
