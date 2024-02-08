/*
 * File: 1-args.c
 * Auth: Zakaria AIT ALI
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
