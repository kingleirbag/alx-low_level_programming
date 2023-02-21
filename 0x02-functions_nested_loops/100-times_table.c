#include "main.h"

/**
 * print_times_table - Entry poin
 *
 * Description: Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int num1, num2, product;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				product = num1 * num2;
				_putchar(44);
				_putchar(32);
				if (product <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(product + 48);
				}
				else if (product <= 99)
				{
					_putchar(32);
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(((product / 100) % 10) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
