/*
 * File: 9-strcpy.c
 * Auth: Zakaria AIT ALI [zakariaaitali555@gmail.com]
 *
 */

#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src
 *           to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = 0;
	return (saved);
}
