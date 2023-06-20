#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * strcpy - copies from source to destination.
 * @src: string source.
 * @dest: Destination to copy into.
 * Return: Return pointer
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int j = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; j < l; j++)
	{
		dest[j] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
/**
 * _strlen - Gets length of a string.
 * @str: String to calculate its length
 * Return: Return length of string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}
/**
 * new_dog - creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: The struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
