#include "main.h"

/**
 * _memcpy - A function that copies memory
 *	     area
 *
 * @dest: first(dest) parameter of the function
 * @src: second(source) parameter of the function
 * @n: third(nbyte) parameter of the function
 *
 * Return: Always 0(success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char byte = src;

	for (i = 0; i < n; i++)
	{
		*p++ = dest;
	}
	return (dest);
}
