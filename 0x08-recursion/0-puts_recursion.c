#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function to pront a string.
 * @s: input
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		_putchar(s[0]);
	_puts_recursion(s +1);
}
