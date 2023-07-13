#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - A function that allocates
 *		     memory using malloc
 *
 * @min: first input arguments of the function
 * @max: second input arguments of the function
 *
 * Return: returns a pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
