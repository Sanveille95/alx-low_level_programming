#include "lists.h"
/**
* print_listint_safe - prints a linked list
* @head: head of the list
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hp = head;
	const listint_t *add = head;
	size_t i = 0;

	while (hp != NULL && add != NULL && add->next != NULL)
	{
		printf("[%p] %d\n", (void *)hp, hp->n);
		hp = hp->next;
		add = add->next->next;

		if (hp == add)
		{
			printf("-> [%p] %d\n", (void *)hp, hp->n);
			exit(98);
		}
		i++;
	}

	if (hp != NULL)
	{
		printf("[%p] %d\n", (void *)hp, hp->n);
		i++;

	}

	return (i);
}
