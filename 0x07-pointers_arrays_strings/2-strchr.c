#include "main.h"
#include <stdio.h>

/**
 * *_strchr(char *s, char c) - print a character string from a pointer string
 * @s: pointer string to locate a character from
 * @c: character constant to search for in a pointer string
 * Return: the first occurrence of the character constant
 */

char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (char*)s;
	} while (*s++);
	return (s);
}
