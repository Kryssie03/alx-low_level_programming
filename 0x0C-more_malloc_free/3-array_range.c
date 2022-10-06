#include "main.h"
#include <stdlib.h>

/**
 * array_range - function to print an array of integers
 * @min: input
 * @max: input
 *
 * Return: 0 else null
 */

int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (b = 0; (min + b) <= max; b++)
		a[b] = min + b;
	return (a);
}
