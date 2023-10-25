#include "lists.h"

/**
 * find_loop_start: searches for a loop in a linked list
 * @list: singly list to be searhed
 * Return: the address of node or NULL
 */

listint_t *find_loop_start(listint_t *list)
{
	listint_t *current, *last;

	if (list == NULL)
		return (NULL);

	for (last = list->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (current = list; current != last; current = current->next)
			if (current == last->next)
				return (last->next);
	}

	return (NULL);
}

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop.
 * @head: list to be used
 * Return: the size of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	int loop;
	listint_t *loop_node;

	loop_node = find_loop_start((listint_t *) head);

	for (number = 0, loop = 1; (head != loop_node || loop)
			&& head != NULL; number++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			loop = 0;
		head = head->next;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);

	return (number);
}
