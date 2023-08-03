#ifndef MAIN_H
#define MAIN_H

/* Functions prototype */
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);

#endif