#include <stdio.h>
/**
 * main - prints fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	int i;

	for (i = 0; i < 50; ++i)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);

		n1 = n2;
		n2 = n3;
	}
	return (0);
}