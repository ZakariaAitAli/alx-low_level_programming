#include <stdarg.h>
#include "main.h"


/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int j;
	va_list arg;
	spec specifiers[] = {
			{'c', print_char},
			{'s', print_string},
			{'%', print_percent},
			{'d', print_integer},
			{'i', print_integer},
			{'\0', NULL}
	};

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (specifiers[j].type != '\0')
			{
				if (format[i] == specifiers[j].type)
				{
					specifiers[j].handler(arg, &count);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
