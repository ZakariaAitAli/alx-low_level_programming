/*
 * File: 3-print_alphabets.c
 * Auth: Zakaria Ait Ali
 */

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 *
 * @void: indicate no parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
