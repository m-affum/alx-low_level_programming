#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - runs main code
*@argc: counts number of arguments
*@argv: stores the arguments
*Return: returns 1 or the product of numbers
*/
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}

	printf("%d\n", mult);
	return (0);
}
