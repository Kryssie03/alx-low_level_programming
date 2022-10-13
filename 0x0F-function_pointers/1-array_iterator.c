#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to print an integer
 * @array: input
 * @action: pointer to the function
 * @size: size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		action(array[i]);
	}
}
