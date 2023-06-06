#include "lists.h"

/**
  * get_nodeint_at_index - function that returns the nth node
  * @head: head of the list
  * @index: the index of the node, starting at 0
  * Return: nth node, if the node does not exist, return NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index; c++)
	{
		if (head != NULL)
		{
			head = head->next;
		}
	}
	return (head);
}
