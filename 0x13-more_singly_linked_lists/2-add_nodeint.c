#include "lists.h"
/**
*add_nodeint - add new nodes to sinly list
*@head: points to lists being used
*@n: results of adding nodes
*Return: pointer to list or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
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
		  *head = newnode;
		  newnode->next = temp;
	}
	return (*head);


}
