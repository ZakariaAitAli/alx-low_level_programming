/*
 * File: 3-set_bit.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index to set the value at - indices start at 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask <<= index;
	*n = *n | mask;
	return (1);
}
