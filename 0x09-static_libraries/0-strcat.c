#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: input
 * @src: input
 * Return: pointer.
 */

char *_strcat(char *dest, char *src)
{
	int f = 0, g = 0;

	while (*(dest + f) != '\0')
	{
		f++;
	}
	while (*(src + g) != '\0')
	{
		*(dest + f) = *(src + g);
		f++;
		g++;
	}
	*(dest + f) = *(src + g);
	return (dest);
}
