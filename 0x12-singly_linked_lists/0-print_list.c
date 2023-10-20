#include "lists.h"
/**
*print_list - prints the elements of the list_t array
*@h: the list to be printed
*Return: returns nodes conted 
*/
size_t print_list(const list_t *h)
{
	const list_t *new_node = h;
	size_t count = 0;

	while (new_node != NULL)
	{
		if (new_node->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", new_node->len, new_node->str);
		new_node = new_node->next;
		count++;
	}
	return (count);
}
