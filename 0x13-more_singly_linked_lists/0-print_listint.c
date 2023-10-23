#include "lists.h"

/**
 * print_listint - prints a list of elements
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int g;

	g = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		g++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (g);
}
