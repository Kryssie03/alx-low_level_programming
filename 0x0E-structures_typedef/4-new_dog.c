#include "dog.h"

/**
 * _strlen - returns length of string
 * @str: string
 *
 * Return: 0
 */

int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;
	return (len);
}

/**
 * _strcopy - copies string
 * @dest: Destination
 * @src: Source
 *
 * Return: 0
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] ; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}



/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: null on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);
	return (doggo);
}
