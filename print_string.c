#include "main.h"

/**
 * print_string - prints a string
 * @arg: argument list
 * @count: pointer to count variable
 */
void print_string(va_list arg, int *count)
{
	int j;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		(*count)++;
	}
}
