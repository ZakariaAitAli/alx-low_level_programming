/*
 * File: 5-string_toupper.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed.
 * Return: string changed.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}

	return (str);
}
