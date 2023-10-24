#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: pointer to head of the list
 * Return: numer of elements
 */

size_t listint_len(const listint_t *h)
{
	int z;

	z = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
		z++;
		h = h->next;
	}
	return (z);
}
