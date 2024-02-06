/*
 * File: 100-is_palindrome.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"
int _strlen(char *s);
int is_palindrome(char *s);
int palindrome_check(char *s, int len, int i);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
    if (!*s)
        return (0);
    return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen(s);
	return (palindrome_check(s, len, 0));
}

/**
 * palindrome_check - check if a string is a palindrome
 * @s: string to check
 * @len: length of s
 * @i: iterator
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int palindrome_check(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	if (s[i] != s[len - i - 1])
		return (0);
	return (palindrome_check(s, len, i + 1));
}
