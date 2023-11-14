/*
 * File: 2-strlen_recursion.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */

int _strlen_recursion(char *s)
{
  int len = 0;

  if (*s)
	{
	  len++;
	  len += _strlen_recursion(s + 1);
	}

  return (len);
}
