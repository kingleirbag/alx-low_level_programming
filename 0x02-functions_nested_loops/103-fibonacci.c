#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0, num2 = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);
	return (0);
}
