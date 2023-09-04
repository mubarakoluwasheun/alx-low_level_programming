#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>

/* Functions prototypes */
void print_entry(uint64_t e_entry);
void print_type(uint16_t e_type);
void print_abiversion(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
