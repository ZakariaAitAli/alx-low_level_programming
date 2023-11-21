/*
 * File: 6-pop_listint.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the first element of the list
 *
 * Return: the head node’s data (n).
 * if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = (*head)->next;
	free(current);

	return (n);
}
