#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
        }

        int number = atoi(argv[i]);
        if (number <= 0) {
            printf("Error\n");
            return 1;
        }

        sum += number;
    }

    printf("%d\n", sum);
    return 0;
}

