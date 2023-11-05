#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type 'struct dog'
 * @d: struct pointer
 * @name: char pointer
 * @age: float value
 * @owner: char pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
