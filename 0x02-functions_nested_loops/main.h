#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; lower[i] != '\0'; i++)
	{
		 _putchar(lower[i]);
	}
	_putchar('\n');
}

#endif
