#include "main.h"
/**
 * puts_half - Entry point
 *
 * Description: 'function that prints half of a string,
 *		followed by a new line.'
 * @str: the string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0;
	int n, i;

	while (str[index] != '\0')
		index++;

	if (index % 2 == 0)
		n = index / 2;
	else
		n = (index - 1) / 2;

	for (i = n ; i <= index; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
