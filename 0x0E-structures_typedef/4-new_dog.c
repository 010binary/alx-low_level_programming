#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - new dog function
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: ptr to new dog function or NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name, *cpy_owner;
	int i = 0, j = 0, k, l;

	/* i=length of dog name while j=length of dog owner */

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpy_name = malloc(sizeof(char) * i + 1);
	if (cpy_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	cpy_owner = malloc(sizeof(char) * j + 1);
	if (cpy_owner == NULL)
	{
		free(new_dog);
		free(cpy_name);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		cpy_name[k] = name[k];
	for (l = 0; l <= j; l++)
		cpy_owner[l] = owner[l];
	new_dog->name = cpy_name;
	new_dog->age = age;
	new_dog->owner = cpy_owner;
	return (new_dog);
}
