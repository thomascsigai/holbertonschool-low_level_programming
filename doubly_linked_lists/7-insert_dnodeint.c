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
 * insertNodeAtEndOfList - inserts a node at the end of the list
 * @node: the node to add
 * @tail: the tail of the list
 * @n: the element value
 *
 * Return: the adress of the new node
 */
dlistint_t *insertNodeAtEndOfList(dlistint_t *node, dlistint_t *tail, int n)
{
	node = assignNodeValues(node, NULL, tail, n);
	tail->next = node;

	return (node);
}

/**
 * insertNodeAtCurrentPosition - inserts a node at the current position
 * @node: the node to add
 * @current: the current position
 * @head: the head of the list
 * @n: the element value
 *
 * Return: the adress of the new node
 */
dlistint_t *insertNodeAtCurrentPosition(dlistint_t *node, dlistint_t *current,
				dlistint_t **head, int n)
{
	if (current && current->prev)
	{
		node = assignNodeValues(node, current, current->prev, n);
		current->prev->next = node;
		current->prev = node;
	}
	else
	{
		if (*head && (*head)->next)
		{
			node = assignNodeValues(node, *head, NULL, n);
			(*head)->prev = node;
		}
		else
			node = assignNodeValues(node, NULL, NULL, n);
		*head = node;
	}

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
			if (idx == 0)
				newNode = insertNodeAtCurrentPosition(newNode, current, h, n);
			else
				newNode = insertNodeAtEndOfList(newNode, tail, n);
		}
		else
		{
			free(newNode);
			return (NULL);
		}
	}
	else
		insertNodeAtCurrentPosition(newNode, current, h, n);

	return (newNode);
}
