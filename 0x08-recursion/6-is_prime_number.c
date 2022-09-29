#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that checks for a prime number
 * @n: number
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	int x = 1;

	if (n <= 1)
	{
		return (0);
	}
	else if (n / x < n)
	{
		x++;
		return (0);
	}
	else if (n / 1 == n || n / n == 1)
		return(1);
	return (is_prime_number(n + 1));
}
