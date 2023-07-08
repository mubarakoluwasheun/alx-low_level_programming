#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints all
 *        arguments it receives
 *
 * @argc: Argument count of the function
 * @argv: Argument vector of the function
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
