#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int filedest;
	int num;
	ssize_t file_output;

	if (filename == NULL)
		return (-1);
	filedest = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedest == -1)
		return (-1);
	if (text_content != NULL)
	{
		num = 0;
		while (*(text_content + num) != '\0')
			num++;
		file_output = write(filedest, text_content, num);
		if (file_output == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(filedest);
	return (1);
}
