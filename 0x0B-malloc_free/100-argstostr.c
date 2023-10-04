#include<stdio.h>
#include<stdlib.h>
/**
* *argstostr - concatenates all the arguments of the program
*@ac: integer variable
*@av: pointer to character array
*Return: NULL on failure
*or a pointer on a successful program.
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
