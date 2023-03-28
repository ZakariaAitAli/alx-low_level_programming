#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 *@s: this is the pointer that point to a string
 **/
void rev_string(char *s)
{
	int i, len;

	char *begin, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}

	len = i + 1;
	begin = s;

	for (i = 0; i < len / 2; i++)
	{
		char temp;

		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
