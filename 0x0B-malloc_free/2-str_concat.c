#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: string.
 * Return: The length of the string, excluding the null terminator.
 */

int _strlen(char *str)
{
	int z = 0;

	while (*(str + z) != '\0')
	{
		z++;
	}

	return (z);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int q = 0, r = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (concat == NULL)
		return (NULL);

	while (*(s1 + q) != '\0')
	{
		*(concat + q) = *(s1 + q);
		q++;
	}

	while (*(s2 + r) != '\0')
	{
		*(concat + q) = *(s2 + r);
		q++;
		r++;
	}
	*(concat + q) = '\0';

	return (concat);
}
