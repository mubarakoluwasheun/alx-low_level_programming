#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you wuld need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: Returns the number of bits you would need to
 * flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
