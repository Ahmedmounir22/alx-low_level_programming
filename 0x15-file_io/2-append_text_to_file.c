#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * append_text_to_file - appends the provided text
 *	content to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text content to append to the file
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		text_len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
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
