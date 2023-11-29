#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value of the element
 *
 * Return: the adress of the new node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodeCount = 0;
	dlistint_t *current, *newNode;

	if (!h)
		return (NULL);

	current = *h;

	while (current && nodeCount != idx)
	{
		nodeCount += 1;
		current = current->next;
	}

	if (!current)
		newNode = NULL;
	else
	{
		newNode = malloc(sizeof(dlistint_t));

		newNode->n = n;
		newNode->prev = current->prev;
		newNode->next = current;

		current->prev = newNode;
		
		newNode->prev->next = newNode;
	}

	return (newNode);
}
