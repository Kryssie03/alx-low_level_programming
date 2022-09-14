#include "main.h"
/**
 * print_times_table - function to print n times table
 * @n: arguement of function
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int num, multi, prod;

	for (num = 0; num <= n; num++)
	{
	       _putchar('0');

		for (multi = 1; multi <= n; multi++)
		{
			_putchar(',');
			_putchar(' ');

			if (n > 15 || n < 0)
			{
				continue;
			}
			prod = num * multi;
			 if (prod <= n)
			{
				_putchar(' ');
			}
			else if (prod > 99)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod % 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			 else
				 _putchar(((prod / 10) % 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

