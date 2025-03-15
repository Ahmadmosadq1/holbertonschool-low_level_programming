#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
/**
 * new_dog- Entry point
 *
 * Description: printing the memeber of the data struct.
 *
 * @name: member#1.
 * @age: member#2.
 * @owner: member#3.
 *
 * Return: new_dog
 */



/*struct function*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/*allocating memory size for the pointer*/
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	/*alloctaion memory size for name and make a copy*/
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
	}
	_strncpy(new_dog->name, name, _strlen(name));
	new_dog->name[_strlen(name)] ='\0';

	/*allocating memroy sixe for owner and make a copy*/
	new_dog->owner = malloc(_strlen(name) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
	}
	_strncpy(new_dog->owner, owner, _strlen(owner));
	new_dog->owner[_strlen(name)] ='\0';

	/*assigning age*/
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - Calculates the length of a string.
 * Description: Iterates through the string to find its length.
 *@s: string length
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * _strncpy - Copies a string from source to destination.
 * Description: Copies up to 'n' characters from src to dest.
 * @dest :The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

