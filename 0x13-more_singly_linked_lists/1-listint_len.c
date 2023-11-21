/*
 * File: 1-listint_len.c
 * Author: Zakaria AIT ALI
 */

#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
