#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the list to print
 *
 * Return: the size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}

	return (numberOfNodes);
}
