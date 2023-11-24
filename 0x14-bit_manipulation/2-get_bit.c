/*
 * File: 2-get_bit.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index to get bit from
 *
 * Return: value of bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits, bit;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
