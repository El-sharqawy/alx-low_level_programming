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
 * ErrorFiles - exit for files.
 * @f1: file 1.
 * @f2: file 2.
 * @argv: an input files.
 * Return: Nothing.
 */
void ErrorFiles(int f1, int f2, char *argv[])
{
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
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
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ErrorFiles(fd_from, fd_to, argv);
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			ErrorFiles(0, bytes_read, argv);
		}
	}
	if (bytes_read == -1)
		ErrorFiles(bytes_read, 0, argv);

	if (close(fd_from) == -1)
		ErrorExistFd(fd_from);
	if (close(fd_to) == -1)
		ErrorExistFd(fd_to);
	return (0);
}
