#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program that prints its name'
 * @argc: number of argument
 * @argv: array of pointers to the args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
