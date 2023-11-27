#include "main.h"

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output.
 * @filename: an input ptr to the file.
 * @letters: number of letters to print.
 * Return: number of printed letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char buffer[1024];
	ssize_t bytes_read, total_bytes = 0, bytes_to_write = 0, bytes_written;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	while (letters > 0)
	{
		bytes_read = read(file_desc, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			close(file_desc);
			return (0);
		}
		if (bytes_read == 0)
			break;

		bytes_to_write = (bytes_read < (ssize_t)letters)
			? bytes_read : (ssize_t)letters;
		bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);

		if (bytes_written == -1)
		{
			close(file_desc);
			return (0);
		}

		letters -= bytes_to_write;
		total_bytes += bytes_to_write;
	}
	close(file_desc);
	return (total_bytes);
}
