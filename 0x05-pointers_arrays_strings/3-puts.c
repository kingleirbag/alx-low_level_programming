#include "main.h"

/**
 * _puts - prints a string
 * @str: argument to be printed
 * Return: void
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length])
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
