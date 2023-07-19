#ifndef MAIN_H
#define MAIN_H

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif
