#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strstr -  locates a substring
* @haystack: string to search for substring
* @needle: substring
* Return: returns a pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *n = needle;
		char *h  = haystack;

		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;

		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);

}
