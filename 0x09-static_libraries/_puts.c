/*
 * File:  3-puts.c
 * Auth: Zakaria AIT ALI [zakariaaitali555@gmail.com]
 *
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
