/*
 * File: 6-is_prime_number.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

int prime_check(int n, int i);

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}

/**
 * prime_check - check if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_check(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_check(n, i + 1));
}
