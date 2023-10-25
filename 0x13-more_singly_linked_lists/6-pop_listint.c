#include "lists.h"
/**
*pop_listint - clears nodes head of a list
*@head: the list to be used
*Return: an inter (valu of node)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp, *current_node;
	int value;

	if (*head == NULL)
		return (0);
	current_node = *head;
	temp = current_node->next;
	data = current_node->n;
	free(current_node);
	*head = temp;
	return (value);
}
