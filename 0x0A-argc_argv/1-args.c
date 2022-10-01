#include <stdio.h>

/**
 * main - function to print the number of arguements passed to it
 * @argc: number of arguements passed to the function
 * @argv: arguements vectors of pointers to string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
