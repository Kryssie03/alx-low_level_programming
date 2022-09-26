#include <stdio.h>
#include "main.h"

/**
 * _memset - function to fill first n characters with a constant value 'b'
 * @s: arrayname
 * @b: value to be filled
 * @n: number of bytes to fill
 *
 * Return: a pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char s;
	char b;
	
	for (i = 0; i < n; i++)
	{
		char s[i] = b;
	}

	return (s);
}
