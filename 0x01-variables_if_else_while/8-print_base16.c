#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print base 16 values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char character;

	for (digit = 0; digit <=9; digit++)
		putchar('0' + digit);

	for (character = 'a'; character <= 'f'; character++)
		putchar(character);

	putchar('\n');

	return (0);
}
