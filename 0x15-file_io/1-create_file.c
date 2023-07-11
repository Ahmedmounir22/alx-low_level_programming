#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - creates a file with the specified name
 *	and writes the provided text content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		text_len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_len > 0)
	{
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1 || (size_t) bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
