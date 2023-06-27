#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Entry point of the program
 * Desription - The program prints n elements
 *		of an array of integers,
 *		followed by a new line.
 *
 * @*dest: the parameter of the function
 * @*src: the parameter of the function
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;
	*dest_ptr = '\0';

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	return dest;
}
