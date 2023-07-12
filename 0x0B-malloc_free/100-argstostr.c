#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - A function that concatenates all the
 *	       arguments of a program
 *
 * @ac: Number of arguments
 * @av: Array of arguments strings
 *
 * Return: Always 0(success)
 */
char *argstostr(int ac, char **av)
{
	int i;
	int totalLength;
	char *conCat;
	int currentIndex;
	int argLength;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	totalLength = 0;
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}

	conCat = (char *)malloc(totalLength * sizeof(char));
	if (conCat == NULL)
	{
		return (NULL);
	}

	currentIndex = 0;
	for (i = 0; i < ac; i++)
	{
		argLength = strlen(av[i]);
		strncpy(conCat + currentIndex, av[i], argLength);
		currentIndex += argLength;
		conCat[currentIndex] = ('\n');
		currentIndex++;
	}

	conCat[totalLength - 1] = ('\0');
	return (conCat);
}
