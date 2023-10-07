#include "main.h"

/**
 * _calloc - function name
 * @nmemb: input
 * @size: input
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int g;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (g = 0; g < nmemb * size; g++)
	{
		*(ptr + g) = 0;
	}
	return (ptr);
}
