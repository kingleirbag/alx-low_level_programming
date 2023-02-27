#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		dest[index] = src[index];
		index++;
	} while (src[index] != '\0');

	return (dest);
}
