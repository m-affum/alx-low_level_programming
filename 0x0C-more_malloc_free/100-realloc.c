#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
**_realloc - reallocate a memory block using malloc and free
*@ptr: pointer to be reallocated
*@old_size: size of all pointer(old one)
*@new_size: size of new pointer
*Return: returns NULL or pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i, min_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size  == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		new_ptr[i] = old_ptr[i];
	free(old_ptr);
	return (new_ptr);
}
