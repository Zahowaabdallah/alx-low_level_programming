#include "main.h"
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates string length.
 * @str: string
 * Return: string length, excluding the null terminator.
 */

unsigned int _strlen(char *str)
{
	unsigned int q = 0;

	while (*(str + q) != '\0')
	{
		q++;
	}

	return (q);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to be concatenated.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int g = 0, w = 0;
	unsigned int len1, len2;

	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	while (*(s1 + g) != '\0')
	{
		*(concat + g) = *(s1 + g);
		g++;
	}

	while (w < n && w <= _strlen(s2))
	{
		*(concat + g) = *(s2 + w);
		g++;
		w++;
	}
	*(concat + g) = '\0';

	return (concat);
}
