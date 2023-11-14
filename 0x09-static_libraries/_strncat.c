/*
 * File: 1-strncat.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
