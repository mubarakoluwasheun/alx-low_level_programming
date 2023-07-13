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
 *
 * Return: returns a pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		new_str[i] = s2[j];
		new_str[i] = '\0';
	}

	return (new_str);
}
