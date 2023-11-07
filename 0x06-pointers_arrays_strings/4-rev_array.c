/*
 * File: 4-rev_array.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
