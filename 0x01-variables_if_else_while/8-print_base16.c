#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 number
 */
int main(void)
{
	int d;
	char i;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}	
