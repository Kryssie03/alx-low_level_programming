#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: character to be located
 * Return: pointer
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
