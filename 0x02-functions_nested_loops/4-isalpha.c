#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the integer value
 *
 * Descripion: Checks if a character is lower case or upper case
 *
 * Return: 1 if true else 0 if false
 */
int _isalpha(int c)
{
	if (c >='a' && c <= 'z')
	{
		return (1);
	}
	else if(c >='A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
