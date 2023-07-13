#include "main.h"

/**
 * _strncat - Entry point of the program
 * Desription - The program concatenates
 *              two strings
 *
 * @dest: the first parameter of the function
 * @src: the sscond parameter of the function
 * @n: the third parameter of the function
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n > 0 && *src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}

	*ptr = '\0';
	return (dest);
}
