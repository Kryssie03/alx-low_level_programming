#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to return a pointer to the newly allocated space in
 * memory
 * @str: input
 *
 * Return: 0 else return null if it fails
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	arr =  malloc(sizeof(char) * (len + 1));

	/* check if arr is null */

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
