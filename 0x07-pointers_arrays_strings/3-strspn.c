/*
 * File: 3-strspn.c
 * Auth: Zakaria Ait Ali [zakariaaitali555@gmail.com]
 *
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i] == '\0')
				return (bytes);
		}
		if (!accept[i])
		{
			return (bytes);
		}

		s++;
	}

	return (bytes);
}
