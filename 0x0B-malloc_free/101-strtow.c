#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

char **strtow(char *str) {

	int num_words;
	int in_word;
	int i;
	int j;
	char **words;
	int word_index;
	int word_length;

    if (str == NULL || strlen(str) == 0)
        return NULL;

    num_words = 0;
    in_word = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !in_word) {
            num_words++;
            in_word = 1;
        } else if (str[i] == ' ') {
            return (1);
        }
    }

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    word_index = 0;
    word_length = 0;
    in_word = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                word_length = 0;
                words[word_index] = (char *)malloc(MAX_WORD_LENGTH * sizeof(char));
                if (words[word_index] == NULL) {
                    for (j = 0; j < word_index; j++)
                        free(words[j]);
                    free(words);
                    return NULL;
                }
                in_word = 1;
            }

            words[word_index][word_length++] = str[i];
        } else if (in_word) {
            words[word_index][word_length] = '\0';
            word_index++;
            in_word = 0;
        }
    }

    if (in_word) {
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;

    return words;
}
