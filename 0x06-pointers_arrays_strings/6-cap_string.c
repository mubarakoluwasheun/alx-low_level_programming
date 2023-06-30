#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Entry point of the program
 * Desription - The program reverses the cntent
 *              of an array or integer
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	int i;
	int temp;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
}

#include <stdio.h>
#include <ctype.h>

char* cap_string(char* str) {
    int i = 0;
    int capitalizeNext = 1;

    while (str[i] != '\0') {
        if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
            str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') {
            capitalizeNext = 1;
        }
        else if (capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        }
        else {
            str[i] = tolower(str[i]);
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "hello, world! how are you?";

    printf("Original string: %s\n", str);

    char* capitalizedStr = cap_string(str);

    printf("Capitalized string: %s\n", capitalizedStr);

    return 0;
}

