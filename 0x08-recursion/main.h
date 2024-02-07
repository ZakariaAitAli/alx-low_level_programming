#ifndef ALX_LOW_LEVEL_PROGRAMMING_MAIN_H
#define ALX_LOW_LEVEL_PROGRAMMING_MAIN_H

/*
 * File: main.h
 * Auth: Zakaria Ait Ali <zakariaaitali555@gmail.com>
 * Desc: Header file containing declarations for all functions
 *		 used in the 0x08-recursion directory.
 */

/* _putchar */
int _putchar(char c);

/* Prototypes for mandatory functions */
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif /* ALX_LOW_LEVEL_PROGRAMMING_MAIN_H */
