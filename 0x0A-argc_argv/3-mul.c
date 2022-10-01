#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiply two numbers
 * @argc: number of arguements passed to the function
 * @argv: arguement vectors of pointers to strings
 *
 * Return: 0 if no errors else 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
