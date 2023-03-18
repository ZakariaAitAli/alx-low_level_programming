#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16 in lowercase.
 *
 * @void: indicate no parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
