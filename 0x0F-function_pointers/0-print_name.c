#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name: A function that print name
 * @name: the character pointer string
 * @f: a function pointer
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}