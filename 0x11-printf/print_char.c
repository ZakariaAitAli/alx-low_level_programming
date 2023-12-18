#include "main.h"
/**
 * print_char - prints a character
 * @arg: argument list
 * @count: pointer to count variable
 */
void print_char(va_list arg, int *count)
{
	int j = va_arg(arg, int);

	_putchar(j);
	(*count)++;
}
