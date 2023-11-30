#include "lists.h"

/**
 * assignNodeValues - assign values on a dlistint node
 * @node: the node
 * @next: the next node pointer
 * @prev: the prev node pointer
 * @n: the n value
 *
 * Return: the adress of the node
 */
dlistint_t *assignNodeValues(dlistint_t *node, dlistint_t *next,
dlistint_t *prev, int n)
{
	node->n = n;
	node->next = next;
	node->prev = prev;

	return (node);
}

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
	dlistint_t *current, *newNode, *tail;

	if (!h)
		return (NULL);
	current = *h;
	while (current && nodeCount++ != idx)
	{
		tail = current;
		current = current->next;
	}

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	if (!current)
	{
		if (nodeCount == idx)
		{
			newNode = assignNodeValues(newNode, NULL, tail, n);
			tail->next = newNode;
		}
		else
		{
			free(newNode);
			return (NULL);
		}
	}
	else
	{
		newNode = assignNodeValues(newNode, current, current->prev, n);
		if (current->prev)
			current->prev->next = newNode;
		else
			*h = newNode;
		current->prev = newNode;
	}
	return (newNode);
}
