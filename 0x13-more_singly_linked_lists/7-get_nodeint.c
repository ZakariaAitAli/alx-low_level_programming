/*
 * File: 7-get_nodeint.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node.
 *
 * Return: pointer to the indexed node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}

	return (node);
}
