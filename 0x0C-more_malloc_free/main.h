#ifndef MAIN_H
#define MAIN_H

int multiple(int argc, char *argv[]);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

int _putchar(char c);

#endif/*MAIN_H*/
