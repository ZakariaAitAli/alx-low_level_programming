/*
 * File: 100-rot13.c
 * Author: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int index = 0, index2;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[index])
	{
		for (index2 = 0; index2 <= 52; index2++)
		{
			if (str[index] == alph[index2])
			{
				str[index] = rot13[index2];
				break;
			}
		}

		index++;
	}

	return (str);
}
