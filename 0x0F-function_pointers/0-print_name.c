#include "function_pointers.h"

/**
 * print_name: A function that print name
 * @name: the character pointer string
 * @f: a function pointer
 *
 * Return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
