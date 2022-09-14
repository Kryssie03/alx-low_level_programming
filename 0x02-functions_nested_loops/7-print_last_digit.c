#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @n: arguement of the funtion
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	if ((n % 10) < 0)
		(n % 10) *= -1;

	_putchar((n % 10) + '0');
	return ((n % 10));
}
