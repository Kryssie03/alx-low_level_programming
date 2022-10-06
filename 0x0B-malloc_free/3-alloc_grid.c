#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a two
 * dimentional array of integers
 * @width: input
 * @height: input
 *
 * Return: 0 else return null
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
