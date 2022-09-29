#include "main.h"
#include <stdio.h>

/**
 * factorial - function to return factorial of a given number
 * @n: number
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	factorial(0) = 1;
	else
		return (n * (factorial(n - 1)));
}
