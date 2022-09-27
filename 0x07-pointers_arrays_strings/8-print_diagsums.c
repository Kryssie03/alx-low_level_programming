#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals 
 * of a square matrix of integers
 * @a: input
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, k = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		k += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		l += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
