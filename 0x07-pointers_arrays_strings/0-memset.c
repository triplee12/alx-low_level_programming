#include "main.h"
#include <stdio.h>

/**
 * _memset(char *s, char b, unsigned int n)
 * @s: pointer string
 * @b: string to set
 * @n: number of string to set
 * Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr++ = b;
		--n;
	}
	return (s);
}
