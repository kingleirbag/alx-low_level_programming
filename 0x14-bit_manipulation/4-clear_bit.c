#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: bit argument
 * @index: point to clear
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
