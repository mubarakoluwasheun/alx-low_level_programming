#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * multiple - A function that multiplies
 *	      two integers
 *
 * @argc: count parameter of the function
 * @argv: vector paramter of the function
 *
 * Return: returns a pointer to result
 */

int multiple(int argc, char *argv[])
{
	int num1, num2, result;
	int i;

	if (argc != 3)
	{
        printf("Error\n");
        exit(98);
	}

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    for (i = 0; argv[1][i]; i++)
        if (!isdigit(argv[1][i]))
        {
            printf("Error\n");
            exit(98);
        }

    for (i = 0; argv[2][i]; i++)
        if (!isdigit(argv[2][i]))
        {
            printf("Error\n");
            exit(98);
        }

    result = num1 * num2;
    return (result);
}
