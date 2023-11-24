/*
 * File: 0-binary_to_uint.c
 * Author: Zakaria AIT ALI
 */

#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, dec;

	i = len = dec = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (i < len)
	{
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
