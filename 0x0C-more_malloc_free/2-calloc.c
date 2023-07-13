#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory
 *	     for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each elements in bytes
 *
 * Return: returns a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	memset(pointer, 0, nmemb * size);
	return (pointer);
}
