#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Entry point of the program
 * Desription - The program reverses the content
 *              of an array or integer
 *
 * @a: the first parameter of the function
 * @n: the second parameter of the function
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
