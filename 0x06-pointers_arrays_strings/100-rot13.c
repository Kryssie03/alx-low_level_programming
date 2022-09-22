#include <stdio.h>
#include "main.h"

/**
 * rot13 - function to encode a string using rot13
 * @n: input
 * Return: *n
 */

char *rot13(char *n)
{
	int i;
	int k;
	int w[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (n[i] == w[k])
			{
				n[i] = rot[k];
				break;
			}
		}
	}
	return (n);
}
