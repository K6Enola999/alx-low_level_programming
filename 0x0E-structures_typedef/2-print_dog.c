#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: a struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("nil\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: ");
		if (d->age == NULL)
			printf("(nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
