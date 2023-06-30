#include "main.h"

/**
 * _strncpy - Entry point of the program
 * Desription - The program copies
 *              a string
 *
 * @dest: the first parameter of the function
 * @src: the sscond parameter of the function
 * @n: the third parameter of the function
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dsst[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
