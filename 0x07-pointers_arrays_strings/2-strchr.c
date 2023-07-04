#include "main.h"

/**
 * _strchr - A function that locates a character
 *           in a string
 *
 * @s: first(string) parameter of the function
 * @c: second(character) parameter of the function
 *
 * Return: returns NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
