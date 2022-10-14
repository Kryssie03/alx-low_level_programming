#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print integers
 * @separator: ,
 * @n: number of integers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	if (separator == NULL)
		;
	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(pa, unsigned int), separator);
		if (i == (n - 1))
			;
	}

	printf("\n");
	va_end(pa);
}
