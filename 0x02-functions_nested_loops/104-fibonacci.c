/*
 * File: 102-fibonacci.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, i0, i1, j, j0, j1, e, e0, e1, y, k;

	i = 1;
	j = 2;
	e = i + j;

	printf("%lu, ", i);
	printf("%lu, ", j);
	for (y = 3; y < 89; y++)
	{
		printf("%lu, ", e);
		i = j;
		j = e;
		e = i + j;
	}
	j0 = j / 1000000000;
	j1 = j % 1000000000;
	e0 = e / 1000000000;
	e1 = e % 1000000000;
	for (k = 89; k < 98; k++)
	{
		printf("%lu%lu, ", e0, e1);
		i0 = j0;
		i1 = j1;
		j0 = e0;
		j1 = e1;
		e0 = i0 + j0 + ((i1 + j1) / 1000000000);
		e1 = (i1 + j1) % 1000000000;
	}
printf("%lu%lu\n", e0, e1);
	return (0);
}

