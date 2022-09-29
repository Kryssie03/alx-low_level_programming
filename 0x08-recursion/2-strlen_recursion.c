#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of string
 * @s: string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += (s + 1);
	}
}
