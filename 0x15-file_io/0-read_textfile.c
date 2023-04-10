#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * ssize_t read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file name.
 * @letters: letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters * sizeof(char));
	ssize_t letters_read = read(fd, buffer, letters);
	ssize_t letters_written = write(STDOUT_FILENO, buffer, letters_read);

	if (fd == -1)
		return (0);

	if (letters_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (letters_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (letters_written);
}
