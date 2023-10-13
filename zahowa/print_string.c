#include "main.h"

void print_string(char *str)
{
	str = "Hello\0";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
