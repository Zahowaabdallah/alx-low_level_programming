#include "main.h"

/**
 * _realloc - function name
 * @ptr: pointer
 * @old_size:input
 * @new_size:input
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *copy;
	unsigned int v;
	unsigned int max;

	v = 0;
	max = new_size;
	copy = (char *) ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	while (v < max)
	{
		p[v] = copy[v];
		v++;
	}
	free(copy);
	return (p);
}
