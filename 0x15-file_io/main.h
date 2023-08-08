#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Functions prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
