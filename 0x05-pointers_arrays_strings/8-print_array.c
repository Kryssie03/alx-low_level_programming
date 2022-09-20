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
		int i = 0;

		while (i < n)
		{
			printf("%d", a[i]);

			if (i <= (n - 1))
			{
				printf(",");
				printf(" ");
			}

			i++;
		}
	}
	
	printf("\n");
}
