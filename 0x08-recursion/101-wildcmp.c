/*
 * File: 101-wildcmp.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

int strlen_no_wilds(char *str);
char *iterate_wild(char *wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */
int strlen_no_wilds(char *str)
{
	if (*str == '\0')
		return (0);

	if (*str == '*')
		return (strlen_no_wilds(str + 1));

	return (1 + strlen_no_wilds(str + 1));
}

/**
 * iterate_wild - Moves the pointer past consecutive '*' characters.
 * @wildstr: The string to be iterated through.
 *
 * Return: A pointer to the first non-wildcard character in wildstr.
 */
char *iterate_wild(char *wildstr)
{
	if (*wildstr == '*')
		return (iterate_wild(wildstr + 1));

	return (wildstr);
}

/**
 * postfix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str);
	int postfix_len = strlen_no_wilds(postfix);

	if (*postfix == '*')
		postfix = iterate_wild(postfix);

	if (str[str_len - postfix_len] == *postfix && *postfix != '\0')
		return (postfix_match(str, postfix + 1));

	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2 = iterate_wild(s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
