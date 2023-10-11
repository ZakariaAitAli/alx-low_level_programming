/*
 * File: 2-print_alphabet.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
