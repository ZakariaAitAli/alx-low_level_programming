/*
 * File: 8-sum_listint.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
