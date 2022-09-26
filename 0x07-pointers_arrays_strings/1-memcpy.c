#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] != '\0';
		src[i] = dest[i];
	}
	return (dest);
}
