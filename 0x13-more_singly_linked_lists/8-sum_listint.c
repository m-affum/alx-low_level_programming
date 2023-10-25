#include "lists.h"
/**
*sum_listint - the sum of all data(n) of the list
*@head: singly list to be used
*Return: sum of data or 0
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int add = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
