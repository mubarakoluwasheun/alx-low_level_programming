#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A functions that concatenates two strings
 *
 * @s1: first pointer to strings
 * @s2: second pointer to strings
 *
 * Return: Return concat
 */
char* str_concat(char* s1, char* s2)
{
	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char* concat = (char*)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
