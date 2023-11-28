#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_file - Creates a file with specified permissions and writes text.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write tp the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		wirte_result = write(fd, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}

	}

	fclose(fd);

	return (1);
}
