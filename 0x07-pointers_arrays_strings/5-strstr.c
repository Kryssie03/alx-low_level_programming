#include "main.h"

/**
 *  _strstr - a function that locates a substring
 *  @haystack: string to be checked
 *  @needle: searched in haystack
 *
 *  Return: a pointer to the beginning of the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	char i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				break;
			}
		}
		if (needle[j])
			return (haystack + i);
	}
	return (0);
}
