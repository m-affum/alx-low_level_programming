#include "lists.h"
/**
*delete_nodeint_at_index - delete nodes at assigned index
*@head: pointer to the list being used
*@index: index of node to be deleted
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current_node;
	unsigned int j;

	if (*head == NULL || head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		if (current_node == NULL || current_node->next == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
	}
	temp = current_node->next;
	if (temp == NULL)
		return (-1);

	current_node->next = temp->next;
	free(temp);
	return (1);
}
