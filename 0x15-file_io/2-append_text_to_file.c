#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to be appended.
 * @text_content: Pointer to the text to be appended.
 * Return: 1 on success and -1 on all failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwrite;
	/* Change the mode of the file to rw-rw-r-- */
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Check if filename or text_conteent is NULL */
	if (filename == NULL || text_content == NULL)
		return (-1);

	/* Open the file in read_write mode and append mode */
	fd = open(filename, O_RDWR | O_APPEND, mode);

	/* check if file was opened successfully */
	if (fd == -1)
		return (-1);

	/* Appends text_content to file */
	nwrite = write(fd, text_content, strlen(text_content));

	/* Check if file was written successfully */
	if (nwrite == -1)
	{
		close(fd); /* close if there is an error */
		return (-1);
	}

	/* Checks if No byte was written */
	if (nwrite == 0)
	{
		close(fd); /* close if no byte was written */
		return (1); /* return successful */
	}

	close(fd); /* close if the file was successuflly appended */

	return (1); /* return 1 to indicate success */
}
