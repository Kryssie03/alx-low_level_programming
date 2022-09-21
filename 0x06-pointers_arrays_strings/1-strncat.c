#include <stdio.h>
#include "main.h"

/**
 * _strncat - function to concatenate strings
 * @dest: Destination
 * @src: Source
 * @n: input of max bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
		if (src[k] == '\0')
		{
			k = n;
		}
	}
	return (dest);
}
