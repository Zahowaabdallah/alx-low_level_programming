#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @s: the string
 * Return:  the length of a string.
 */
int _strlen_recursion(char *s)
{
	int car = 0;

	if (*s)
	{
		car++;
		car += _strlen_recursion(s + 1);
	}

	return (car);
}
