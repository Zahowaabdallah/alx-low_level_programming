#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print 
 *
 * Return: On success 1.
 * On erorr, -1 returned, and errno is set appropriately.
 */
int _putahar(char c)
{
	return (write(1, &c, 1));
}
