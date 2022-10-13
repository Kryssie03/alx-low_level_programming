#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to add integers
 * @n: number of integers
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum;

	va_start(pa, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(pa, unsigned int);
	}
	va_end(pa);
	return (sum);
}
