#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate strings
 * @s1: input
 * @s2: input
 *
 * Return: 0 else null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *arr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
	{
		j = 0;
	}
	else
		for (j = 0; s2[j]; j++)
			;
	k = i + j + 1;
	arr = malloc(sizeof(char) * k);
	if (arr == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		arr[l] = s1[l];
	for (l = 0; l < j; l++)
		arr[l + i] = s2[l];
	arr[i + j] = '\0';
	return (arr);
}

