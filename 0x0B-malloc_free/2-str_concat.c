#include<stdio.h>
#include<stdlib.h>
/**
* *str_concat - concatenates two strings.
* @s1: string 1
* @s2: string 2
* Return: NULL on failure
*  or pointer on success
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	return (ptr);
}
