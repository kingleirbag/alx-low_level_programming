#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cb - function that create a buffer
 * @file: file
 * Return: buffer
 */
char *cb(char *file)
{
	char *num;

	num = malloc(sizeof(char) * 1024);

	if (num == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (num);
}
/**
 * cf - function that closes a file
 * @file: le to be closed
 */
void cf(int file)
{
	int close_file;

	close_file = close(file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int destination, origin, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = cb(argv[2]);
	origin = open(argv[1], O_RDONLY);
	read_file = read(origin, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (origin == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_file = write(destination, buffer, read_file)
		if (destination == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_file == read(origin, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_file > 0);
	free(buffer);
	cf(origin);
	cf(destination);
	return (0);
}
