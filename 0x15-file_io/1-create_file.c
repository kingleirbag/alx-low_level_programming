#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_open, file_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length])
			length++;
	}
	file_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_write = write(o, text_content, len);
	if (file_open == -1 || file_write == -1)
		return (-1);
	close(file_open);
	return (1);
}
