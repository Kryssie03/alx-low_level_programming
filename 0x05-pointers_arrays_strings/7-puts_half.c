#include "main.h"

/**
 * puts_half - function to print half if string
 * @str: function parameter
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++
	}
	
	n = len / 2;

	if ((i % 2) == 1)
	{
		n = (len - 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
