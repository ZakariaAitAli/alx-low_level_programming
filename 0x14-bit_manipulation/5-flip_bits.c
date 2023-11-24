/*
 * File: 5-flip_bits.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i = 0;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) == 1)
			i++;
		x = x >> 1;
	}

	return (i);
}
