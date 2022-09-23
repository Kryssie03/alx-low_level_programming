#include <stdio.h>
#include "main.h"

/**
 * print_number - function to print number
 * @n: input
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

       	if (n / 10)

		print_number(num / 10);

	_putchar(num % 10 + '0');
}
