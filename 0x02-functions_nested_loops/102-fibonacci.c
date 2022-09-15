#include <stdio.h>
/**
 * main - prints fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int i;

	for (i = 0; i < 50; ++i)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
