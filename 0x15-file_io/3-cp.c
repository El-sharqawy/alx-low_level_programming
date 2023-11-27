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
 * @f1: file 1/
 * @file1: an input file1.
 * @f2: file 2/
 * @file2: an input file2/
 * Return: Nothing.
 */
void ErrorFiles(int f1, const char *file1, int f2, const char *file2)
{
	if (f1 == -1 && file1 != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (f2 == -1 && file2 != NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
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
	ssize_t bytes_read = BUFFER_SIZE, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	ErrorFiles(fd_from, file_from, fd_to, file_to);
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			ErrorFiles(fd_from, file_from, 0, "");
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			ErrorFiles(0, "", fd_to, file_to);

	}
	if (close(fd_from) == -1)
		ErrorExistFd(fd_from);
	if (close(fd_to) == -1)
		ErrorExistFd(fd_from);
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
