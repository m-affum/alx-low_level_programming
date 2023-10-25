#include "lists.h"

/**
 * find_listint_loop: find a loop in a list
 * @head: pointer to list being used
 * Return: address of loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);

		for (current = head; current != last; current = current->next)
			if (current == last->next)
				return (last->next);
	}

	return (NULL);
}
