#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* new_dog - creates a new dog
*@name: first arguemnt
*@age: second argument
*@owner: third argument
*Return: new dog or NULL on compilation
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, len1 = 0, len2 = 0;
	dog_t *newdog;

	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (j = 0; owner[j] != '\0'; j++)
		len2++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(len1 * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		newdog->name[i] = name[i];
	newdog->age = age;
	newdog->owner = malloc(len2 * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
