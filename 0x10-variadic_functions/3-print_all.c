#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - a function that prints anything
 * @format: format strings
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, j, printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				printed = 1;
				break;
		}
		j = i + 1;
		while (format[j] && format[j] != 'c' && format[j] != 'i' &&
			format[j] != 'f' && format[j] != 's')
			j++;
		if (format[j] && printed)
			printf(", ");
		i++;
		printed = 0;
	}
	va_end(args);
	putchar('\n');
}
