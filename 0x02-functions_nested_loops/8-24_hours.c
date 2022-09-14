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
	int min_remainder;
	int hours_remainder;

	while (hours <= 23)
	{
	while (min <= 59)
	{
	min_remainer = min % 10;  hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_remainder + '0');
	min++;
	_putchar('\n');
	}
	hours++;
	min = 0;
}
}
