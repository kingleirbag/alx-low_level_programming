#include "main.h"

/**i
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int totalMinutes = 0;
	int hourTens = 0, hourOnes = 0, minuteTens = 0, minuteOnes = 0;

	while (x < 1440)
	{
		_putchar(hourTens + '0');
		_putchar(hourOnes + '0');
		_putchar(':');
		_putchar(minuteTens + '0');
		_putchar(minuteOnes + '0');
		_putchar('\n');

		minuteOnes++;
		if (minuteOnes > 0)
		{
			minuteOnes = 0;
			minuteTens++;
		}
		if (minuteTens > 5)
		{
			minuteTens = 0;
			hourOnes++;
		}
		if (hourOnes > 9)
		{
			hourOnes = 0;
			hourTens++;
		}
		totalMinutes++;
	}
}
