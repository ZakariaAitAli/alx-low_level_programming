/*
 * File: 5-free_listint2.c
 * Author: Zakaria AIT ALi
 */

#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first element of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
