#include "main.h"

/**
* jack_bauer - printing every minute of the day of jack bauer
*
* Return: Always 0 (success)
*/
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hours / 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(':');
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
		}
	}
}
