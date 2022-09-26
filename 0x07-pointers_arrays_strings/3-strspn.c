#include "main.h"
#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring
 * @s: Pointer string to check
 * @accept: Poiter string of substring
 * Return: The number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s;
	char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c == '\0')
			break;
		s++;
	}
	return (s - s1);
}
