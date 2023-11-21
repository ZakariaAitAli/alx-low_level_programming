/*
 * File: 3-add_nodeint_end.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list.
 * @n: integer to add to the list.
 *
 * Return: pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while ((*current_node).next != NULL)
		current_node = (*current_node).next;

	(*current_node).next = new_node;

	return (new_node);
}
