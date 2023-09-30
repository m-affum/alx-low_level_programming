#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - adds positive numbers
*@argc: counts number of arguments
*@argv: stores the arguments
*Return: returns 1 or 0
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
