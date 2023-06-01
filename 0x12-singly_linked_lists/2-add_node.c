#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: parameter with head node
  * @str: parameter with element str in structure
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
