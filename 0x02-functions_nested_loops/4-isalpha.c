#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the integer value
 *
 * Descripion: Checks if a character is lower case or upper case
 *
 * Return: 1 if true else 0 if false
 *
 */
int _isalpha(int c)
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
	for (i = 'A'; i <= 'Z'; i++)
	{
		/* Check for int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
