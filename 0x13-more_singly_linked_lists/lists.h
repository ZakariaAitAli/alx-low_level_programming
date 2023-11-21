#ifndef ALX_LOW_LEVEL_PROGRAMMING_MAIN_H
#define ALX_LOW_LEVEL_PROGRAMMING_MAIN_H

#include <stddef.h>
#include <stdlib.h>

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

/* Prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* ALX_LOW_LEVEL_PROGRAMMING_MAIN_H */
