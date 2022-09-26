#include "main.h"
#include <stdio.h>

/**
 * *_memcpy(char *dest, char *src, unsigned int n) - copy pointer strings to another pointer
 * @dest: pointer string variable to copy to
 * @src: pointer string to copy from
 * @n: number of bytes to copy
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
