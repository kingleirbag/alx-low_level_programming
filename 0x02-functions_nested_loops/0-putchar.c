#include "holberton.h"

/*
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character[] = "_putchar";

	for(int i = 0; i < 8; i++)
	{
		_putchar(character[i]);
	}
	_putchar('\n');

	return (0);
}
