#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: integer to be tested
 *
 * Description: prints the absolute value of an integer
 *
 * Return: absolute int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
