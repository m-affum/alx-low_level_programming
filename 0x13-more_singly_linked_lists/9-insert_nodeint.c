#include "lists.h"
/**
*insert_nodeint_at_index - inserts new node in list
*at a new assigned position
*@head: pointes to the list to be used
*@idx: index to access
*@n: value to insert at new index
*Return: list or NULL.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		listint_t *temp, *newnode;
		unsigned int j;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (*head);
		}
		for (j = 0; j < idx - 1; j++)
		{
			if (temp == NULL)
			{
				free(newnode);
				return (NULL);
			}
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
