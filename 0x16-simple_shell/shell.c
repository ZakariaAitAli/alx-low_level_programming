#include "shell.h"

/**
 * execute_command - function that execute a command
 *
 * @command : the command to execute
 *
 * Return: Always 0 (Success)
 */

int execute_command(const char *command)
{
	char *args[2];

	args[0] = (char *)command;
	args[1] = NULL;

	if (execve(command, args, NULL) == -1)
	{
		write(STDERR_FILENO, "./hsh: No such file or directory\n", 33);
		_exit(EXIT_FAILURE);
	}
	_exit(EXIT_SUCCESS);
}
