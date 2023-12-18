#include "main.h"

/**
 * print_integer - prints an integer
 * @arg: argument list
 * @count: pointer to count variable
 * Return: void
 */

void print_integer(va_list arg, int *count)
{
	int n = va_arg(arg, int);
	int div = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		*count += 1;
	}
	for (i = 0; n / div > 9 || n / div < -9; i++)
		div *= 10;
	for (; div != 0; div /= 10)
	{
		resp = (n / div) % 10;
		if (resp < 0)
			resp *= -1;
		_putchar(resp + '0');
		*count += 1;
	}
}
