/*
 * File: 1-alphabet.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by new line.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
