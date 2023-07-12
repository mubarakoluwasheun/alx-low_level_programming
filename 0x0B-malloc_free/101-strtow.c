#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	int word_count;
	char *str_copy;
	char *token;
	char **words;
	int index;

    if (str == NULL || strlen(str) == 0)
        return NULL;

    word_count = 0;
    str_copy = strdup(str);
    token = strtok(str_copy, " ");

    while (token != NULL) {
        word_count++;
        token = strtok(NULL, " ");
    }

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        free(str_copy);
        return NULL;
    }

    index = 0;
    token = strtok(str, " ");
    while (token != NULL) {
        words[index] = strdup(token);
        index++;
        token = strtok(NULL, " ");
    }

    words[index] = NULL;

    free(str_copy);

    return words;
}
