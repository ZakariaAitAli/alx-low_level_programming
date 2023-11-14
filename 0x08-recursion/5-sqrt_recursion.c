/*
 * File: 5-sqrt_recursion.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return:  square root of n
 *			If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_recursion(n, i));
}

/**
 * sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * @i: iterator
 * Return:  square root of n
 *			If n does not have a natural square root, the function should return -1
 */

int sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_recursion(n, i + 1));
}
