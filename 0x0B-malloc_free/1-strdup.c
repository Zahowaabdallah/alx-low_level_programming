#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: string
 * Return: The length of the string, or -1 if NULL.
 */

int _strlen(char *str)
{
	int z = 0;

	if (str == NULL)
	{
		return (-1);
	}

	while (*(str + z) != '\0')
	{
		z++;
	}

	return (z);
}

/**
 * _strdup - Duplicates a string.
 * @str: string
 * Return: A pointer to the duplicated string,
 * or NULL if str is NULL or memory allocation fails.
 */

char *_strdup(char *str)
{
	char *copy;
	int x = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(char) * (_strlen(str) + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	while (*(str + x) != '\0')
	{
		*(copy + x) = *(str + x);
		x++;
	}

	*(copy + x) = *(str + x);

	return (copy);
}
