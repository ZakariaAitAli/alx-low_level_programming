/*
 * File: 4-add.c
 * Auth: Zakaria AIT ALI
 */

#include <stdio.h>
#include <stdlib.h>

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
		printf("Error\n");
		return (1);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		if(atoi(argv[i]) == 0 && *argv[i] != '0')
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
