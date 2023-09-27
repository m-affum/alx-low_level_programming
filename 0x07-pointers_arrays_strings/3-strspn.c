#include "main.h"
#include <stddef.h>
/**
* _strspn -  gets the length of a prefix substring
* @s: main string pointer
* @accept: special string pointer
* Return: return n
*/
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n = n + 1;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}
		i++;

	}
	return (n);
}
