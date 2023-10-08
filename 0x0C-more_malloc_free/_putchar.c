#include "mwin.h"

/**
 * _putchar - function name
 * @c: input
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
