#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -A function that returns a pointer to a newly 
 *	    allocated space in memory, which contains
 *	    copy of the string given as a parameter
 *
 * @str: string parameter of the function
 *
 * Return: Always 0(success)
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *newString = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (newString == NULL)
	{
		return (NULL);
	}

	strcpy(newString, str);
	return (newString);
}
