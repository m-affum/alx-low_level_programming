#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
* *string_nconcat -  concatenates two strings.
*@n: the lenght of s2 we want to concatenate
* @s1: string 1
* @s2: string 2
* Return: Null or pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	if (n >= len2)
		n = len2;
	ptr = malloc((n + len1 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + n] = '\0';
	return (ptr);
}
