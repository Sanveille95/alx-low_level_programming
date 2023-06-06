#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes
 * @head: head of the list
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tiger, *horse;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tiger = head->next;
	horse = (head->next)->next;

	while (horse)
	{
		if (tiger == horse)
		{
			tiger = horse;
			while (tiger != horse)
			{
				n++;
				tiger = tiger->next;
				horse = horse->next;
			}

			tiger = tiger->next;
			while (tiger != horse)
			{
				n++;
				tiger = tiger->next;
			}

			return (n);
		}

		tiger = tiger->next;
		horse = (horse->next)->next;
	}

	return (0);
}


/**
 * free_listint_safe - Frees a listint_t list containing loops
 * @h: head of the list
 * Return: The size of the list that was freed.
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n, index;

	n = looped_listint_count(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}
