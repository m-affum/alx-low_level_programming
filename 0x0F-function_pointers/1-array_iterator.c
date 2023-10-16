#include <stddef.h>
#include "function_pointers.h"
/**
*array_iterator - executes a function given as a parameter
*on each element of an array
*@size: size of the array to be be used
*@array: array to be used
*@action:  pointer to the function to be used
*Return: Nothing( void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
			(*action)(array[a]);
	}
}
