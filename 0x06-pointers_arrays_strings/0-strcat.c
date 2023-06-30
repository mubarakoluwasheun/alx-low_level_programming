#include "main.h"

/**
 * _strcat - Entry point of the program
 * Desription - The program concatenates
 *              two strings
 *
 * @dest: the first parameter of the function
 * @src: the sscond parameter of the function
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';
	return (dest);
}
