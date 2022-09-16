#include "main.h"

/**
 * _isupper - function to check for upper case characters
 * @c: argument of function
 *
 * Return: 0
 */
int _isupper(int c)
{
	int c;
	
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'A' && c <= 'Z')
		{
			return (1);
		}
		else
			return (0);
	}
}
 
