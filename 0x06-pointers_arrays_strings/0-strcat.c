#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: dest argument
 * @src: src argument
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}	
