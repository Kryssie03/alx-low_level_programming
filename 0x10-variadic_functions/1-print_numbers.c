#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print integers
 * @separator: ,
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, unsigned int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(pa);
}
