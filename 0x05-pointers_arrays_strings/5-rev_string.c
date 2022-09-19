#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: function parameter
 */

void rev_string(char *s)
{
	int k = 0;
	int rev = s[0];
	int i;

	while (s[k] != '\0')
		k++;
	
	for (i = 0; i < k; i++)
	{
		k--;

		rev = s[i];
		s[i] = s[k];
		s[k] = rev;
	}
}
