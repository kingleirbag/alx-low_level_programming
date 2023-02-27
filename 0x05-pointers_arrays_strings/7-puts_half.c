#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string argument
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}