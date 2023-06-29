#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		 password[i] = rand() % 94 + 33;
	}

	password[PASSWORD_LENGTH] = '\0';

	return (password);
}

int main()
{
	char *password;
	srand(time(NULL));
	password = generate_password();

	printf("Generated Password: %s\n", password);

	char input[PASSWORD_LENGTH + 1];

	printf("Enter the password: ");
	scanf("%s", input);

	if (strcmp(input, password) == 0)
	{
		printf("Tada! Congrats\n");
	}
	else
	{
		printf("Password is incorrect\n");
	}

	free(password);

	return (0);
}
