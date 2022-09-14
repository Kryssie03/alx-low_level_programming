#include "main.h"
/**
 * islower - function that checks for lowercase characters
 * @c: argument of funcion
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	       return (1);
	else 
		return (0);
}	
