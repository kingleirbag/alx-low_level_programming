#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first argument to be swapped
 * @b: second argument to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
