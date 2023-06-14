#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'program that multiplies two numbers'
 * @argc: number of argument
 * @argv: array of pointers to the args
 *
 * Return: 0 if success and 1 if not
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
