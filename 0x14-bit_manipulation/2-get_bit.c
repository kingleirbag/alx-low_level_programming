#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n : bit argument
 * @index: where to start
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
