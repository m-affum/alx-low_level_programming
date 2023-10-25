#include "lists.h"
/**
*get_nodeint_at_index - gets the nth node of a list
*@head: pointer to list being used
*@index: specific index to return
*Return: value of nth node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int j;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (j = 0; j < index; j++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
