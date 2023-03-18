#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * @void: indicate no parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
