#include <stdio.h>
#include "main.h"

/**
 * cap_string - function to capitalize words
 * @n: iput
 * Return: n
 */

char *cap_string(char *n)
{
	int i, j;
	int capt = 32;
	int separators[] = {',',';','.','!','?','"','(',')','{','}',' ', '\n','\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - capt;
		}

		capt = 0;
		for(x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				capt = 32;
			}
		}
	}
	return (n);
}

