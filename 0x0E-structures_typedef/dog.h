#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some elements about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner the of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
