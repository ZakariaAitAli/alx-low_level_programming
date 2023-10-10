/*
 * File: 2-print_alphabet_x10.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count++ <= 9)
	{
		print_alphabet();
	}
}
