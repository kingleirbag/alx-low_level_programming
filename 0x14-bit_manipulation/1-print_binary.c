#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: argument
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
