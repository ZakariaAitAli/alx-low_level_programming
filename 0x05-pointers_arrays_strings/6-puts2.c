#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description: 'function that prints every other character of a string,
 *		starting with the first character, followed by a new line.'
 *
 * @str: The string to be treated
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
