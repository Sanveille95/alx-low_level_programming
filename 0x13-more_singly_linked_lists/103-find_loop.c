#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in list
 * @head: head of list
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tiger, *horse;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tiger = head->next;
	horse = (head->next)->next;

	while (horse)
	{
		if (tiger == horse)
		{
			tiger = head;

			while (tiger != horse)
			{
				tiger = tiger->next;
				horse = horse->next;
			}

			return (tiger);
		}

		tiger = tiger->next;
		horse = (horse->next)->next;
	}

	return (NULL);
}
