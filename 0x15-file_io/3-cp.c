#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * main - the entry point of the cp program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, or non-zero on failure
*/
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written, close_status;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_status = close(fd_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}