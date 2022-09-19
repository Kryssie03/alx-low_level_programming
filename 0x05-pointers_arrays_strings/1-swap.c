#include "main.h"

/**
 * swap_int - function to swap the value of intgers
 * @a: function parameter
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
