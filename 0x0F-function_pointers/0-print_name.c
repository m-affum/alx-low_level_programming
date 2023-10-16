#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - prints a name
*@name: name to be printed
*@f: pointer to the function
*Return: nothing (void)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
