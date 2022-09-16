#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: arguement of function
 *
 * Return: 1 if its a digit or 0 if its not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
