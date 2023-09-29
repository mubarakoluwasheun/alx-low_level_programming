#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * of the system
 *
 * Return: Returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
