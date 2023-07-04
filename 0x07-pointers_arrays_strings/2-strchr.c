#include "main.h"

/**
 * _strchr - A function that locates a character
 *           in a string
 *
 * @s: first(string) parameter of the function
 * @c: second(character) parameter of the function
 *
 * Return: Always 0(success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
