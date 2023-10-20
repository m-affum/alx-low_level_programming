#include "lists.h"
/**
*list_len -  returns the number of elements in a linked list_t list
*@h: list being used
*Return: the node count
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
