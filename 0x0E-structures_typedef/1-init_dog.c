#include "dog.h"

/**
 * init_dog - initialize variable struct dog
 *
 * @d: pointer to struct dog'
 * @name: char variable
 * @age: float age
 * @owner: char owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
