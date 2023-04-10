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
	int power = strlen(b) - 1;
	int length = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (int i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1')
		{
			value += 1 << power;
		}
		power--;
	}
	return (value);
}
