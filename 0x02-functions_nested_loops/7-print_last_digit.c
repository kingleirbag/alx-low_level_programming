#include "holberton.h"

/**
* print_last_digit - Entry point
*
* Description: Prints the last digit of a number.
*
* @n: input number as an integer.
*
* Return: last digit.
*/
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = lastDigit * -1
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
