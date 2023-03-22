#include "main.h"
/**
 * main - Entry point
 * Description: program that prints _putchar
 * Return: Always 0 (success)
 **/
int main(void)
{
	char *output = "_putchar";

	while (*output)
	{
		_putchar(*output);
		output++;
	}
	_putchar('\n');
	return (0);
}
