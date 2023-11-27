#include "main.h"

/**
 * ErrorExistFd - exit for Fds.
 * @fd: an input fd to print
 * Return: Nothing.
 */
void ErrorExistFd(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * copy_file - function to copy file to another.
 * @file_from: an input ptr to file to copy from.
 * @file_to: an input ptr to file to copy at.
 * Return: Nothing.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
		ErrorExistFd(fd_from);
	if (close(fd_to) == -1)
		ErrorExistFd(fd_to);
}

/**
 * main - Entry point
 *
 * @argc: an input number of args
 * @argv: an input arguments
 * Description: copy file content from one to another.
 * Return: Always 0 (Success);
 */
int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
