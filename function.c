#include "shell.h"

/**
 * print_error - function that print error
 * @message : error message
 */

void print_error(const char *message)
{
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
}
