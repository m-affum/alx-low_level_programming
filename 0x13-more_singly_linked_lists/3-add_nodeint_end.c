#include "lists.h"
/**
*add_nodeint_end - add node atthe end of the list
*@n: the value being added
*@head: points to list being used
*Return: NULL or a pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		temp = *head = newnode;

	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
