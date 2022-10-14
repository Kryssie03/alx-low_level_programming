#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: string to be printed
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *str;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(pa);
}
