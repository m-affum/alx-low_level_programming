#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - the function searches for an integer
*@size: size of the array to be used
*@array: array to be used
*@cmp: pointer to the function to compare values
*Return: -1 or the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a< size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}

	}
	return (-1);

}
