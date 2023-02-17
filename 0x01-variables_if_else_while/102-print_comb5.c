#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print all number from 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigits;
	int seccondDigits;

	for (firstDigits = 0; firstDigits <= 98; firstDigits++)
	{
		for (seccondDigits = firstDigits + 1; seccondDigits <= 99; seccondDigits++)
		{
			putchar((firstDigits / 10) + '0');
			putchar((firstDigits % 10) + '0');
			putchar(' ');
			putchar((seccondDigits / 10) + '0');
			putchar((seccondDigits % 10) + '0');

			if (firstDigits == 98 && seccondDigits == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
