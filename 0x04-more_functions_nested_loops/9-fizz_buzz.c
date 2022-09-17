#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 number
 */

int main(void)
{
	int i;

	for (i >= 1; i <= 100; i++)
	{
		printf("%d ", i);

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
	}
	printf("\n");
	return (0);
}
				
