#include "main.h"
#include <string.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: argument
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		value <<= 1;
		value += b[length] = '0';
		length++;
	}
	return (value);
}
