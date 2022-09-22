#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: content
 * @n: elements of content
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
