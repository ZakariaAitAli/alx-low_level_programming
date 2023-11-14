/*
 * File: 0-strcat.c
 * Auth: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be concatenated upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
