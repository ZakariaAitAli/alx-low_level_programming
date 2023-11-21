/*
 * File: 0-print_listint.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The listint_t list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nbr_nodes++;
		h = h->next;
	}

	return (nbr_nodes);
}
