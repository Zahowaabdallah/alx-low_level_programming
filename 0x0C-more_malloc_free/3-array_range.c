#include "main.h"

/**
 * array_range - function name
 * @min: input
 * @max: input
 * Return: pointer to int.
 */

int *array_range(int min, int max)
{
	int *ptr, u;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (u = 0; u < (max - min + 1); u++)
		*(ptr + u) = min + u;
	return (ptr);
}
