#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>

#define BUFFER_SIZE 1024
#define EN_NIDENT

void display_elf_header_info(Elf64_Ehdr *elf_header);
void error_message(const char *message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
