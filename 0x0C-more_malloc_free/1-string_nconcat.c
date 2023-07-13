#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - A function that allocates
 *		     memory using malloc
 *
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: number of bytes to allocate
 * Return: returns a pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = ("");
	else
	{
		while (s1[len1])
			len1++;
	}
	if (s2 == NULL)
		s2 = ("");
	else
	{
		while (s2[len2] && len2 < n)
			len2++;
	}
	newString = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newString[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		newString[i] = s2[j];
		i++;
	}
	new_str[i] = ('\0');
	return (newString);
}
