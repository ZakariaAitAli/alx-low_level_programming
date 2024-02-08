/*
 * File: 100-change.c
 * Auth: Zakaria AIT ALI
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make
 *		  change for an amount of money
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: If the number of arguments is not exactly 1 - 1
 *         If the argument is negative - 0
 *         Otherwise - 0
 */

int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (coins = 0; cents > 0; coins++)
	{
		if (cents - 25 >= 0)
			cents -= 25;
		else if (cents - 10 >= 0)
			cents -= 10;
		else if (cents - 5 >= 0)
			cents -= 5;
		else if (cents - 2 >= 0)
			cents -= 2;
		else
			cents -= 1;
	}

	printf("%d\n", coins);

	return (0);
}

