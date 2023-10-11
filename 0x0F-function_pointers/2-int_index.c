#include "function_pointers.h"

/**
 * int_index - function name
 * @array: input
 * @size: input
 * @cmp: input
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);

			if (result != 0)
				return (i);
		}
	}
	return (-1);
}
