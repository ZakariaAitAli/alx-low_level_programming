/*
 * File: 100-is_palindrome.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

int is_palindrome(char *s);
int palindrome_check(char *s, int len, int i);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len])
		len++;
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
