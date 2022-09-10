#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 number
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	for (k = 'A'; k <= 'Z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}	
