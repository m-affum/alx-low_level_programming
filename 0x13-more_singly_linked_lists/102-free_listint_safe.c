#include "lists.h"

/**
 * free_listint_safe: free memory list used
 * @h: pointer to list to use
 * Return: the size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t number = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		number++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}
	*h = NULL;
	return (number);
}
