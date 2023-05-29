#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * Description: 'prints n elements of an array of integers'
 * @a: the array of numbers
 * @n: the number of ellement
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
