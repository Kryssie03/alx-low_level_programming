#include "main.h"

/**
 * print_rev - function to print string in reverse
 * @s: function parameter
 */

void print_rev(char *s)
{
	int k = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		k++;
	}
	for (n = (k - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
