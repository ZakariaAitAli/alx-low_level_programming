#include <stdio.h>
/**
 * main - main block
 * Description: Prints the alphabet in lowercase, except for q and e.
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		if (alpha == 'e' || alpha == 'q')
			alpha++;
	}
	putchar('\n');
	return (0);
}
