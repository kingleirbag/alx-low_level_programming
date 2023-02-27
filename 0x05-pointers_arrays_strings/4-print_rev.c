#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string argument
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
