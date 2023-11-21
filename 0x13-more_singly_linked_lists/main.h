#ifndef ALX_LOW_LEVEL_PROGRAMMING_MAIN_H
#define ALX_LOW_LEVEL_PROGRAMMING_MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


#endif /* ALX_LOW_LEVEL_PROGRAMMING_MAIN_H */

