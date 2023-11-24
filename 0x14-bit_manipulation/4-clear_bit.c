/*
 * File: 4-clear_bit.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = ~(1 << index);
	*n = *n & set;

	return (1);
}