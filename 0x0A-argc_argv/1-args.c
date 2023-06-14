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
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
