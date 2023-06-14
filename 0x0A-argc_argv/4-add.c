#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'program that add two numbers'
 * @argc: number of argument
 * @argv: array of pointers to the args
 *
 * Return: 0 if success and 1 if not
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
