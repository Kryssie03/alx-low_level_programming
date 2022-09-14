#include "main.h"
/**
 * print_alphabet_x10 - function to print abc x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c*10);
	}
_putchar('\n');
}
