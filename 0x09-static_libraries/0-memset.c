#include "main.h"

/**
 * _memset - function
 * @k: input
 * @a: input
 * @d: input
 * Return: pointer.
 */
char *_memset(char *k, char a, unsigned int d)
{
	while (d--)
		*(k + d) = a;
	return (k);
}
