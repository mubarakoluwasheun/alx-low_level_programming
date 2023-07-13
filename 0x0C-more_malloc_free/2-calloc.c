#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - A function that allocates
 *		     memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;
    memset(ptr, 0, nmemb * size);
    return ptr;
}
