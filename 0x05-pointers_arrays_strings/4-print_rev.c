/*
 * File: 4-print_rev.c
 * Auth: Zakaria AIT ALI [zakariaaitali555@gmail.com]
 *
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
