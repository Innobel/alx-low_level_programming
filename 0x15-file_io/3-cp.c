#include "main.h"
#include <stdio.h>
/**
 * main - Copy the content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Exit statttus.
 */

int main(int argc, char *argv[])
{ int fd_from, fd_to;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t nwrite, nread;

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99); }
	if (access(file_to, W_OK) == -1)
	{ close(fd_to);
		exit(99); }
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_to);
		exit(98); }
	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		{ nwrite = write(fd_to, buffer, nread);
		if (nwrite != nread)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		close(fd_to);
		exit(99); } }
	if (nread == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98); }
	if (close(fd_from) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd fd_from\n");
		exit(100); }
	if (close(fd_to) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd fd_to\n");
		exit(100); }
	return (0); }
