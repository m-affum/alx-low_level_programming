#include "lists.h"
/**
*list_len - prottotye to returns the number of elements
in the linked list_t list
*@h: the list to be used in linked list
*Return: the count of nodes
*/
size_t list_len(const list_t *h)
{
	const list_t *new_node = h;
	size_t count = 0;

	while (new_node != NULL)
	{
		new_node = new_node->next;
		count++;
	}
	return (count);
}
