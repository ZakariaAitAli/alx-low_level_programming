/*
 * File: 1-create_file.c
 * Author: Zakaria AIT ALI
 */

#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         if filename is NULL -1
 *         if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
