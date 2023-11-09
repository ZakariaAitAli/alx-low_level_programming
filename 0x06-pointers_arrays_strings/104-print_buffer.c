/*
 * File: 104-print_buffer.c
 * Author: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10; j += 2)
			{
				for (k = j; k <= j + 1; k++)
				{
					if (k < size)
						printf("%02x", b[k]);
					else
						printf("  ");
				}
				printf(" ");
			}
			for (j = i; j < i + 10; j++)
			{
				if (j < size)
				{
					if (b[j] >= 32 && b[j] <= 126)
						printf("%c", b[j]);
					else
						printf(".");
				}
			}
			printf("\n");
		}
	}
}
