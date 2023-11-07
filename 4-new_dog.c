#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *s)
{
	int i = 0;
	
	while(s++)
		i++;
	return (i);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return NULL;
	
	char *namecpy, *ownercpy;

	namecpy = malloc(sizeof(char * (_strlen(name) + 1)));
	ownercpy = malloc(sizeof(char * (_strlen(owner) + 1)));

	if (namecpy == NULL || ownercpy == NULL)
		return NULL;

	int i;
	
	for (i = 0; name[i]; i++)
		namecpy[i] = name[i];
	namecpy[i] = '\0';
	
	for (i = 0; owner[i]; i++)
		ownercpy[i] = name[i];
	ownercpy[i] = '\0';

	dog_t *new;
	
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return NULL;

	new->name = namecpy;
	new->owner = ownercpy;
	new->age = age;

	return (new);
}
