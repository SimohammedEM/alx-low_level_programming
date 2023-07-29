#include <stdlib.h>
#include "dog.h"

/**
 * strleng - used to return the length of a string when it is asked to do
 * @str: string to evaluate
 *
 * Return: return the length of the string
 */
int strleng(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *strcpy - used to copy the string
 * @test: pointer to the buffer in which we copy the string
 * @strc: string to be copied
 *
 * Return: the pointer to test
 */
char *strcpy(char *test, const char *strc)
{
	int leng, i;

	leng = 0;

	while (strc[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng; i++)
	{
		test[i] = strc[i];
	}
	test[i] = '\0';

	return (test);
}

/**
 * new_dog - used to creats a new dog
 * @name: it means the name of the dog
 * @age: it means the age of the dog
 * @owner: it means the name of the owner of the dog
 *
 * Return: for pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = strleng(name);
	leng2 = strleng(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

return (dog);
}
