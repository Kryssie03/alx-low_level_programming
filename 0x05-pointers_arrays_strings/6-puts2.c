#include "main.h"

/**
 * puts2 - function to print one character out of others
 * @str: function parameter
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
