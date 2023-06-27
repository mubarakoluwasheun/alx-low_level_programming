#include "main.h"

/**
 * swap_int - Entry point of the program
 * Desription - The program swaps the values
 *              of two integers
 *
 * @a: the first parameter of the function
 * @b: the sscond parameter of the function
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
} 
