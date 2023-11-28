/*
 * File: 2-append_text_to_file.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         -1 if filename is NULL.
 *         -1 if text_content is NULL.
 *         -1 if file can not be created, opened or written to.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		w = write(o, text_content, len);
		if (w < 0)
			return (-1);
	}

	close(o);

	return (1);
}
