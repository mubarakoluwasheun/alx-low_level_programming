#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point of the program
 * Desription - The program returns the
 *              length of a string
 *
 * @s: the parameter of the function
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
