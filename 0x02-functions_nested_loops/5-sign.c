#include "main.h"
/**
 * _print-sign - function that prints the sign of numbers
 * @n: arguement of function
 *
 * Return: 0
 */
int print_sign(int n)
{
	if ( n >= '1' && n <= '9')
		return (1);
	else if (n <= '-1' && n >= '-9')
		return (-1);
	else
		return (0);
}
