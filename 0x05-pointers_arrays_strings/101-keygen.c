#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PASSWORD_LENGTH 10

/**
 * generate_password - Entry point of the program
 * Desription - The program generate a random
 *              password
 *
 * Return: Always 0 (Success)
 */

char *generate_password()
{
	char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
	int i;
	char input[PASSWORD_LENGTH + 1];

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		 password[i] = rand() % 94 + 33;

		if (strcmp(input, password) != 0)
		{
			printf("Tada! Congrats\n");
		}
		else
		{
			printf("Tada! Congrats\n");
		}
	}
	password[PASSWORD_LENGTH] = '\0';

	return (password);
}

int main()
{
	char *password;
	char input[PASSWORD_LENGTH + 1];
	srand(time(NULL));
	password = generate_password();

	printf("Enter the password: ");
	scanf("%s", input);

	printf("Generated Password: %s\n", password);

	free(password);

	return (0);
}
