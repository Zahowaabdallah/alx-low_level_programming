#include <unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * @c: char
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
