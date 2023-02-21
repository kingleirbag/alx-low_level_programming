#include "main.h"

/**
 * print_alphabet_x10 - Function that prints lower case alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int numTimes;
	char letter;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
