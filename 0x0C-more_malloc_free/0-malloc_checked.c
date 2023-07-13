#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checkedD - A function that allocates
 *                   memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

/**
 * main - A function that prints a string
 *           follow by a new line
 *
 * Return: Always 0(success)
 */

int main() {
    unsigned int size;
    int *array;

    size = 10;
    array = malloc_checked(size * sizeof(int));

    free(array);
    return (0);
}
