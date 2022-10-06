#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate strings
 * @n: number of bytes
 * @s1: input
 * @s2: input
 *
 * Return: 0 else null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, k, m;
	char *arr;

	if (s1 == NULL)
	{
		"";
	}
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
	{
		"";
	}
	else
		for (j = 0; s2[j]; j++)
			;
	if (n > j)
		j = n;

	len = i + j;
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (m = 0; k < j; m++)
	{
		arr[k] = s2[m];
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
