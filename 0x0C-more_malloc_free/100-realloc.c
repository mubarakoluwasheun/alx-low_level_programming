#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - A function that reallocates
 *		    memory using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: size of old memeory in bytes
 * @new_size: size of new memory in bytes
 *
 * Return: returns a pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	memcpy(newPtr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (newPtr);
}
