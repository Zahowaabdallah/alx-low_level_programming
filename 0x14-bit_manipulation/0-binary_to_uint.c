#include "main.h"

/**
 * binary_to_unit - converts binary number to unsigned int
 * @b: input
 * Return: unsigned int or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	unsigned int z;
	unsigned int len;
	unsigned int result;

	x = 0;
	z = 0;
	len = 0;
	result = 0;

	if (!b)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);
		x++;
	}

	len = x - 1;

	x = 0;

	while (b[x] != '\0')
	{
		if (b[len] == '1')
			result += z;
		x++;
		z *= 2;
		len--;
	}

	return (result);
}
