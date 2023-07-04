#include "main.h"

/**
 * _memset - A functiok that fills memory
 *	     with a constant byte
 *
 * @s: first(pointer) parameter of the function
 * @b: second(byte) parameter of the function
 * @n: third(nbyte) parameter of the function
 *
 * Return: Always 0(success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *p = s;
	unsigned char byte = b;

	for (i = 0; i < n; i++)
	{
		*p++ = byte;
	}
	return (s);
}
