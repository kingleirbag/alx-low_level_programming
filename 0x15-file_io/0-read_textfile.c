#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename:  file name
 * @letters: letter
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_open, file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, buffer, letters);
	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_open == -1 || file_read == -1 || file_write != file_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_open);
	return (file_write);
}
