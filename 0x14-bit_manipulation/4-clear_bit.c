#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * to 0 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the b to set
 *
 * Return: Returns 1 if it worked, or -1 if an
 * error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1UL << index);
		return (1);
}
