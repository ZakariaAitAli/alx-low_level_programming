#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stddef.h>

/* _putchar.c */
int _putchar(char c);

/* printf.c */
int _printf(const char *format, ...);
void print_char(va_list arg, int *count);
void print_string(va_list arg, int *count);
void print_percent(va_list arg, int *count);
void print_integer(va_list arg, int *count);

/**
 * struct specifier - structure for specifiers
 * @type: type of specifier
 * @f: function pointer to the specifier
 */

typedef struct specifier
{
	char type;
	void (*handler)(va_list arg, int *);
} spec;

#endif /* PRINTF_MAIN_H */
