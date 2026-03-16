#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

len_name = _strlen(name);

d->name = malloc(sizeof(char) * (len_name + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

len_owner = _strlen(owner);

d->owner = malloc(sizeof(char) * (len_owner + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;

return (d);
}
