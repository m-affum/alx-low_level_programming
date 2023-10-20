#include "lists.h"
/**
*free_list - frees a linked list list_t
*@head: pointer to the first list node
*Return: void
*/
void free_list(list_t *head)
{
	list_t *next_node, *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
