#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocates
 *		     memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
