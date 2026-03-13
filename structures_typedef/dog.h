#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic information
 * @name: The name of the dog (char *)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (char *)
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
