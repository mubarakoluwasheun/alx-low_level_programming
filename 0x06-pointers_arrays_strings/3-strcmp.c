#include "main.h"

/**
 * _strcmp - Entry point of the program
 * Desription - The program compares
 *              two strings
 *
 * @s1: the first parameter of the function
 * @s2: the sscond parameter of the function
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2);
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;

}
