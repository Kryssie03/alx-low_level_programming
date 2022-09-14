#include "main.h"
/**
 * print_times_table - function to print n times table
 * @n: arguement of function
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int n, num, multi, prod;
	
	for (num = 0; num <= n; num++)
	{
	       _putchar('0');

		for (multi = 1; multi <= n; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;
			if (n > 15 || n < 0)
			{
				continue;
			}
			else if (prod <= n)
			{
				_putchar(' ');
			}
			else
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

