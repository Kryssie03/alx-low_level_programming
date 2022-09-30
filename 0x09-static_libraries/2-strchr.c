#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: character to be located
 *
 * Return: pointer or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
