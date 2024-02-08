/*
 * File: 4-add.c
 * Auth: Zakaria AIT ALI
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * checkIfNumber - Check if a string is a number
 * @str: The string to be checked
 *
 * Return: 1 if the string is a number and 0 if not
*/

int checkIfNumber(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Print the sum of two numbers
 * @argc: the number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program the receives two args - 0
 *		   If does not - 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (checkIfNumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
