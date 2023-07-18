#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A functions that frees dog
 * @d: A pointer to dog free function
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
