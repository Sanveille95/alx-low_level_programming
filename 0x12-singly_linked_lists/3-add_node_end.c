#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: parameter pointing to the head of linked list
  * @str: parameter with string
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = new;
	}

	return (new);
}


