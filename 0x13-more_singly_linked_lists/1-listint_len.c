#include "lists.h"
/**
*listint_len - prints lists lenth
*@h: singly list being used
*Return: node size
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t number = 0;

	temp = h;
	while (temp != NULL)
	{
		number++;
		temp = temp->next;
	}
	return (number);
}
