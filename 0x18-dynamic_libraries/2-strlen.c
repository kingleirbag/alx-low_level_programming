#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string argument to be checked
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
