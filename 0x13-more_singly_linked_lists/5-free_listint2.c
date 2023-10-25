#include "lists.h"
/**
*free_listint2 - free memory of list
*@head: ponts to the list used
*Return:nothing (void)
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *current_node;

	if (head == NULL || *head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		temp = current_node->next;
		free(current_node);
		current_node = temp;
	}
	*head = NULL;
}
