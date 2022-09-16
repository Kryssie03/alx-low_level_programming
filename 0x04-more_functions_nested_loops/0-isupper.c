#include "main.h"

/**
 * _isupper - function to check for upper case characters
 * @c: argument of function
 *
 * Return: return 1 if its upppercase and return 0 otherwise
 */

int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
 
