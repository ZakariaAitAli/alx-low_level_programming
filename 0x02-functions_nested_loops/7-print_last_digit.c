/*
 * File: 7-print_last_digit.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
