#include "main.h"

/**
 * print_percent - prints a percent character
 * @arg: unused argument (va_list)
 * @count: pointer to count variable
 */
void print_percent(va_list arg, int *count)
{
	(void)arg;
	_putchar('%');
	(*count)++;
}
