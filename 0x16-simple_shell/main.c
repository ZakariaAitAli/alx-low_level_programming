#include "shell.h"

/**
 * main - Entry point
 *
 * Description: 'shell main function'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_chars;
	pid_t child_pid;
	int status;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		read_chars = read(STDIN_FILENO, buffer, BUFFER_SIZE);
		if (read_chars == 0)
		{
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		buffer[read_chars - 1] = '\0';
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error forking process");
			_exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			close(STDIN_FILENO);
			execute_command(buffer);
			_exit(EXIT_FAILURE);
		} else
		{
			waitpid(child_pid, &status, 0);
			if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
			{
				if (WEXITSTATUS(status) != EXIT_FAILURE)
				{
					write(STDERR_FILENO, "./hsh: No such file or directory\n", 33);
				}
			}
		}
	}

	return (0);
}
