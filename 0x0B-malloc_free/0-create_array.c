#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create an array and initializes it with
 * a specific character
 * @size: array lenght
 * @c: input
 *
 * Return: 0 or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
