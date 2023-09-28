#include "main.h"

/**
 * _pow_recursion - returns the value of z raised to power of g
 * @z: value
 * @g: power
 *
 * Return: result of power
 */
int _pow_recursion(int z, int g)
{
	if (g < 0)
		return (-1);
	if (g == 0)
		return (1);
	return (z * _pow_recursion(z, g - 1));
}
