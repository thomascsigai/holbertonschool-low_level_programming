#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of the list
 * @n: the element in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	if (!head)
		return (NULL);

	current = *head;

	while (current && current->next)
		current = current->next;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = current;
	newNode->next = NULL;

	if (current)
		current->next = newNode;
	else
		*head = newNode;

	return (newNode);
}
