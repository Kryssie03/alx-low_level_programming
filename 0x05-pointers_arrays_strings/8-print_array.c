#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print elements of array
 * @a: function parameters
 * @n: function parameters
 * Description: Numbers should be printed accordingly and separated by comma
 */

void print_array(int *a, int n)
{
	if (a)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i <= (n - 1))
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
