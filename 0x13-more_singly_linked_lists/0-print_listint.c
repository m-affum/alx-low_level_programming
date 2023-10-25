#include "lists.h"
/**
*print_listint - prints node elements
*@h: singly list being used
*Return: size of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t j = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		j++;
	}
	return (j);
}
