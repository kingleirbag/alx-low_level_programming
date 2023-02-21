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

	for (numTimes = 1; numTimes <= 10; numTimes++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
