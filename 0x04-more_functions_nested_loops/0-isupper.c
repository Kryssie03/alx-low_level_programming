#include "main.h"

/**
 * _isupper - function to check for upper case characters
 * @c: argument of function
 *
 * Return: Always 0 success
 */
int _isupper(int c)
{
	int c;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
 
