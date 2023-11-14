/*
 * File: 3-factorial.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
