#include "main.h"
/**
 * jack_bauer - funtion to print every minutes of the day starting from 00:00
 * to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int min = 0;
	int hours = 0;
	int min_remainder = min % 10;
	int hours_remainder = hours % 10;

	for (min = '0'; min <= 59; min++)
	{
		for (hours = '0'; hours <= 23; hours++)
		{
			_putchar((hours / 10) + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
		}
		_putchar((min / 10) + '0');
		_putchar(min_remainder + '0');
	}
	_putchar('\n');
}
