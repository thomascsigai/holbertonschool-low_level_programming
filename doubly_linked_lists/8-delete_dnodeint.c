#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at specified index
 * @head: the head of the list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodeCount = 0;
	dlistint_t *current;

	if (!head)
		return (1);

	current = *head;

	while (current)
	{
		if (nodeCount == index)
		{
			if (current->prev)
			{
				if (current->next)
				{
					current->prev->next = current->next;
					current->next->prev = current->prev;
				}
				else
					current->prev->next = NULL;
			}
			else
			{
				if (current->next)
				{
					current->next->prev = NULL;
					*head = current->next;
				}
				else
					*head = NULL;
			}
			free(current);
			return (1);
		}
		nodeCount++;
		current = current->next;
	}

	return (-1);
}
