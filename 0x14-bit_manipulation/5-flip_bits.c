#include "main.h"

/**
 * flip_bits - function
 * @n: integer
 * @m: integer
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int counter = 0;

	dif = n ^ m;
	while (dif)
	{
		counter++;
		dif &= (dif - 1);
	}
	return (counter);
}
