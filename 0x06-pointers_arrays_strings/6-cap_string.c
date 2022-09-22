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

		for(j = 0; j <= 12; j++)
		{
			if (n[i] == separators[j])
			{
				j = 12;
				capt = 32;
			}
		}
	}
	return (n);
}

