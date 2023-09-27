#include "main.h"
#include <stdlib.h>

/**
* *_strchr -  function that locates a character in a string
* @s: string
* @c: character located by function
* Return: returns pointer
*/
char *_strchr(char *s, char c)
{
	int i, n = 0;

	while (s[n] != '\0')
		n++;

	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
