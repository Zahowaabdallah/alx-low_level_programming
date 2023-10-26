#include "main.h"

/**
 * get_endianness - checks weather a machine is big endian or little
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *endan = (char *)&y;

	if (*endan)
		return (1);
	return (0);

}
