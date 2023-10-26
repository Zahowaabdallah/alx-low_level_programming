#include "main.h"

/**
 * clear_bit - function
 * @n: pointer
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-x);

	x = ~(x << index);
	*n = *n & x;

	return (1);
}
