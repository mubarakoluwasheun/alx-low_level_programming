#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *search, char *source)
{
	int i, j;

	for (i = 0; search[i] != '\0'; i++)
	{
		for (j = 0; source[j] != '\0'; j++)
		{
			if (search[i + j] != source[j])
				break;
		}
		if (!source[j])
			return (&search[i]);
	}
	return (NULL);
}
