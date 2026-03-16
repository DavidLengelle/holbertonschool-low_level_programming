#include <stdlib.h>
#include "dog.h"

 /**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL if iti fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
int i;
char *namecp;
char *ownercp;

dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;

namecp = malloc(i + 1);

	if (namecp == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
		;

ownercp = malloc(i + 1);

	if (ownercp == NULL)
	{
		free(d);
		free(namecp);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		namecp[i] = name[i];

	namecp[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		ownercp[i] = owner[i];

	ownercp[i] = '\0';

d->name = namecp;
d->age = age;
d->owner = ownercp;

return (d);
}
