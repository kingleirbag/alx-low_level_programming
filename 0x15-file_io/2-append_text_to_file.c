#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file name
 * @text_content: file content
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, file_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file_open = open(filename, O_WRONLY | O_APPEND);
	file_write = write(file_open, text_content, length);

	if (file_open == -1 || file_write == -1)
		return (-1);
	close(file_open);
	return (1);
}
