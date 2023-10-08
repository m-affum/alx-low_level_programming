#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**malloc_checked - allocates memory using malloc
*@b:lenth of pointer array
*Return: NULL or pointer on compliation
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
