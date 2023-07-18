#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - A dog struct initializer
 * @d: A pointer to dog struct function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
