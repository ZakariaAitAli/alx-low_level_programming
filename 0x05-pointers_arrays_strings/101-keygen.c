#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum - executes checksum
 * @s: input char
 * Return: checksum
 */
unsigned long checksum(char *s)
{
unsigned long sum = 0;
while (*s != 0)
{
	sum += *s;
	s++;
}
return (sum);
}
/**
 * main - prints password for crakme
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i, flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		s[i] = '\0';
		sum = checksum(s);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
return (0);
}
