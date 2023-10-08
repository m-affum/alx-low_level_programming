#include<stdio.h>
#include<stdlib.h>
/**
* *array_range - creates an array of integers.
* @min: minimum integer value
* @max: maximum integer value
* Return: Null or pointer on compilation
*/
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((1 + max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;
	return (ptr);
}
