#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: parameter with list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
	}

	return (x);
}
