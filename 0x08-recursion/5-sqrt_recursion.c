#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt = function to return square root of a number
 * @n: test number
 * @m: squared number
 *
 * Return: 0
 */

int _sqrt(int n, int m)
{
	if (n < (x / 2))
	{
		return (-1);
	}
	else if ((n * n) == x)
		return (n);
	return (_sqrt((n + 1), x));
}
