#include "main.h"
#include <stdio.h>

/**
 * _strchr - print a character string from a pointer string
 * @s: Pointer string to locate a character from
 * @c: Character constant to search for in a pointer string
 * Return: The first occurrence of the character constant
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
