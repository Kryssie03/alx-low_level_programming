#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers 0 to 9
 *
 * Return: Always 0 success
 */

void print_numbers(void)
{
	int c;

	for (c >= 48; c <= 57; c++)
		putchar(c);
	
	putchar('\n');
}
