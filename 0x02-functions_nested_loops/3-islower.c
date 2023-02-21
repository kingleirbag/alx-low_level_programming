#include "main.h"

/**
 * _islower - Entry poin
 *
 * Descripion: Checks if a character is lower case
 *
 * Return: 1 if true else 0 if false
 *
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/* Check for int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
