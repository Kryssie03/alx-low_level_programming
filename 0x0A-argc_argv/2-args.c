#include <stdio.h>

/**
 * main - function to print all arguements it receives
 * @argc: number of arguements passed to the function
 * @argv: arguement vector of pointer to string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
