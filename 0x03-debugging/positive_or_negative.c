/*
 * File: 0-positive_or_negative.c
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Prints a random number and states whether
 *                      it is positive, negative, or zero.
 *
 * @n: the num to test
 *
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
