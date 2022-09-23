#include <stdio.h>
#include "main.h"

/**
 * print_number - function to print number
 * @n: input
 */

void print_number(int n)
{
	int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n < 10)
	{
		_putchar(n);
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 1000) % 100) + '0');
		_putchar((((n / 1000) % 100) % 10) + '0');
	}
}
