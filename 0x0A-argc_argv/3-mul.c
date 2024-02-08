/*
 * File: 3-mul.c
 * Author: Zakaria Ait Ali
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the multiplicaton of two numbers
 * @argc: the number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program the receives two args - 0
 *		   If does not - 1
 */

int main(int argc, char *argv[])
{
	int firstNumber, secondNumber, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);
	result = firstNumber * secondNumber;

	printf("%d\n", result);
	return (0);
}
