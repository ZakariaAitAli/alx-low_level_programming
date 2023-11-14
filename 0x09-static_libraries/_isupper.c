/*
 * File: 0-isupper.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 *
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
