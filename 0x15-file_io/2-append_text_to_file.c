#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: an input ptr to the file.
 * @text_content: an input text to write.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	if (!access(filename, F_OK))
		return (-1);

	if (!access(filename, W_OK))
		return (-1);

	file_desc = open(filename, O_WRONLY | O_TRUNC);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
