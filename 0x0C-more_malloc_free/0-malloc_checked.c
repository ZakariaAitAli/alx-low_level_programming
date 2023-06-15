#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *
 * Description: 'allocates memory using malloc'
 * @b: number of bytes to be allocated
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
