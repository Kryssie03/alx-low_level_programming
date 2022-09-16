#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers 0 to 9
 *
 * Return: Always 0 success
 */

void print_numbers(void)
{
	int a;

	for (a >= 48; a <= 57; a++)
		putchar(a);
	
	putchar('\n');
}
