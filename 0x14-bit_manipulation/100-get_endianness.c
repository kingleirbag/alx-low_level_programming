#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	int num = 1;
	char *pointer = (char *) &num;

	return (*pointer == 1);
}
