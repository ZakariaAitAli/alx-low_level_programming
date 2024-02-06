/*
 * File: 101-wildcmp.c
 * Author: Zakaria AIT ALI <zakariaaitali555@gmail.com>
 */

#include "main.h"

int wildcmp(char *s1, char *s2);
int wildcmp_check(char *s1, char *s2, int i, int j);

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
    return (wildcmp_check(s1, s2, 0, 0));
}

/**
 * wildcmp_check - compare two strings
 * @s1: first string
 * @s2: second string
 * @i: iterator for s1
 * @j: iterator for s2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp_check(char *s1, char *s2, int i, int j)
{
    if (s1[i] == '\0' && s2[j] == '\0')
        return (1);
    if (s2[j] == '*')
    {
        if (s2[j + 1] == '*')
            return (wildcmp_check(s1, s2, i, j + 1));
        if (s2[j + 1] == '\0')
            return (1);
        while (s1[i])
        {
            if (wildcmp_check(s1, s2, i, j + 1))
                return (1);
            i++;
        }
        return (0);
    }
    if (s1[i] != s2[j])
        return (0);
    return (wildcmp_check(s1, s2, i + 1, j + 1));
}
